
%{
    #include<stdio.h>
    #include "lab2prog7.tab.h"
%}

digit [0-9]

%%
(" ")+ {//ignore whitespaces}
({digit})+ {printf("%s => number\n",yytext);}  
("+") {return(OP);}
\n {return(EOL);}
. {printf("%s => unknown\n", yytext);}
%%

int yywrap()
{

}