%option noyywrap

%{
    #include<stdio.h>
%}

%%
("A"|"E"|"I"|"O"|"U"|"a"|"e"|"i"|"o"|"u") {printf("vowel\n");} 
. {printf("%s => consonant\n", yytext);}
%%

int main()
{
    yylex();
}