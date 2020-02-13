n([H|_],1,X) :-
	X = H.
n([H|T],N,X) :-
	NN is N-1,
	n(T,NN,X).