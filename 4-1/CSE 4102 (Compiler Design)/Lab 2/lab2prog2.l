%option noyywrap

%{
    #include<stdio.h>
%}

%%
("A"|"B"|"C"|"D"|"E"|"a"|"b"|"c"|"d"|"e") {printf("Character\n");} 
("0"|"1"|"2"|"3"|"4"|"5"|"6"|"7"|"8"|"9") {printf("Number\n");}
%%

int main()
{
    yylex();
}