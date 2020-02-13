#include<stdio.h>
int a[100]={10, 30, 70, 16, 95, 22};

void Insert()
{
    int x,m,n=6,i;
    printf("Enter the value of x & m: ");
    scanf("%d %d",&x,&m);
    if( 0<=m && m<= n-1){
        for(i=n-1 ;m<=i;i--){
            a[i+1]=a[i];
        }
        a[m]=x;
        n+=1;

    }
    else
    {
        printf("Sorry invalid input\n");
    }
}

void Delete()
{
    int m,n=6;
    printf("Enter m:");
    scanf("%d",&m);
    int i;
    if( 0<=m && m<= n-1){
        for(i=m;i<n-1;i++){
            a[i]= a[i+1];
        }
        n-=1;
    }
    else
    {
        printf("Sorry invalid input\n");
    }
}

void Display()
{
    int i,n=6;
    printf("The array is\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");

}

int menu()
{
    int i;
    while(1)
    {
        printf("1.Insert \n2.Delete \n3.Display \n4.Bubble Sort\n5.Exit\nEnter your option(1-5) \n");
        scanf("%d",&i);
        switch(i){
            case 1:
                Insert();
                break;
            case 2:
                Delete();
                break;
            case 3:
                Display();
                break;
            case 4:
                sort();
                break;
            default:
                break;
        }
        if(i ==5){
            printf("Your program is finished...\n");
            break;

        }
    }
}
void sort()
{
    int a[100]={10, 30, 70, 16, 95, 22};
    int i,j,k,t,n=6;
    for (i = 0 ; i < (n-1) ; i+=1)
        for (j = 0 ; j <= (n-2)-i ; j+=1)
            if(a[j] > a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1]=t;
            }
    printf("Bubble sort is done successfully...\n");
}

int main()
{
    int a[100];
    int op = menu();
    return 0;
}
