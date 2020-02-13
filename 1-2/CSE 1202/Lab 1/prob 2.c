#include<stdio.h>
int main()
{
    int a[50] = {10,20,30,40,50},x,n=5,i,j;
    printf("Enter x: ");
    scanf("%d",&x);
    if (x==10 || x ==20 || x==30 || x==40 || x==50) {
    for (i = 0 ; i<n ; i++)
        if (a[i] == x) {
            for (j = i ; j<n ; j++)
                a[j]=a[j+1];
            n--;
            for (i=0 ; i<n ; i++)
                printf("%d ",a[i]);
        }
    }
    else
        printf("Not found\n");

    return 0;
}
