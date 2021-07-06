%{
#include <stdio.h>

// Roll: 1603108
// Question 1: char a = 'a';

%}

delim [ \t\n]
ws ({delim})+
digit [0-9]
number ({digit})+
letter [A-Za-z]
us [_]
letter_ ({us}|{letter})
id ({letter_})({letter_}|{digit})*
quote [']
charac ({quote})(({letter})+)({quote})


%%
{ws} { }
"char" {printf("%s => Character TypeSpecifier\n",yytext);}
{charac} {printf("%s => Character\n",yytext);}
{number} {printf("%s => is an integer number\n", yytext);}
{id} {printf("%s => is an SUB IDENTIFIER\n", yytext);}
";" {printf("%s => is a SEMICOLON\n", yytext);}
"=" {printf("%s => is an ASSIGN OPERATOR\n", yytext);}
. {printf("Matched Nothing\n", yytext);}
%%

int main()
{
    yylex();
}
int yywrap()
{
    
}