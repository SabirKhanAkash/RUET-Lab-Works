#include<stdio.h>
#include<time.h>
#include<math.h>

int num[1000000];
int n,i,j,t;
clock_t tm;
void Bubble_sort( int n, int num[])
{
    tm = clock();
    for(i=0; i<n-1; i++)
      for(j=0; j<(n-1)-i; j++)
         if(num[j]>num[j+1])
         {
            t=num[j];
            num[j]=num[j+1];
            num[j+1]=t;
         }
    tm = clock() - tm;
}
int main()
{
   printf("How many numbers for bubble sorting? - ");
   scanf("%d",&n);
   for(i=0; i<n; i++)
        num[i]=rand();
    Bubble_sort(n,num);
    printf("Required time for bubble sort is: %f\n", ((double)tm)/CLOCKS_PER_SEC);
   return 0;
}
