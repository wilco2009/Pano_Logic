`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:11:39 12/29/2018
// Design Name:   Audio_test_main
// Module Name:   C:/Users/aleja/OneDrive/Github/Mio/Pano/Pano_Logic/G1/test_audio/Audio_test_tb.v
// Project Name:  test_audio
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Audio_test_main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Audio_test_tb;

	// Inputs
	reg osc_clk;

	// Outputs
	wire vo_scl;
	wire DACDAT;

	// Bidirs
	wire vo_sda;

	// Instantiate the Unit Under Test (UUT)
	Audio_test_main uut (
		.osc_clk(osc_clk), 
		.vo_sda(vo_sda), 
		.vo_scl(vo_scl), 
		.DACDAT(DACDAT)
	);

	initial begin
		// Initialize Inputs
		osc_clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
		// Add stimulus here

		#86000;
		force vo_sda = 0;
		#4000;
		release vo_sda;
		#86000;
		force vo_sda = 0;
		#5000;
		release vo_sda;
		#86000;
		force vo_sda = 0;
		#5000; 
		release vo_sda;
        

	end
	
	always #5 osc_clk = ~osc_clk;
      
endmodule

