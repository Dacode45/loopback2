library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;
entity loopback is
PORT(
		clk_in : IN STD_LOGIC;
		
		--control
		reset_l : IN STD_LOGIC;
		
		rxf_l : IN STD_LOGIC;
		txe_l : IN STD_LOGIC;
		oe_l : OUT STD_LOGIC;
		rd_l : OUT STD_LOGIC;
		wr_l : OUT STD_LOGIC;
		siwua : OUT STD_LOGIC;
		wdi: OUT STD_LOGIC;
		data : INOUT STD_LOGIC_VECTOR(7 downto 0);
		---vga
		
		h_sync : OUT STD_LOGIC;
		v_sync : OUT STD_LOGIC;
		r0 : OUT STD_LOGIC;
		r1 : OUT STD_LOGIC;
		r2 : OUT STD_LOGIC;
		g0 : OUT STD_LOGIC;
		g1 : OUT STD_LOGIC;
		g2 : OUT STD_LOGIC;
		b0 : OUT STD_LOGIC;
		b1 : OUT STD_LOGIC;
		b2 : OUT STD_LOGIC
		
	);
end loopback;

architecture Behavioral of loopback is
	
	component mydcm is
port
 (-- Clock in ports
  CLK_IN1           : in     std_logic;
  -- Clock out ports
  CLK_OUT1          : out    std_logic;
  CLK_OUT2          : out    std_logic
 );
end component;

	TYPE states IS (s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10);
	--STATES
	--s0 :  Waits for FTDI to drop RXF initiating the transaction.
	--s1 : Assert(nxt_oe_l, nxt_eni) Drop nxt_oe_l low. oe_l will be dropped the next clock tick.
	--s2 : Assert(nxt_oe_l, nxt_rd_l, nxt_eni) Drop nxt_rd_l low. rd_l will be dropped the next clock tick. warm up tristate
	--s3 : Assert(nxt_oe_l, nxt_rd_l). Capture the first byte of the data. Cooldown tristate bufer
	--s4 : Turnaround cycle, do nothing as long as TXE is high.
	--s5 : Assert(nxt_en_o), Prep for write by dropping warming up tristate buffer
	--s6: Assert(nxt_wr_l, nxt_en_o), Prep for write by putting out data.
	--s7 : At this point d_int should be outputing data, while write is high. 
	--s8 : Assert(nxt_siwua). wr_l should be high now.
	--s9: Empty sate. siwua should be low 1 clock tick after write has been high.
	--s10 : Do nothing. Let siwua go back high. Go to s0.
	SIGNAL state: states := s0;
	SIGNAL nxt_state : states := s0;
	
	--iNTERNAL SIGNALS
	SIGNAL d_int : STD_LOGIC_VECTOR(7 downto 0) := "ZZZZZZZZ"; --internal register 
	SIGNAL en_o : STD_LOGIC := '0'; -- enable data output
	SIGNAL en_i : STD_LOGIC := '0'; -- enable data input
	
	SIGNAL tmp_en_o : STD_LOGIC := '0'; -- enable data output prep
	SIGNAL tmp_en_i : STD_LOGIC := '0'; -- enable data input
	SIGNAL tmp_rd_l : STD_LOGIC := '1'; -- register for rd
	SIGNAL tmp_oe_l : STD_LOGIC := '1'; -- register for oe
	SIGNAL tmp_wr_l : STD_LOGIC := '1'; -- register for wr
	SIGNAL tmp_siwua : STD_LOGIC := '1'; -- register for siwua
	
	SIGNAL d_clk	: STD_LOGIC;
	SIGNAL v_clk : STD_LOGIC;
	
	SIGNAL h_counter : STD_LOGIC_VECTOR(9 downto 0) := "0000000000";
	SIGNAL v_counter : STD_LOGIC_VECTOR(9 downto 0) := "0000000000";
	--sync
	SIGNAL tmp_h_sync : STD_LOGIC := '1';
	SIGNAL tmp_v_sync : STD_LOGIC := '1';
	
	SIGNAL tmp_r0 : STD_LOGIC := '0';
	SIGNAL tmp_r1 : STD_LOGIC := '0';
	SIGNAL tmp_r2 : STD_LOGIC := '0';
	SIGNAL tmp_g0 : STD_LOGIC := '0';
	SIGNAL tmp_g1 : STD_LOGIC := '0';
	SIGNAL tmp_g2 : STD_LOGIC := '0';
	SIGNAL tmp_b0 : STD_LOGIC := '0';
	SIGNAL tmp_b1 : STD_LOGIC := '0';
	SIGNAL tmp_b2 : STD_LOGIC := '0';
			
begin

clkControl : mydcm
		port map
   (-- Clock in ports
    CLK_IN1 => clk_in,
    -- Clock out ports
    CLK_OUT1 => d_clk,
    CLK_OUT2 => v_clk);

	--Handle register transfers.
	d_clkd : PROCESS (d_clk)
	BEGIN
		--Handle states
		if (rising_edge(d_clk)) then
			state <= nxt_state;
		
			if en_i = '1' then
				d_int <= data;
			end if;
			
		end if;
		
	END PROCESS d_clkd;
	
	v_clkd : PROCESS (v_clk)
	BEGIN
		--Handle Counters
		if (rising_edge(v_clk)) then
			---799
			if h_counter = x"31F" then
				h_counter <= ( others => '0');
			else
				h_counter <= h_counter+1;
			end if;
			
			--524
			if v_counter = x"20C" then
				v_counter <= ( others => '0');
			elsif h_counter = x"31F" then
				v_counter <= v_counter+1;
			else
				v_counter <= v_counter;
			end if;
		end if;
		
	END PROCESS v_clkd;
	
	--Handle state transitions
	state_trans: PROCESS(reset_l, rxf_l, txe_l, state)
	BEGIN
		--set defaut 
		nxt_state <= state;
		CASE state IS
			WHEN s0 => if (rxf_l = '1') then
							nxt_state <= s0;
						else
						nxt_state <= s1;
						end if;
			WHEN s1 => nxt_state <= s2;
			WHEN S2 => nxt_state <= s3;
			WHEN s3 => nxt_state <= s4;
			WHEN s4 => if(txe_l = '1') then
						nxt_state <= s4;
						else
						nxt_state <= s5;
						end if;
			WHEN s5 => nxt_state <= s6;
			WHEN s6 => nxt_state <= s7;
			WHEN s7 => nxt_state <= s8;
			WHEN s8 => nxt_state <= s9;
			WHEN s9 => nxt_state <= s10;
			WHEN s10 => nxt_state <= s0;
		END CASE;
	END PROCESS state_trans;
	
	--Handle CL to Register  transfers
	output: PROCESS(d_clk)
	BEGIN
	
		if(rising_edge(d_clk)) then
			rd_l <= tmp_rd_l;
			oe_l <= tmp_oe_l;
			wr_l <= tmp_wr_l;
			siwua <= tmp_siwua;
			en_i <= tmp_en_i;
			en_o <= tmp_en_o;
			if en_o = '1' then
				data <= d_int;
			else
				data <= (others => 'Z');
			end if;
		end if;
		
		
	END PROCESS output;
	
	set_output: PROCESS (v_clk)
	BEGIN
		if (rising_edge(v_clk)) then
			h_sync <= tmp_h_sync;
			v_sync <= tmp_v_sync;
			
			tmp_r0 <= h_counter(8);
			tmp_r1 <= h_counter(7);
			tmp_r2 <= h_counter(6);
			tmp_g0 <= h_counter(5);
			tmp_g1 <= h_counter(4);
			tmp_g2 <= h_counter(3);
			tmp_b0 <= h_counter(2);
			tmp_b1 <= h_counter(1);
			tmp_b2 <= h_counter(0);
			
			r0 <= tmp_r0;
			r1 <= tmp_r1;
			r2 <= tmp_r2;
			g0 <= tmp_g0;
			g1 <= tmp_g1;
			g2 <= tmp_g2;
			b0 <= tmp_b0;
			b1 <= tmp_b1;
			b2 <= tmp_b2;
		end if;
	END PROCESS set_output;
	
	sync : PROCESS(v_clk)
	BEGIN
		if(rising_edge(v_clk)) then
			if (x"0" <= h_counter and h_counter < 96) then
				tmp_h_sync <= '0';
			else
				tmp_h_sync <= '1';
			end if;
			
			if x"0" <= v_counter and v_counter < 2 then
				tmp_v_sync <= '0';
			else
				tmp_v_sync <= '1';
			end if;
		end if;
	END PROCESS sync;
	
	--State transitions
	tmp_rd_l <= '0' when(state = s2 or state = s3) else '1';
	tmp_oe_l <= '0' when(state = s1 or state = s2 or state = s3) else '1';
	tmp_wr_l <= '0' when(state = s6) else '1';
	tmp_siwua <= '0' when(state = s8) else '1';
	tmp_en_i <= '1' when(state = s1 or state = s2) else '0';
	tmp_en_o <= '1' when(state = s5 or state = s6) else '0';
	
end Behavioral;

