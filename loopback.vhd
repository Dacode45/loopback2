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
		--- vga
		
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
	
	COMPONENT myram
  PORT (
    clka : IN STD_LOGIC;
    wea : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
    addra : IN STD_LOGIC_VECTOR(15 DOWNTO 0);
    dina : IN STD_LOGIC_VECTOR(8 DOWNTO 0);
    clkb : IN STD_LOGIC;
    rstb : IN STD_LOGIC;
    addrb : IN STD_LOGIC_VECTOR(15 DOWNTO 0);
    doutb : OUT STD_LOGIC_VECTOR(8 DOWNTO 0)
  );
END COMPONENT;

	component mydcm is
port
 (-- Clock in ports
  CLK_IN1           : in     std_logic;
  -- Clock out ports
  CLK_OUT1          : out    std_logic;
  CLK_OUT2          : out    std_logic
 );
end component;

	--States
	TYPE states IS (s0, s1, s2, s3, s4, s5, s6, s7);
	
	SIGNAL state: states := s0;
	SIGNAL nxt_state : states := s0;
	
	--Clks
	SIGNAL d_clk : STD_LOGIC := '0';
	SIGNAL v_clk : STD_LOGIC := '0';
	
	-----------------------------------------
	--Resgister
	--------------------------------------------
		--read byte
	SIGNAL d_lower : STD_LOGIC_VECTOR(7 downto 0):= (others => '0');
	SIGNAL d_upper : STD_LOGIC_VECTOR(7 downto 0):= (others => '0');
		--Memory control
	SIGNAL mem_set : STD_LOGIC_VECTOR(0 downto 0) := (others => '0'); --memory should be set the next tick
	SIGNAL mem_full : STD_LOGIC := '0';
	SIGNAL d_addr_counter : STD_LOGIC_VECTOR(15 downto 0) := (others => '0');
	SIGNAL v_addr_counter : STD_LOGIC_VECTOR(15 downto 0) := (others => '0');
		--Watchdog
	SIGNAL watch_dog_counter: STD_LOGIC_VECTOR(1 downto 0) := (others => '0');
		--Data
	SIGNAL d_out : STD_LOGIC_VECTOR(8 downto 0):=(others => '0');
		--RGB To Display start as white
	SIGNAL rgb : STD_LOGIC_VECTOR(8 downto 0) := (others => '1');
		--Video Counters
	SIGNAL h_counter : STD_LOGIC_VECTOR(9 downto 0) := "0000000000";
	SIGNAL v_counter : STD_LOGIC_VECTOR(9 downto 0) := "0000000000";
		--Next h_sync
	SIGNAL tmp_h_sync: STD_LOGIC := '1';
	SIGNAL tmp_v_sync: STD_LOGIC := '1';
	
	------------------------------------------
	--Internal Signals
	------------------------------------------
	SIGNAL concat : STD_LOGIC_VECTOR(15 downto 0);
	SIGNAL crap : STD_LOGIC; -- all ones
		--Read Control
	SIGNAL nxt_oe_l : STD_LOGIC;
	SIGNAL nxt_rd_l : STD_LOGIC;
	SIGNAL en_lower : STD_LOGIC;
	SIGNAL en_upper : STD_LOGIC;
		--video counter resets
	SIGNAL h_counter_reset : STD_LOGIC;
	SIGNAL v_counter_reset : STD_LOGIC;
		--Write To Memory
	SIGNAL d_in : STD_LOGIC_VECTOR(8 downto 0);
		--Enable Color
	SIGNAL color_en: STD_LOGIC;
		--Temporary Sync Signals
	SIGNAL nxt_h_sync: STD_LOGIC;
	SIGNAL nxt_v_sync: STD_LOGIC;
		--Next ADDRESS of color to get
	SIGNAL nxt_v_addr_counter: STD_LOGIC_VECTOR(15 downto 0);
	
		--Fliped reset
	SIGNAL reset_h : STD_LOGIC;
			
begin

clkControl : mydcm
		port map
   (-- Clock in ports
    CLK_IN1 => clk_in,
    -- Clock out ports
    CLK_OUT1 => d_clk,
    CLK_OUT2 => v_clk);

memory : myram
  PORT MAP (
    clka => d_clk,
    wea => mem_set,
    addra => d_addr_counter,
    dina => d_in,
    clkb => v_clk,
    rstb => reset_h,
    addrb => v_addr_counter,
    doutb => d_out
  );

	--Handle register transfers for d clock.
	d_clkd : PROCESS (d_clk)
	BEGIN
		--Handle states
		if (rising_edge(d_clk)) then
		
			if(crap='1' or reset_h='1') then
				state <= s0;
			else 
				state <= nxt_state;
			end if;
			
			if en_lower = '1' then
				d_lower <= data;
			end if;
			
			if en_upper = '1' then
				d_upper <= d_lower;
			end if;
			
			if(state = s0 or state = s1 or state = s2 or state = s3 or state = s4 or state = s5 or state = s6 or state = s7) then
				watch_dog_counter <= watch_dog_counter +1;
			else
				watch_dog_counter <= (others => '0');
			end if;
			
		end if;
		
	END PROCESS d_clkd;
	
	--Handle register transfers for v clock.
	v_clkd : PROCESS (v_clk)
	BEGIN
		--Handle Counters
		if (rising_edge(v_clk)) then
			---799
			if h_counter_reset = '1' then
				h_counter <= ( others => '0');
			else
				h_counter <= h_counter+1;
			end if;
			
			--524
			if v_counter_reset = '1' then
				v_counter <= ( others => '0');
			elsif h_counter_reset = '1' then
				v_counter <= v_counter+1;
			end if;
		end if;
		
	END PROCESS v_clkd;
	
	--Pick the color to use
	pick_color: PROCESS (v_clk)
	BEGIN
		if (rising_edge(v_clk)) then
			if color_en = '0' then
				rgb <= (others => '0');
			else
				rgb <= d_out;
			end if;
		end if;
	END PROCESS pick_color;
	
	--GEN SYNC SIGNALS
	sync : PROCESS (v_clk)
	BEGIN
		if(rising_edge(v_clk)) then
			tmp_h_sync <= nxt_h_sync;
			tmp_v_sync <= nxt_v_sync;
		end if;
	END PROCESS sync;
	
	
	--Handle Data Address Calculation
	d_addr_gen : PROCESS(d_clk)
	BEGIN
		if (rising_edge(d_clk)) then
			if (state = s0) then
				d_addr_counter <= ( others => '0');
			else
				if (state = s7 and mem_full = '0') then
					d_addr_counter <= d_addr_counter + 1;
				end if;
			end if;
		end if;
	END PROCESS d_addr_gen;
	
	--Handle state transitions
	state_trans: PROCESS(rxf_l, txe_l, state)
	BEGIN
		CASE state IS
			when s0 => nxt_state <= s1;
			when s1 => if (rxf_l = '1') then
								nxt_state <= s1;
							else
								nxt_state <= s2;
							end if;
			when s2 => nxt_state <= s3;
			when s3 => nxt_state <= s4;
			when s4 => if (rxf_l = '1') then
								nxt_state <= s4;
							else
								nxt_state <= s5;
							end if;
			when s5 => nxt_state <= s6;
			when s6 => nxt_state <= s7;
			when s7 => nxt_state <= s1;
		END CASE;
	END PROCESS state_trans;
	
	--Handle CL to Register  transfers
	d_output: PROCESS(d_clk)
	BEGIN
	
		if(rising_edge(d_clk)) then
			rd_l <= nxt_rd_l;
			oe_l <= nxt_oe_l;
		end if;	
		
	END PROCESS d_output;
	
	--Get DATA FROM Memory
	color_data: PROCESS(v_clk)
	BEGIN
		if(rising_edge(v_clk)) then
			v_addr_counter <= nxt_v_addr_counter;
		end if;
	END PROCESS color_data;
	
	--Read FTDI Logic
	nxt_oe_l <= '0' when (state = s2 or state = s3 or state = s5 or state = s6) else '1';
	nxt_rd_l <= '0' when (state = s3 or state = s6) else '1';
	en_lower <= '1' when (state = s3 or state = s6) else '0';
	en_upper <= '1' when (state = s6 ) else '0';
	
	--Write MEM Logic
	concat <= d_upper & d_lower;
	crap <= '1' when not (d_upper & d_lower) = 0 else '0';
	d_in <= concat(8 downto 0);
	mem_full <= '1' when not (d_addr_counter) = 0 else '0';
	mem_set <= (others => '1') when (state = s7 ) else (others => '0');
	
	--RESET HCOUNTER
	h_counter_reset <= '1' when (h_counter = 799) else '0';
	v_counter_reset <= '1' when (v_counter = 524) else '0';
	--GEN ADDRESS to get color
	nxt_v_addr_counter <= (v_counter(7 downto 0) + (256-45)) & (h_counter(7 downto 0) + (256-156));
	--enable color the tick before data comes out. 
	color_en <= '1' WHEN ((159 <= h_counter) and (h_counter < 800) and (44 < v_counter) and (v_counter < 525)) else '0';
	--sync
	nxt_h_sync <= '0' when (0 <= h_counter and h_counter < 96) else '1';
	nxt_v_sync <= '0' when (0 <= v_counter and v_counter < 2) else '1';
	h_sync <= tmp_h_sync;
	v_sync <= tmp_v_sync;
	--color
	r0 <= rgb(8);
	r1 <= rgb(7);
	r2 <= rgb(6);
	g0 <= rgb(5);
	g1 <= rgb(4);
	g2 <= rgb(3);
	b0 <= rgb(2);
	b1 <= rgb(1);
	b2 <= rgb(0);
	-- Drive Watch Dog
	wdi <= '1' when not (watch_dog_counter) = 0 else '0';
	--Currently Undriven signals
	siwua <= '1';
	wr_l <= '1';
	
	--Handle reset
	reset_h <= not reset_l;
	
end Behavioral;

