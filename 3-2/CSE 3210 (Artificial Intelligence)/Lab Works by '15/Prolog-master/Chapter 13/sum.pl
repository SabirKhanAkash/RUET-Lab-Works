go(Input):-
sum(Input,Output,0),
write(Output).

sum([],Total,Total).

sum([H|T],X,Total):-
NN is Total+H,
sum(T,X,NN).