#include<stdio.h>
#include<math.h>
#include<time.h>

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

void Selection_sort(int n, int array[])
{
    int min_indx;
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


int menu()
{
        int o;
        printf("1.Bubble Sort Time \n2.Selection Sort Time \n3.Insertion Sort Time \n4.Exit\nEnter your option(1-4) \n");
        scanf("%d",&o);
        return o;
}
int main()
{
    int m,x;
    while (1) {
        m = menu();
        switch(m) {
            case 1: Bubble_sort();
            break;
            case 2: Selection_sort();
            break;
            case 3: Insertion_sort();
            break;
            case 4: break;
            default:
                printf("Choose a valid option !!!\n");
                break;

        }
    }
    return 0;
}
