#Prolog Question 1

parent(homer,bart).
parent(homer,lisa).
parent(homer,maggie).

parent(abe,homer).
parent(mona,homer).

parent(merge,bart).
parent(merge,lisa).
parent(merge,maggie).

parent(clancy,merge).
parent(jacquelin,merge).
parent(clancy,selma).
parent(clancy,patty).
parent(jacquelin,selma).
parent(jacquelin,patty).


different(X,Y):- X\=Y.

ancestor(X,Y):-
    parent(X,Y).

ancestor(X,Y):-
    parent(X,Z),parent(Z,Y).

sibling(X,Y):-
    parent(Z,X),parent(Z,Y),different(X,Y).