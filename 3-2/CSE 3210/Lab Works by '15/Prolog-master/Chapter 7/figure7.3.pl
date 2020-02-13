% Note, this does not work, the problem is fixed in 9.1

go :-
    write("CITY"),
    write("      "),
    write("STATE"),nl,
    fail.
	
go :-
   location(City, State),
   chkstate(State),
   write(City),
   write("    "),
   write(State),nl,
   fail.
go.

location("Jackson", "MS").
location("Washington","DC").
location("Raleigh", "NC").

chkstate("DC"):-
    fail.

chkstate(_).
