typedef enum bit[7:0] {ONE, TWO, THREE, FOUR} Enum;

class Cls;
    constraint A {a inside {ONE, THREE};}
    constraint B {b>8; b<42;}
    rand Enum a;
    rand logic [7:0] b;
    rand int c;
endclass

module t;
    Cls obj;
    initial begin
        int rand_result;
        obj = new;
        rand_result = obj.randomize() with {c >42;} ;
        label: assert (obj.a inside {ONE, THREE});
            else $error("Assertion label failed!");
        assert(obj.b >8 && obj.b <42);
        assert(obj.c < 64);
        $finish;
    end
endmodule
