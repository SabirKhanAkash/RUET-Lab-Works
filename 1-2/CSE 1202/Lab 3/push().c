#include<stdio.h>
int main()
{
    int x,top=-1,n=6,i,j,t;
    int a[10];
    printf("size of array: ");
    scanf("%d",&t);
    for (j = 0 ; j<t ; j+=1) {
        printf("pop: ");
        scanf("%d",&x);
        if (top<(n-1)) {
            top+=1;
            a[top] = x;
        for (i = top ; i>=0 ; i-=1)
            printf("%d  ",a[i]);
        printf("\n");
    }
    else
        printf("Array is full\n");
    }
s
    return 0;
}
