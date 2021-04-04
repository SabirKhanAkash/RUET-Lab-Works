#include<stdio.h>
#include<time.h>
#include<math.h>

int num[1000000],min_indx;
int n,i,j,t;
clock_t tm;
void Selection_sort(int n, int array[])
{
    tm = clock();
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
    tm = clock() - tm;
}
int main()
{
   printf("How many numbers for Selection sorting? - ");
   scanf("%d",&n);
   for(i=0; i<n; i++)
        num[i]=rand();
    Selection_sort(n,num);
    printf("Required time for Selection sort is: %f\n", ((double)tm)/CLOCKS_PER_SEC);
   return 0;
}
