main: tokenize.l
	lex tokenize.l
	gcc lex.yy.c
	a < input.txt

main2: tokenize.l parsing.y
	yacc -d parsing.y
	lex tokenize.l
	gcc lex.yy.c tokenize.tab.c
	a <input.txt> output.txt