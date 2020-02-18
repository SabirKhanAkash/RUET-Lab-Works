star :- 
    star(0, 5).

star(C, X) :- 
    C < X, count(0, C), C1 is C+1, star(C1, X).
star(C, X) :- 
    C >= X.

count(X, Y) :- 
    X =< Y, write('*'), X1 is X+1, count(X1,Y).
count(X, Y) :- 
    X > Y, nl.