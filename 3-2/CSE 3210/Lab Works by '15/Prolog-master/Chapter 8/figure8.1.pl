count(9).

count(N) :-
	write(" "),
	write(N),
	NN is N+1,
	count(NN).