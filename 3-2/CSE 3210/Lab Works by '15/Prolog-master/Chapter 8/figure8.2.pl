cls :- write('\e[2J').

logon :-
	cls,
	getinput(_,_),
	write("You are now logged on."),nl.

logon :-
	write("Sorry, you are not permitted access."),nl.

getinput(Name,Password) :-
	write("Please enter your name: "),
	read(Name),nl,
	write("Please enter your password: "),
	read(Password),nl,
	user(Name,Password).

user(john,superman).
user(sue,happy).
user(bill,bigfoot).