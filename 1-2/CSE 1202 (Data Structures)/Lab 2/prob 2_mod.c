#include<stdio.h>

int main()
{
    int k=0,i=0,j=0,t,k1,k2;
    int a[100],b[100],c[200];
    int n1,n2;

    printf("This is the First array\n");
    printf("Array size of first array: ");
    scanf("%d",&n1);
    printf("Enter first array Elements: ");
        for (k1 = 0 ; k1 < n1 ; k1+=1) {
            scanf("%d",&a[k1]);
    }
    for (i = 0 ; i < n1-1 ; i+=1)
        for (j = 0 ; j <= n1-2-i ; j+=1) {
            if(a[j] > a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1]=t;
            }
        }
    printf("The first array after bubble sort: ");
    for (i = 0 ; i<n1 ; i++)
        printf("%d  ",a[i]);
    printf("\n\n");

    printf("This is second array: \n");
    printf("Array size of second array: ");
    scanf("%d",&n2);
    printf("Enter second array Elements: ");
        for (k2 = 0 ; k2 < n2 ; k2+=1) {
            scanf("%d",&b[k2]);
    }
    for (i = 0 ; i < n2-1 ; i+=1)
        for (j = 0 ; j <= n2-2-i ; j+=1) {
            if(b[j] > b[j+1]) {
                t = b[j];
                b[j] = b[j+1];
                b[j+1]=t;
            }
        }
    printf("The second array after bubble sort: ");
    for (i = 0 ; i<n2 ; i++)
        printf("%d  ",b[i]);
    printf("\n");

    for (i = 0,j=0,k=0 ; i<(n1+n2) ; i++) {
        while (i<n1 && j<n2) {
            if (a[i]<b[j]) {
                c[k] = a[i];
                i+=1;
            }
            else {
                c[k] = b[j];
                j+=1;
            }
                k+=1;
        }
        while (i < n1)
        {
            c[k] = a[i];
            i+=1;
            k+=1;
        }
        while (j < n2)
        {
            c[k] = b[j];
            j+=1;
            k+=1;
        }
    for (i = 0 ; i< (n1+n2) ; i++)
        printf("%d  ",c[i]);
    }
    return 0;
}

