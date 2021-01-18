%option noyywrap

%{
    #include<stdio.h>
%}

letter [A-Za-z]
letter_ ({letter}|"_")
digit [0-9]

%%
{letter_}({letter_}|{digit})* {printf("%s => identifier\n",yytext);}  
. {printf("%s => unknown\n", yytext);}
%%

int main()
{
    yylex();
}