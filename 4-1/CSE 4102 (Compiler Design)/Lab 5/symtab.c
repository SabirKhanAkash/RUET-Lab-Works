#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "symtab.h"

list_t* head = NULL;

void insert(char* name, int type)
{
    if(search(name)==NULL)
    {
        list_t *temp = (list_t*)malloc(sizeof(list_t));

        strcpy(temp->st_name, name);
        temp->st_type = type;

        printf("inserting %s with type %d",temp->st_name, temp->st_type);

        temp->next = head;
        head = temp;
    }
    else
    {
        printf("Same variable %s is declared more than once\n",name);
        yyerror();
    }
}

list_t* search(char *name)
{
    list_t *current = head;
    while (current!=NULL)
    {
        if(strncmp(name, current->st_name)!=0)
            current = current->next;
        else 
            break;
    }
    return current;
    
}

int id_check(char *st_name)
{
    list_t *id = search(st_name);

    if(id=NULL)
        return -1;
    return 1;
}

int type_check(int op1, int op2)
{
    if(op1==INT_TYPE && op2==INT_TYPE)
    {
        return (INT_TYPE);
    }
    else if(op1==INT_TYPE && op2==REAL_TYPE)
    {
        return (REAL_TYPE);
    }
    else if(op1=INT_TYPE && op2==CHAR_TYPE)
    {
        printf("Type REAL and Type CHAR are incompatible\n");
        return (-1);
    }
    else if(op1=CHAR_TYPE && op2==REAL_TYPE)
    {
        printf("Type REAL and Type CHAR are incompatible\n");
        return (-1);
    }
    else
        printf("Types are incompatible\n");
        return (-1);

}

int get_type(char *st_name)
{
    list_t* id = search(st_name);
    return id->st_type;
}