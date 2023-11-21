class generator;
  
  int data = 12;
  transaction t;
  
  mailbox #(transaction)  mbx;
  
  logic [7:0] temp = 3;
  
  function new(mailbox #(transaction) mbx1);
    this.mbx = mbx1;
  endfunction
  
  
  task run();
    t = new();
    t.data = 45;
    mbx.put(temp);
    $display("[GEN] : Data Send from Gen : %0d ",t.data);
  endtask
  
endclass
