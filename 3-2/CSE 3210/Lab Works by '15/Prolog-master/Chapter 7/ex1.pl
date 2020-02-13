go:-
    address(Name,Street,City,State,Zip),
    write(Name),nl,
    write(Street),nl,
    write(City),
    write(", "),
    write(State),
    write(", "),
    write(Zip),nl,nl,
    fail.
go.

address("Bob","Box 32","Portland","OR","97212").
address("Marry","32 Abbot lane","Portland","OR","97212").
address("Bill","6783 Fox Street","Portland","OR","97202").
address("Abraham","32 Willson St.","Portland","OR","97202").
 
 