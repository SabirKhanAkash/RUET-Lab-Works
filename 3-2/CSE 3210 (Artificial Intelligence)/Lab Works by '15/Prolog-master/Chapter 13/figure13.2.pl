member(X,[X|_]).
member(X,[_|Tail]) :-
	member(X,Tail).

club_member(Name) :-
	member(Name,[alfred,susan,tom,bill,frank,mary]).