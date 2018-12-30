`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Alejandro Valero (wilco2009)
// 
// Create Date:    10:33:27 12/27/2018 
// Design Name: 
// Module Name:    Audio_test_main 
// Project Name: 
// Target Devices: Pano G1
// Tool versions: 
// Description: Audio test for a Pano G1
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Audio_test_main(
    input osc_clk,
    inout vo_sda,
    output vo_scl,
	 output DACDAT,
    output led_green,
    output led_blue,
    output led_red
    );
	 
	parameter Aud_Addr = 8'h35;
	
	reg cmd_en = 1;
	wire I2C_bus_free;
	
	always@(posedge osc_clk) begin
		if (cmd_en) cmd_en = 1'b0;
	end

	I2C_Command I2Ccmd (
		 .slave_addr(Aud_Addr),
		 .Register(8'h0A), // Left Channel Digital Volume
		 .Data(8'hFF), // Maximum volume and update
		 .sda(vo_sda),
		 .scl(vo_scl),
		 .sys_clk(osc_clk),
		 .enable(cmd_en),
		 .free(I2C_bus_free),
		 .r(led_red),
		 .g(led_green),
		 .b(led_blue)
		 );


endmodule
