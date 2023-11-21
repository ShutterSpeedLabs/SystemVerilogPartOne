class driver;
  
    virtual add_if aif;
    mailbox #(transaction) mbx;
    transaction data;
    event next;
  
    function new(mailbox #(transaction) mbx);
      this.mbx = mbx;
    endfunction 
  
  
    task run();
      forever begin
        mbx.get(data);
        @(posedge aif.clk);  
        aif.a <= data.a;
        aif.b <= data.b;
        $display("[DRV] : Interface Trigger");
        data.display();
      end
    endtask
endclass
