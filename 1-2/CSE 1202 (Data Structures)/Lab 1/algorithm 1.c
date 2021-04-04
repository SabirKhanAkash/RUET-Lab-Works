#include<stdio.h>
int main()
{
    int a[50]= {15, 19, 20, 21,5,3};
    int x;
    int m,i,n=6;
    printf("Enter X and M: ");
    scanf("%d%d",&x,&m);
    if ((0<=m) && (m<(n-1)))
        {
            for (i = n-1 ; i>=m ; i--)
                a[i+1] = a[i];
                a[m]=x;
        }
    else
        printf("Sorry Invalid index ");

    for (i = 0 ; i< n+1 ; i++) {
        printf("%d ",a[i]);
    }

    return 0;
}
