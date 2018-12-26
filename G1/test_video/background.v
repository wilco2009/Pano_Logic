`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:24:04 12/26/2018 
// Design Name: 
// Module Name:    background 
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
module background(
    input [10:0] VX,
    input [10:0] VY,
    input VIDEN,
    output reg [7:0] R,
    output reg [7:0] G,
    output reg [7:0] B
    );

	always@* begin
		if (VIDEN == 1'b1) begin
			if (VY < 11'd200) begin
				R = VX[10:3];
				G = 8'd0;
				B = 8'd0;
			end else if (VY < 11'd400) begin
				R = 8'd0;
				G = VX[10:3];
				B = 8'd0;
			end else begin
				R = 8'd0;
				G = 8'd0;
				B = VX[10:3];
			end
		end else begin
			R = 8'd0;
			G = 8'd0;
			B = 8'd0;
		end
	end

endmodule
