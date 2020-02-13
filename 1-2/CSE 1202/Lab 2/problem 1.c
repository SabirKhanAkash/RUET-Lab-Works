#include<stdio.h>
int main()
{
    int a[50];
    int i,j,n,k,t;
    printf("How many numbers you want to sort(n): ");
    scanf("%d",&n);
  printf("Enter %d numbers: \n",n);
    for (k = 0 ; k < n ; k+=1) {
        scanf("%d",&a[k]);
    }
    for (i = 0 ; i < n-1 ; i+=1)
        for (j = 0 ; j <= n-2-i ; j+=1) {
            if(a[j] > a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1]=t;
            }
        }
    printf("The array after bubble sort: ");
    for (i = 0 ; i<n ; i++)
        printf("%d  ",a[i]);

    return 0;
}
