%option noyywrap

%{
    #include<stdio.h>
%}

digit [0-9]
number ({digit})+
dp [.]
fnumber ({digit})*({dp})(({digit})+)
charac [A-Za-z]
delim [ \t\n]
ws ({delim})+
us [_]
letter_ ({us}|{charac})
id ({letter_})({letter_}|{digit})*

%%
{ws} { }
{number} {printf("%s => This is Interger Number\n",yytext);}  
{fnumber} {printf("%s => This is Float Number\n",yytext);}
{charac} {printf("%s => This is Character\n",yytext);}
"int" {printf("%s => This is Typespecifer\n",yytext);}
"float" {printf("%s => This is Typespecifer\n",yytext);}
"double" {printf("%s => This is Typespecifer\n",yytext);}
"char" {printf("%s => This is Typespecifer\n",yytext);}
"main" {printf("%s => This is Keyword\n",yytext);}
"if" {printf("%s => This is Keyword\n",yytext);}
"while" {printf("%s => This is Keyword\n",yytext);}
"(" {printf("%s = is first bracket open\n", yytext);}
")" {printf("%s = is second bracket close\n", yytext);}
"{" {printf("%s = is second bracket open\n", yytext);}
"}" {printf("%s = is second bracket close\n", yytext);}
{id} {printf("%s => This is Identifier\n",yytext);}
("+") {printf("%s => This is the ADD Operator\n", yytext);}
("-") {printf("%s => This is the SUB Operator\n", yytext);}
("*") {printf("%s => This is the MUL Operator\n", yytext);}
("/") {printf("%s => This is the DIV Operator\n", yytext);}
("=") {printf("%s => This is Assignment Operator\n",yytext);}
("==") {printf("%s => This is Equal Operator\n",yytext);}
(";") {printf("%s => This is Semicolon\n",yytext);}
("'") {printf("%s => This is Inverted Comma\n",yytext);}
. {printf("%s => unknown syntax\n", yytext);}

%%

int main()
{
    yylex();
}
