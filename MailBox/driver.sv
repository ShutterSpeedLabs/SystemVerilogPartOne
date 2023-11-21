class driver;
  mailbox #(transaction) mbx;
  transaction data;
  
  function new(mailbox #(transaction)  mbx1);
    this.mbx = mbx1;
  endfunction
  
  
  
  task run();
    mbx.get(data);
    $display("[DRV] : DATA rcvd : %0d",data.data);
  endtask
  
  
endclass
