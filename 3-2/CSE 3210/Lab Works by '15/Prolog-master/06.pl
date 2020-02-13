go:-
read(N),
prin(N).
prin(0).
prin(N):-
N =< 10,
write("GABA"),nl,
NN is N-1,
prin(NN).