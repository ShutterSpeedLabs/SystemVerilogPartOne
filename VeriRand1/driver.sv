`include "./VeriRand1/transaction.sv"

class driver;
event next;
  mailbox #(transaction) mbx;
  transaction dataIn;
  
  function new(mailbox #(transaction)  mbx);
    this.mbx = mbx;
  endfunction
  
  
  
  task run();
    mbx.get(dataIn);
    $display("[DRV] : Data recieved from Gen a : %0d, b : %0d, wr : %0d", dataIn.a, dataIn.b, dataIn.wr);
    ->next;
  endtask
  
  
endclass
