#include<stdio.h>
#include<stdlib.h>
#define max 10
int main()
{
    int i,j,min_indx=0,n,array[10],t;
    printf("Enter how many numbers to be sorted: ");
    scanf("%d",&n);
    for (i = 0 ; i<n ; i+=1) {
        scanf("%d",&array[i]);
    }
    for (i = 0 ; i<n-1 ; i++) {
        min_indx = i;
        for (j = i+1 ; j<n  ; j+=1) {
            if (array[j]<array[min_indx]){
                min_indx = j;
            }
                t = array[min_indx];
                array[min_indx] = array[i];
                array[i] = t;
        }
    }
    printf("The array after Selection Sort: ");
    for (i = 0 ; i<n ; i+=1)
        printf("%d  ",array[i]);

    return 0;
}
