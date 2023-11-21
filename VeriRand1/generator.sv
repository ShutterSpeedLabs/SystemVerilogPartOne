class generator;
  int status = 0;
  transaction t;
  
  mailbox #(transaction)  mbx;
    
  function new(mailbox #(transaction) mbx);
    this.mbx = mbx;
  endfunction
  
  
  task run();
    t = new();
    //assert(t.randomize()) else $display("Randomization Failed");
    status = t.randomize();
    mbx.put(t);
    $display("[GEN] : Data Send from Gen a : %0d, b : %0d, wr : %0d", t.a, t.b, t.wr);
   
  endtask
  
endclass
