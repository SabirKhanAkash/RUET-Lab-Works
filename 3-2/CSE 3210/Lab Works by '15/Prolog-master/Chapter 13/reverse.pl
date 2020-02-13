reverse_list(Input,Output) :-
	reverse(Input,[],Output).

reverse([],X,X).
reverse([H|T],L1,L2):-
	reverse(T,[H|L1],L2).