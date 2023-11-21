
//`include  "./semaphore/first.sv"
//`include  "./semaphore/second.sv"
`include  "./semaphore/main.sv"

`timescale 1ns/1ps


module semaphore_tb;
  main m;
  
  initial begin
    m = new();
    m.run(); 
  end
  
  initial begin
    #250;
    $finish();
  end

endmodule
