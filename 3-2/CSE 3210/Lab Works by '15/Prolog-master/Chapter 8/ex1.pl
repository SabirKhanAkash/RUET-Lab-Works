go :-
	log(3).

log(0) :-
	write("Sorry, you are not permitted access.").	

log(_) :-
	getinput(Name,Password),
	user(Name,Password),
	write("You are now logged on."),nl.

log(Rem) :-
	write("Illegal entry. Please try again."),nl,
	Nrem is Rem-1,
	log(Nrem).

getinput(Name,Password) :-
	write("Please enter your name: "),
	read(Name),nl,
	write("Please enter your password: "),
	read(Password),nl.

user(john,superman).
user(sue,happy).
user(bill,bigfoot).