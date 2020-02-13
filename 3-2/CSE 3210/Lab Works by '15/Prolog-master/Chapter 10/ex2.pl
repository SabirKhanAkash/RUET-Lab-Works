go :-
	tab(20),
	write("This is a test"), nl.

tab(0) :- !.

tab(N) :-
	write(" "),
	NN is N-1,
	tab(NN).	