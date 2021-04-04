%{

#include <stdio.h>
#include <stdlib.h>

%}
%token NUMBER 
  
%left '+' '-'
  
%left '*' '/' '%'
  
%left '(' ')'

%%
ArithmeticExpression: E{ 
  
         printf("\nResult=%d\n", $$); 
  
         return 0; 
  
        }; 
 E:E'+'E {$$=$1+$3;} 
  
 |E'-'E {$$=$1-$3;} 
  
 |E'*'E {$$=$1*$3;} 
  
 |E'/'E {$$=$1/$3;} 
  
 |E'%'E {$$=$1%$3;} 
  
 |'('E')' {$$=$2;} 
  
 | NUMBER {$$=$1;} 
  
 ; 

%%
yyerror()
{
	printf("Error");
}

yylex()
{
	int c;
	c = getchar();
	if(isdigit(c))
	{
		yylval = c - '0';
		return NUMBER;

	}
	return c;
}

main()
{
	yyparse();
	return 1;
}