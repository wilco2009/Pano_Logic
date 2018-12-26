`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:59:56 12/26/2018
// Design Name:   main
// Module Name:   C:/Users/aleja/OneDrive/ISEWebpack/Pano G1/test_video/clktest_tv.v
// Project Name:  test_video
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module clktest_tv;

	// Inputs
	reg osc_clk;
	reg vo_blank_;

	// Outputs
	wire vo_clk;
	wire vo_vsync;
	wire vo_hsync;
	wire [7:0] vo_r;
	wire [7:0] vo_g;
	wire [7:0] vo_b;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.osc_clk(osc_clk), 
		.vo_clk(vo_clk), 
		.vo_vsync(vo_vsync), 
		.vo_hsync(vo_hsync), 
		.vo_blank_(vo_blank_), 
		.vo_r(vo_r), 
		.vo_g(vo_g), 
		.vo_b(vo_b)
	);
	
	always
		#5 osc_clk = !osc_clk;

	initial begin
		// Initialize Inputs
		osc_clk = 0;
		vo_blank_ = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		
        
		// Add stimulus here

	end
      
endmodule

