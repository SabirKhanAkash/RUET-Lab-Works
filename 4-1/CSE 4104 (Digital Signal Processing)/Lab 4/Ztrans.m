clc
clear all
close all

x =[10 15 20 25 30 35];
n = [-2 -1 0 1 2 3];
l = length(n);

Z = 0;
z = sym('z');

for i=0:l-1
    Z = Z+x(i+1)*z^(-n(i+1));
end

subplot(2,1,1);
title('Input Signal');
disp('x = ');
disp(x);
xlabel('n');
ylabel('x');
stem(n,x);

subplot(2,1,2);
disp('Z = ');
title('Z Signal');
xlabel('n');
ylabel('x');
disp(Z);
ztrans(n,Z);
