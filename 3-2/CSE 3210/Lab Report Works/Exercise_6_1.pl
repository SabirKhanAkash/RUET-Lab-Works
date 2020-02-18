
go:-
	write("What is the patient's name? "),
	readln(patient),
	write("What is the diseases's name? "),
	readln(diseases),
	hypothesis(patient,diseases),
	write(patient," probably has ",diseases,"."),nl.


symptom(patient,fever):-
(
	write("Does ",patient," has fever (y/n)? "),
	response(reply),
	reply = 'y'
).

symptom(patient,rash):-
(
	write("Does ",patient," has rash (y/n)? "),
	response(reply),
	reply = 'y'
).

symptom(patient,headache):-
(
	write("Does ",patient," has headache (y/n)? "),
	response(reply),
	reply = 'y'
).

symptom(patient,runny_nose):-
(
	write("Does ",patient," has runny_nose (y/n)? "),
	response(reply),
	reply = 'y'
).

symptom(patient,conjunctivities):-
(
	write("Does ",patient," has conjunctivities (y/n)? "),
	response(reply),
	reply = 'y'
).

symptom(patient,cough):-
(
	write("Does ",patient," has cough (y/n)? "),
	response(reply),
	reply = 'y'
).

symptom(patient,body_ache):-
(
	write("Does ",patient," has body_ache (y/n)? "),
	response(reply),
	reply = 'y'
).

symptom(patient,chills):-
(
	write("Does ",patient," has chills (y/n)? "),
	response(reply),
	reply = 'y'
).

symptom(patient,sore_throat):-
(
	write("Does ",patient," has sore_throat (y/n)? "),
	response(reply),
	reply = 'y'
).

symptom(patient,sneezing):-
(
	write("Does ",patient," has sneezing (y/n)? "),
	response(reply),
	reply = 'y'
).

symptom(patient,swollen_glands):-
(
	write("Does ",patient," has swollen_glands (y/n)? "),
	response(reply),
	reply = 'y'
).

hypothesis(patient,measles):-
(
	symptom(patient,fever),
	symptom(patient,cough),
	symptom(patient,conjunctivities),
	symptom(patient,runny_nose),
	symptom(patient,rash)
).
hypothesis(patient,german_measles):-
(
	symptom(patient,fever),
	symptom(patient,headache),
	symptom(patient,runny_nose),
	symptom(patient,rash)
).

hypothesis(patient,flu):-
(
	symptom(patient,fever),
	symptom(patient,headache),
	symptom(patient,body_ache),
	symptom(patient,conjunctivities),
	symptom(patient,chills),
	symptom(patient,sore_throat),
	symptom(patient,cough),
	symptom(patient,runny_nose)
).

hypothesis(patient,common_cold):-
(
	symptom(patient,headache),
	symptom(patient,sneezing),
	symptom(patient,sore_throat),
	symptom(patient,chills),
	symptom(patient,runny_nose)
).

hypothesis(patient,mumps):-
(
	symptom(patient,fever),
	symptom(patient,swollen_glands)
).

hypothesis(patient,chicken_pox):-
(
	symptom(patient,fever),
	symptom(patient,rash),
	symptom(patient,body_ache),
	symptom(patient,chills)
).

hypothesis(patient,whooping_cough):-
(
	symptom(patient,cough),
	symptom(patient,sneezing),
	symptom(patient,runny_nose)
).
response(reply):-
(
	readchar(reply),
	write(reply),nl
).
	
	





