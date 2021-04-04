append([], LA, LA).
append([Z|LA], LB, [Z|LC]) :-
	append(LA, LB, LC).