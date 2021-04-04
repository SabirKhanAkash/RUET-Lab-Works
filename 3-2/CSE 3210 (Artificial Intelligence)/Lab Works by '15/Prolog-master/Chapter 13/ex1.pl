go:-
    repeat,
    go_once,
    write("Would you like to try again(y/n) ? "),
    response(Reply),
    Reply='n'.
go.

repeat.
repeat:-
    repeat.

go_once:-
    write("What is the patient's name? "),
    read(Patient),
    hypothesis(Patient, Disease), !,
    write(Patient),
    write(" probably has "),
    write(Disease), nl.

go_once:-
    write("Sorry, I don't seem to be able to"), nl,
    write("diagnose the disease."), nl.

symptom(Patient, fever):-
    write("Does "),
    write(Patient),
    write(" have a fever (y/n) ?"),
    response(Reply),
    Reply='y'.

symptom(Patient, rash):-
    write("Does "),
    write(Patient),
    write(" have a rash (y/n) ?"),
    response(Reply),
    Reply='y'.

symptom(Patient, headache):-
    write("Does "),
    write(Patient),
    write(" have a headache (y/n) ?"),
    response(Reply),
    Reply='y'.

symptom(Patient, runny_nose):-
    write("Does "),
    write(Patient),
    write(" have a runny nose (y/n) ?"),
    response(Reply),
    Reply='y'.

symptom(Patient, conjunctivitis):-
    write("Does "),
    write(Patient), write(" have a conjunctivitis(y/n) ?"),
    response(Reply),
    Reply='y'.

symptom(Patient, cough):-
    write("Does "), write(Patient), write(" have a cough(y/n) ?"),
    response(Reply),
    Reply='y'.

symptom(Patient, body_ache):-
    write("Does "), write(Patient), write(" have a body ache (y/n) ?"),
    response(Reply),
    Reply='y'.

symptom(Patient, chills):-
    write("Does "), write(Patient), write(" have a chills (y/n) ?"),
    response(Reply),
    Reply='y'.

symptom(Patient, sore_throat):-
    write("Does "), write(Patient), write(" have a sore throat (y/n) ?"),
    response(Reply),
    Reply='y'.

symptom(Patient, sneezing):-
    write("Is "), write(Patient), write(" sneezing (y/n) ?"),
    response(Reply),
    Reply='y'.

symptom(Patient, swollen_glands):-
    write("Does "), write(Patient), write(" have a swollen glands (y/n) ?"),
    response(Reply),
    Reply='y'.

hypothesis(Patient, common_cold):-
    symptom(Patient, headache),
    symptom(Patient, sneezing),
    symptom(Patient, sore_throat),
    symptom(Patient, chills),
    symptom(Patient, runny_nose).

hypothesis(Patient, flu):-
    symptom(Patient, fever),
    symptom(Patient, headache),
    symptom(Patient, body_ache),
    symptom(Patient, conjunctivitis),
    symptom(Patient, chills),
    symptom(Patient, sore_throat),
    symptom(Patient, cough),
    symptom(Patient, runny_nose).

hypothesis(Patient, measles):-
    symptom(Patient, fever),
    symptom(Patient, cough),
    symptom(Patient, conjunctivitis),
    symptom(Patient, runny_nose),
    symptom(Patient, rash).

hypothesis(Patient, german_measles):-
    symptom(Patient, fever),
    symptom(Patient, headache),
    symptom(Patient, runny_nose),
    symptom(Patient, rash).

hypothesis(Patient, mumps):-
    symptom(Patient, fever),
    symptom(Patient, swollen_glands).

hypothesis(Patient, chicken_pox):-
    symptom(Patient, fever),
    symptom(Patient, rash),
    symptom(Patient, body_ache),
    symptom(Patient, chills).

hypothesis(Patient, whooping_cough):-
    symptom(Patient, cough),
    symptom(Patient, sneezing),
    symptom(Patient, runny_nose).

response(Reply):-
    read(Reply),
    write(Reply), nl.
























