#include<stdio.h>
int main()
{
    int x,top=-1,n=6,i;
    int a[100] = {10, 21, 30, 40, 50, 15};
        if (top<(n-1)) {
            top+=1;
            scanf("%d",&x);
            /* for (i=0 ;  ; i+=1) {
                a[i+1]=a[i];
                if(i==5)
                    break;
            } */
            a[top] = x;

    }
    else
        printf("Array is full\n");
    for (i = top ; i>0 ; i-=1)
        printf("%d  ",a[i]);


    return 0;
}
