count(9) :- !.

count(N) :-
	Last is N,
	write(" "),
	write(Last),
	NN is N+1,
	count(NN),
	write("You made it here. Layer "),
	write(Last),nl.