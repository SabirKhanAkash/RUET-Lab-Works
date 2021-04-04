#include<stdio.h>
int main()
{
    int a[10] = {10,20,30,40,50},x,n=5,i,j,k,T;
    printf("How many times you want to delete an element: ");
    scanf("%d",&T);
    for (k = 0 ; k < T ; k+=1) {
        if (k==n)
        break;
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
   printf("\n");
    }
    printf("Array is empty...\n");
    return 0;
}

