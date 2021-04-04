%option noyywrap

%{
    #include<stdio.h>
%}

%%
([A-Za-z])([A-Za-z]*) {printf("%s => character\n",yytext);} 
. {printf("%s => unknown\n", yytext);}
%%

int main()
{
    yylex();
}