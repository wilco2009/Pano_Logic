`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Alejandro Valero (wilco2009)
// 
// Create Date:    17:08:24 12/22/2018 
// Design Name: Test
// Module Name:    Blink 
// Project Name: Test Pano G2
// Target Devices: Pano G2
// Tool versions: 
// Description: Led Test Pano G2
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Blink(
    input clk,
    output led_green,
    output led_blue,
    output led_red
    );

	parameter CLK_FREQ = 20000000;
   parameter BLINK_FREQ = 1;
   parameter CNT_MAX = CLK_FREQ/BLINK_FREQ/2-1;

   reg[32:0] cnt;
   reg blink;
	
	always@(posedge clk)
	begin
		if (cnt==CNT_MAX) begin
			cnt <= 0;
			blink <= !blink;
		end else begin
			cnt <= cnt + 1;
		end;
	end;

	assign led_red = !blink;
	assign led_green = !blink;
	assign led_blue = blink;


endmodule
