last_element([H],X) :-
	X = H.
last_element([_|T],X) :-
	last_element([T],X).