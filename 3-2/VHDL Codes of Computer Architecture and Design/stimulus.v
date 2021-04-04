`timescale 1ns / 1ps
module stimulus;
    reg x;
    reg y;
    wire z;

    comparator uut
    (
        .x(x),
        .y(y),
        .z(z)
    );

    initial begin
        $dumpfile("test.vcd");
        $dumpvars(0,stimulus);
        x = 0;
        y = 0;
        #20 x = 1;
        #20 y = 1;
        #20 x = 0;
        #40;
    end

    initial begin
        $monitor("x=%d, y=%d, z=%d\n",x,y,z);
    end

endmodule