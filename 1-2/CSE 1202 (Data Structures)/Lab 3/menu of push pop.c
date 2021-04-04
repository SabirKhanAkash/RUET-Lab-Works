#include<stdio.h>
int a[5],top=-1,i,n=5;

void push(int x)
{
    if (top<(n-1)) {
        top+=1;
        a[top] = x;
        printf("Push done successfully. . .\n\n");
        return;
    }
    else {
        printf("Stack is full\n\n");
        return;
    }
}

void pop()
{
    if (top==-1) {
        printf("Stack is Empty. pop is not possible. . .\n\n");
        return;
    }
    else {
        top-=1;
        printf("Pop done successfully. . .\n\n");
        return;
    }
}
void Display()
{
    printf("The stack is:   ");
    for(i=top ; i>=0 ; i-=1){
        printf("%d  ",a[i]);
    }
    printf("\n");

}

int menu()
{
        printf("1.Push \n2.Pop \n3.Display \n4.Exit\nEnter your option(1-4) \n");
        scanf("%d",&i);
        return i;
}

int main()
{
    int j,x;
    while(1)
    {
        j = menu();
        switch(j){
            case 1: printf("Push: ");
                           scanf("%d",&x);
                           push(x);
                           break;
            case 2: pop();
                           break;
            case 3: Display();
                           break;
            default: break;
        }
        if(j ==4){
            printf("Your program is finished...\n");
            break;
        }
    }
}
