%{
// lab2prog7.y => yacc/bison => lab2prog7.tab.c + lab2prog7.tab.h (Generate Parser)
// bison -d lab2prog7.y
// yacc -d lab2prog7.y
// lab2prog7.l => flex/lex => lex.yy.c (Generate Lexer)
// lab2prog7.tab.c + lex.yy.c => GCC => a
// input.txt => a => output.txt 
#include<stdio.h>
void yyerror(char *s)
int yylex();
%}

%token NUM OP EOL
%start S 

%%
S: NUM OP NUM EOL{printf("Parsing + Matched\n");};
%%

int main()
{
    yyparse();
}

void yyerror(char *s)
{
    fprintf(stderr, "error: %s\n", s);
}