`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:21:27 12/30/2018 
// Design Name: 
// Module Name:    I2C_Command 
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
module I2C_Command(
    input [7:0] slave_addr,
    input [7:0] Register,
    input [7:0] Data,
	 input sys_clk,
    inout sda,
    inout scl,
	 input enable,
	 output free
    );

	wire sys_rst;
	reg start;
	reg stop;
	reg read;
	reg write;
	reg send_ack;
	reg [7:0] mstr_din;

//	wire free;
	wire rec_ack;
	wire ready;
	wire [5:0] core_state;
	wire [7:0] mstr_dout;

	assign sys_rst = 1'b0;
	reg cmd_pending = 1'b0;

	 	
	i2c_master_v01 I2C (
      .sys_clk(sys_clk),
      .sys_rst(sys_rst),
      .start(start),
      .stop(stop),
      .read(read),
      .write(write),
      .send_ack(send_ack),
      .mstr_din(mstr_din),

      .sda(sda),
      .scl(scl),
      .free(free),
      .rec_ack(rec_ack),
      .ready(ready),
      .core_state(core_state),
      .mstr_dout(mstr_dout)
	);
	
	reg [7:0] mstd = 0;
	always@(posedge sys_clk) begin
		case(mstd)
			8'd0: begin // start bit
				if (enable) cmd_pending = 1;
				if (free && cmd_pending) begin
					start = 1'b1;
					cmd_pending = 0;
					
					mstd = mstd+1;
				end
			end
			8'd1:begin // wait ready
				start = 1'b0;
				if (ready==1'b1) begin
					mstd = mstd+1;
				end
			end
			8'd2: begin // Set Addr
				mstr_din = slave_addr;
				write = 1'b1;
				mstd = mstd+1;
			end
			8'd3: begin
				write = 1'b0;
				if (ready==1'b1) begin
					mstd = mstd+1;
				end
			end
			8'd4: begin // wait ack
				if (rec_ack) begin
					mstd = mstd+1;
				end
			end
			8'd5: begin // send register number
				mstr_din = Register;
				write = 1'b1;
				mstd = mstd+1;
			end
			8'd6: begin
				write = 1'b0;
				if (ready==1'b1) begin
					mstd = mstd+1;
				end
			end
			8'd7: begin // wait ack
				if (rec_ack) begin
					mstd = mstd+1;
				end
			end
			8'd8: begin // send data
				mstr_din = Data;
				write = 1'b1;
				mstd = mstd+1;
			end
			8'd9:begin
				write = 1'b0;
				if (ready==1'b1) begin
					mstd = mstd+1;
				end
			end
			8'd10: begin // wait ack
				if (rec_ack) begin
					mstd = mstd+1;
				end
			end
			8'd11: begin // stop bit
				stop = 1'b1;
				mstd = mstd+1;
			end
		default: begin
			stop = 1'b0;
			mstd = 0;
		end
		endcase
	end

endmodule
