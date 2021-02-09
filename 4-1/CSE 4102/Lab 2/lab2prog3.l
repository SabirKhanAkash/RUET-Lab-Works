%option noyywrap

%{
    #include<stdio.h>
%}

%%
([A-Za-z])([0-9]) {printf("%s => Known\n",yytext);} 
. {printf("%s => unknown\n", yytext);}
%%

int main()
{
    yylex();
}