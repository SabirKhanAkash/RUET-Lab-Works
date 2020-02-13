cls :- write('\e[2J').


logon :-
	cls,
	getinput(Name,Password),
	user(Name,Password),
	write("You are now logged on."),nl.

logon :-
	write("Sorry, you are not permitted access."),nl,
	write("Please try again."),nl,
	logon.

getinput(Name,Password) :-
	write("Please enter your name: "),
	read(Name),nl,
	write("Please enter your password: "),
	read(Password),nl.

user(john,superman).
user(sue,happy).
user(bill,bigfoot).