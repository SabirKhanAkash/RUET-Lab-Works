%option noyywrap

%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "parser.tab.h"
    #include "symtab.h"
	
	int lineno = 1; // initialize to 1
	void yyerror();
%}

alpha     [a-zA-Z]
digit     [0-9]
alnum     {alpha}|{digit}
print     [ -~]

delim [ \t\n]
ws ({delim})+
number ({digit})+
fp [.]
fnumber ({digit})*({fp})(({digit})+)
us [_]
alpha_ ({us}|{alpha})

ID        ({alpha_})({alpha_}|{digit})*
ICONST    [0-9]{digit}*
FCONST    {digit}*"."{digit}+
CCONST    (\'{print}\')
%%

"//".*        { } 


"int"       { return INT; }
"main"		{ return MAIN; }
"double"    { return DOUBLE; }
"char"		{ return CHAR; }

"if"		{return IF;}
"else"		{return ELSE;}

"+"       { return ADDOP; }
"-"       { return SUBOP; }
"*"       { return MULOP; }
"/"       { return DIVOP; }
"=="      { return EQUOP; }
">"       { return GT; }
"<"       { return LT; }

"("       { return LPAREN; }
")"       { return RPAREN; }
"{"       { return LBRACE; }
"}"       { return RBRACE; }
";"       { return SEMI; }
"="       { return ASSIGN; }

{ID}        {strcpy(yylval.str_val, yytext); return ID;}
{ICONST}    {strcpy(yylval.str_val, yytext); return ICONST;}
{FCONST}    {strcpy(yylval.str_val, yytext); return FCONST;}
{CCONST}    {strcpy(yylval.str_val, yytext); return CCONST;}

"\n"        { lineno += 1; }
[ \t\r\f]+  

.       { yyerror("Unrecognized character"); }
