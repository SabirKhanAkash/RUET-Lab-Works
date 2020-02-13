#include<stdio.h>
#include<time.h>
#include<math.h>

int num[1000000];
int n,i,j,t;
clock_t tm;
void Insertion_sort(int n, int array[])
{
    int i,j,key;
    tm = clock();
    for (i=0 ; i<n ; i++) {
        key = array[i];
        j = i-1;
        while (j>=0 && array[j] > key) {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
    tm = clock() - tm;
}
int main()
{
   printf("How many numbers for Insertion sorting? - ");
   scanf("%d",&n);
   for(i=0; i<n; i++)
        num[i]=rand();
    Insertion_sort(n,num);
    printf("Required time for insertion sort is: %f sec.\n", ((double)tm)/CLOCKS_PER_SEC);
   return 0;
}
