%{
    #include<stdio.h>
    void yyerror(char *s);
    int yylex();
%}

%token NUM ADD SUB
%start cal
%left ADD SUB

%%
cal: exp {$$=$1+$3; printf("%d\n", $$);}
    ;
exp: exp NUM ADD NUM {$$=$1+$3;}
    exp NUM SUB NUM {$$=$1-$3;}
    NUM {$$=$1;}
    ;
%%

int main()
{
    yyparse();
    printf("parsing Finished...\n");
}

void yyerror(char *s)
{
    fprintf(stderr,"error: %s",s);
}