//`include "./VeriRand/generator.sv"

class generator;
  
  rand bit [3:0] a, b; ////////////rand or randc 
  
endclass

module tb;
  generator g;
  int i = 0;
  int status;
  initial begin 
    
    for(i=0;i<10;i++) begin
      g = new();
      status = g.randomize();
      $display("Value of a :%0d and b: %0d", g.a, g.b);
      #10;
    end
    
  end
endmodule
