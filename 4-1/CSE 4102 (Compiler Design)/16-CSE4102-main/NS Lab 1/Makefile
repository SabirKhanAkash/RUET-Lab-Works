#use command "make SHELL=cmd"

input = input.txt
output = output.txt

main: cal.l
	lex cal.l
	gcc lex.yy.c
	a <input.txt> output.txt
	# ./a.out <input.txt> output.txt

main2: cal.l cal.y
	yacc -d cal.y
	lex cal.l
	gcc cal.tab.c lex.yy.c
	a <$(input)> $(output)

main3: prog.l prog.y
	yacc -d prog.y 
	lex prog.l 
	gcc prog.tab.c lex.yy.c
	a <$(input)> $(output)
	


