go:-
    write("CITY   "), write("STATE"),nl,
    fail.
go:-
    location(City, State),
    chkstate(State),
    write(City), write(" "), write(State), nl,
    fail.
go.
location("Jackson", "MS").
location("Washington", "DC").
location("Raleigh", "NC").
chkstate("DC"):-
      !, fail.
chkstate(_).

