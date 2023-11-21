`include "./MailBox/transaction.sv"
`include "./MailBox/generator.sv"
`include "./MailBox/driver.sv"
 

module tb;
  generator gen;
  driver drv;
  mailbox #(transaction) mbx;
  
  initial begin
 
    mbx = new();
    gen = new(mbx);
    drv = new(mbx); 
    
    gen.run();
    drv.run();
  end
    
endmodule
