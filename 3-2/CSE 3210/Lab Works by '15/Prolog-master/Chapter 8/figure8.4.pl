% This ends up in an eternal recursion, never stops

count(N) :-
	write(" "),
	write(N),
	NN is N+1,
	count(NN),
	write("You will never get here").