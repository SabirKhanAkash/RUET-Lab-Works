%{
#include <stdio.h>
// #include<stdlib.h>
// #include"tokenize.tab.h"
%}

delim [ \t\n]
ws ({delim})+
digit [0-9]
number ({digit})+
fp [.]
fnumber ({digit})*({fp})(({digit})+)
letter [A-Za-z]
lowLett [a-z]
us [_]
letter_ ({us}|{letter})
lowLett_ ({us}|{lowLett})
id ({letter_})({letter_}|{digit})*
func ({lowLett_})({lowLett_}|{digit})*
fbo [(]
fbc [)]
funccall {func}{fbo}{number}{fbc}
invcomma ["]
str ({invcomma})(({letter}|{ws}|{number}|{fp}|{us})*)({invcomma})

%%
{ws} { }
{fnumber} {printf("%s = is a floating point number\n", yytext);}
"double" {printf("%s = is a TypeSpecifier\n", yytext);}
"def" {printf("%s = is a Keyword\n", yytext);}
":" {printf("%s = is a Colon\n",yytext);}
"return" {printf("%s = is a Keyword\n",yytext);}
"float" {printf("%s = is a TypeSpecifier\n", yytext);}
"int" {printf("%s = is a TypeSpecifier\n", yytext);}
"while" {printf("%s = is a Keyword\n", yytext);}
"if" {printf("%s = is a Keyword\n", yytext);}
"elif" {printf("%s = is a Keyword\n",yytext);}
"==" {printf("%s = is EQUAL OPERATOR\n", yytext);}
"<" {printf("%s = is a LESS THAN OPERATOR\n",yytext);}
"(" {printf("%s = is first bracket open\n", yytext);}
")" {printf("%s = is second bracket close\n", yytext);}
"else" {printf("%s = is a Keyword\n",yytext);}
"*" {printf("%s = is a Multiplication OPERATOR\n",yytext);}
"{" {printf("%s = is second bracket open\n", yytext);}
"}" {printf("%s = is second bracket close\n", yytext);}
{number} {printf("%s = is an integer number\n", yytext);}
"+" {printf("%s = is an ADD OPERATOR\n", yytext);}
"-" {printf("%s = is an SUB OPERATOR\n", yytext);}
{id} {printf("%s = is an SUB IDENTIFIER\n", yytext);}
{str} {printf("%s = is a String\n",yytext);}
";" {printf("%s = is a SEMICOLON\n", yytext);}
"=" {printf("%s = is an ASSIGN OPERATOR\n", yytext);}
{funccall} {printf("%s = is a Function Call\n",yytext);}
. {printf("Matched Nothing\n", yytext);}
%%

int main()
{
    yylex();
}
int yywrap()
{
    
}