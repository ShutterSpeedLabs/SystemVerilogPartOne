`timescale 1ns/1ps

`include "Interface/add.sv"
`include "Interface/add_if.sv"
`include "Interface/driver.sv"
`include "Interface/generator.sv"

module tb;
  
    add_if aif();
    driver drv;
    generator gen;
    event done;
 
  
    mailbox #(transaction) mbx;
  
    add dut (aif.a, aif.b, aif.sum, aif.clk );
 
 
    initial begin
        aif.clk <= 0;
    end
  
    always #10 aif.clk <= ~aif.clk;
 
    initial begin
        mbx = new();
        drv = new(mbx);
        gen = new(mbx);
        drv.aif = aif;
        done = gen.done;
    end
  
    initial begin
        fork
            gen.run();
            drv.run();
        join_none
        wait(done.triggered);
        $finish();
    end
  
  
    initial begin
        $dumpfile("dump.vcd"); 
        $dumpvars;  
    end
  
endmodule
