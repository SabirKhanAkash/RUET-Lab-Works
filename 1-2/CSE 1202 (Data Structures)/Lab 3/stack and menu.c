#include<stdio.h>
int a[100]={10, 30, 70, 16, 95, 22},top=-1,i,n=6;

void push(int x)
{
    if (top<(n-1)) {
        a[++top] = x;
        return;
    }
    else {
        printf("Array is full\n");
        return;
    }

}

void pop()
{
    if (top==-1) {
        printf("Array is Empty\n");
        return;
    }
    else {
        top-=1;
        printf("Pop done. . .\n");
        return;
    }
}
void Display()
{
    printf("The array is\n");
    for(i=top ; i>=0 ; i-=1){
        printf("%d\t",a[i]);
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
