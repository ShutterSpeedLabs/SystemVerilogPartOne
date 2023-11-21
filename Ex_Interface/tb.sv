`timescale 1ns/1ps
`include "Ex_Interface/add_if.sv"
`include "Ex_Interface/add.sv"
`include "Ex_Interface/driver.sv"

module tb;
  
 add_if aif();
  driver drv;
  
  add dut (aif.a, aif.b, aif.sum, aif.clk );
 
 
  initial begin
    aif.clk = 0;
  end
  
  always #10 aif.clk <= ~aif.clk;
 
   initial begin
     drv = new();
     drv.aif = aif;
     drv.run();
     
   end
  
  initial begin
    $dumpfile("dump.vcd"); 
    $dumpvars;  
    #100;
    $finish();
  end
  
endmodule
