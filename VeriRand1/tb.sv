`include "./VeriRand1/driver.sv"
`include "./VeriRand1/generator.sv"
//`include "./VeriRand1/transaction.sv"
`timescale 1ns/1ps

module tb;
    
    event next;
    generator gen;
    driver drv;
    mailbox #(transaction) mbx;
  
    initial begin
 
        mbx = new();
        gen = new(mbx);
        drv = new(mbx); 
        for(int i=0;i<10;i++) begin
            gen.run();
            drv.run();
            wait(drv.next.triggered);
        end
        $finish();
      //  gen.run();
       // drv.run();
    end
    
endmodule
