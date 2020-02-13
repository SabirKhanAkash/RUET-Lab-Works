go:-
read(A),
B is A mod 3,
chk(B,A).
chk(0,A):-
write("Gaba."),nl,
write(A).
chk(1,A):-
write("HABA"),nl,
write(A).
chk(2,A):-
write("DABA"),nl,
write(A).