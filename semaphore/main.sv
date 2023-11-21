`include "semaphore/first.sv"
`include "semaphore/second.sv"

class main;
  
  semaphore sem;
  
  first f;
  second s;
  
   int data1, data2;
   int i = 0;
  
  
  task send_first();
      int status_1;
        sem.get(1);
    
    for(i = 0; i<10; i++) begin
      status_1 = f.randomize();
      data1 = f.data_f;
      $display("First access Semaphore and Data sent : %0d", f.data_f);
      #10;
    end 
    
    
    sem.put(1);
    
    $display("Semaphore Unoccupied");
  endtask
  
  
  task send_second();
    int status_2;
    sem.get(1); 
    
    for(i = 0; i<10; i++) begin   
      status_2 = s.randomize();
      data2 = s.data_s;
      $display("Second access Semaphore and Data sent : %0d", s.data_s);
      #10;
    end  
    
    sem.put(1);
    $display("Semaphore Unoccupied");
    
  endtask
  
  
  
  task run();
    sem = new(1);
    f = new();
    s = new();
  
   fork
     send_first();
     
     send_second();
   join    
  
   
  endtask
  
  
endclass


