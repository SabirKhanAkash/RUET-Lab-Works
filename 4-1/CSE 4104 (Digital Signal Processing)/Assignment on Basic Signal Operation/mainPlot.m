n = [-5:4];
x = 0*imseq(-5,-5,4)+1*imseq(-4,-5,4)+2*imseq(-3,-5,4)+3*imseq(-2,-5,4)+4*imseq(-1,-5,4)+5*imseq(0,-5,4)+4*imseq(1,-5,4)+3*imseq(2,-5,4)+2*imseq(3,-5,4)+1*imseq(4,-5,4);

[x1,n1] = sigshift(x,n,2);
[x2,n2] = sigshift(x,n,-3);

[x,n] = signaladd(x1,n1,x2,n2);

stem(n,x);
xlabel('n'); 
ylabel('y(n)');
plot(n,x);