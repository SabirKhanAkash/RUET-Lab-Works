go:-
 	getname(Name),
   	write(Name), nl,
    	write("Is this name OK (y/n) ? "),
  	read(Reply),
   	Reply='y', !.

go:-
 	nl, write("Please reenter name."), nl, nl,
	go.


getname(Name):-
 	write("Enter patient name: "),
	read(Name), nl.

