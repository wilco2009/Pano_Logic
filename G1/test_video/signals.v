`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:26:11 12/26/2018 
// Design Name: 
// Module Name:    signals 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module signals(
    input VIDCLK,
    output VSYNC,
    output HSYNC,
    output [10:0] HPOS,
    output [10:0] VPOS,
    output VIDEN
    );

	// ModeLine "800x600" 50.00 800 856 976 1040 600 637 643 666 +HSync +VSync

	parameter HACTIVE = 800;
	parameter HFRONTPORCH = 856;
	parameter HSYNCPULSE = 976;
	parameter HTOTAL = 1040;
	parameter VACTIVE = 600;
	parameter VFRONTPORCH = 637;
	parameter VSYNCPULSE = 643;
	parameter VTOTAL = 666;
	parameter HSYNCPOL = 1;  // 0 = polaridad negativa, 1 = polaridad positiva
	parameter VSYNCPOL = 1;  // 0 = polaridad negativa, 1 = polaridad positiva

	reg [10:0] hc = 11'd0;
	reg [10:0] vc = 11'd0;
	
	always@(posedge VIDCLK) begin
		if (hc == HTOTAL-1) begin
			hc <= 11'b0;
			if (vc == VTOTAL-1) begin
				vc <= 11'b0;
			end else begin
				vc <= vc+11'b1;
			end
		end else begin
			hc <= hc + 11'b1;
		end
	end
	
	assign VIDEN = (hc < HACTIVE) && (vc < VACTIVE);
	assign HSYNC = ((hc >= HFRONTPORCH) && (hc < HSYNCPULSE))? HSYNCPOL: ~HSYNCPOL; 
	assign VSYNC = ((vc >= VFRONTPORCH) && (vc < VSYNCPULSE))? VSYNCPOL: ~VSYNCPOL;
	assign HPOS = hc;
	assign VPOS = vc;

endmodule
