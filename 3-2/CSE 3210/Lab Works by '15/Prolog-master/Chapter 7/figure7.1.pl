go :-
	location(City,State),
	write(City),
	write("  "),
	write(State),
	nl,
	fail.
go.



location("Jackson","MS").
location("Washington","DC").
location("Raleigh","NC").