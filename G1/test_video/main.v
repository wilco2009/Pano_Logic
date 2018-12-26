`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Alejandro Valero (wilco2009)
// 
// Create Date:    17:08:24 12/26/2018 
// Design Name: Test_video VGA
// Module Name:    test_video 
// Project Name: Test video Pano G1 
// Target Devices: Pano G2
// Tool versions: 
// Description: Test de video VGA 800x600 50Hz
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module main(
    input osc_clk,
    output vo_clk,
    output vo_vsync,
    output vo_hsync,
    output vo_blank_,
    output [7:0] vo_r,
    output [7:0] vo_g,
    output [7:0] vo_b
    );
	 
wire clk_rst;
 
//	always@(posedge osc_clk)
//		clk_div2 = ~clk_div2;
//
//	always@(posedge clk_div2)
//		clk_div4 = ~clk_div4;
//
//	assign vo_clk = clk_div4;
	
	wire clkvideo;  
	wire vid_en;
//	wire hs;
//	wire vs;
	wire [10:0] vid_x;
	wire [10:0] vid_y;

	assign clk_rst = 1'b0;
	assign vo_blank_ = 1'b1;
  
	DCM_div2 clock_gen (
		.CLKIN_IN(osc_clk),
		.CLKDV_OUT(clkvideo),
		.DDR_CLK0_OUT(vo_clk),
		.CE_IN(1'b1),
		.CLR_IN(1'b0),
		.PRE_IN(1'b0), 
		.RST_IN(clk_rst) 
	);
	
	signals video_signals (
		.VIDCLK(clkvideo),
		.VSYNC(vo_vsync),
		.HSYNC(vo_hsync),
		.HPOS(vid_x),
		.VPOS(vid_y),
		.VIDEN(vid_en)		
	);
	
	background fondo (
		.VX(vid_x),
		.VY(vid_y),
		.VIDEN(vid_en),
		.R(vo_r),
		.G(vo_g),
		.B(vo_b)
	);
 
endmodule
