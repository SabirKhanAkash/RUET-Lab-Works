#use command "make main SHELL=cmd" in cmd

input = input.txt
output = output.txt

main: cal.l
	flex cal.l
	gcc lex.yy.c
	a <$(input)> $(output)

main2: cal.l cal.y
	yacc -d cal.y
	lex cal.l
	gcc cal.tab.c lex.yy.c
	a <$(input)> $(output)