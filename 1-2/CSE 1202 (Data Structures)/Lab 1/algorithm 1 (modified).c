#include<stdio.h>
int main()
{
    int a[10]= {15, 19, 20, 21,5,3};
    int x,T,j;
    int m,i,n=6;
    printf("How many times you want to insert number: ");
    scanf("%d",&T);
    for (j = 1 ; j < T ; j+=1) {
        printf("Enter X and M: ");
        scanf("%d%d",&x,&m);
        if ((0<=m) && (m<(n-1)))
            {
                for (i = n-1 ; i>=m ; i-=1)
                    a[i+1] = a[i];
                    a[m]=x;
            }

        else
            printf("Sorry Invalid index... \n");
        n+=1; if (j==(11-6)) break;
        for (i = 0 ; i < n ; i = i+1) {
            printf("%d ",a[i]);
            m=0;
        }
        printf("\n");
    }
    printf("Array is full...\n");
    return 0;
}

