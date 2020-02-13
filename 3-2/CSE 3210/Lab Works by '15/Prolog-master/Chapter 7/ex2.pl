go:-
    write("CITY"),
    write("      "),
    write("STATE"),nl,
    fail.

go:-
    location(City,State),
    not(chkstate(State)),    
    write(City),
    write("    "),
    write(State),nl,
    fail.
go.

location("Jackson","MS").
location("Washington","DC").
location("Raleigh","NC").

chkstate("DC").
