%{
    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    void yyerror();
    #include "symtab.c"
    #include "parser.tab.h"
    
    extern int lineno;
    extern int yylex();
%}

%union 
{
    char* str_val;
    int int_val;
}

%token INT IF ELSE WHILE CONTINUE BREAK PRINT DOUBLE CHAR
%token ADDOP SUBOP MULOP DIVOP EQUOP LT GT
%token LPAREN RPAREN LBRACE RBRACE SEMI ASSIGN
%token<str_val> ID
%token<str_val> ICONST
%token<str_val> FCONST
%token<str_val> CCONST

%type<int_val> type constant exp

%left ADDOP SUBOP
%left MULOP DIVOP
%left LT GT
%left EQUOP
%right ASSIGN

%start code

%%
code: statements;
statements: statements statement | /*epsilon*/
            ; 

statement:   declaration
            |if_statement
            |ID ASSIGN exp SEMI
            {
                printf("ID ASSIGN exp SEMI\n");
                if(id_check($1)==-1)
                {
                    printf("%s is not declared\n",$1);
                    yyerror();
                }
                printf("%d + %d\n",$1,$3);
                
                
                if(type_check(get_type($1),$3)==-1)
                    yyerror();
            }
            ;

declaration: type ID SEMI
            {
                insert($2,$1);
            }
            |type ID ASSIGN exp SEMI
            ;
type:    INT {$$=INT_TYPE;}
        | DOUBLE {$$=REAL_TYPE;}
        | CHAR {$$=CHAR_TYPE;}
        ;

exp: ID
    |constant
    |exp ADDOP exp {printf("exp ADDOP exp\n");} 
    {
        printf("%d + %d\n",$1,$3);

        if(type_check($1,$3)==-1)
            yyerror();
        else
            $$ = type_check($1,$3);
    }
    |exp SUBOP exp {printf("exp SUBOP exp\n");}
    |exp MULOP exp {printf("exp MULOP exp\n");}
    |exp DIVOP exp {printf("exp DIVOP exp\n");}
    |exp GT exp {printf("exp GT exp\n");}
    |exp LT exp {printf("exp LT exp\n");}
    |LPAREN exp RPAREN {printf("LPAREN exp RPAREN\n");};


constant:    ICONST {$$=INT_TYPE;} 
            | FCONST {$$=REAL_TYPE;}
            | CCONST {$$=CHAR_TYPE;}
            ;

if_statement: IF LPAREN exp RPAREN tail else_statement;

tail: LBRACE statements RBRACE;

else_statement: ELSE tail | ;
%%

void yyerror()
{
    printf("Syntax error at line %d\n",lineno);
    exit(1);
}

int main(int argc, char *argv[])
{
    yyparse();
    printf("parsing finished!\n");
}