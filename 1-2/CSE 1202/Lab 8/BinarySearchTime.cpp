#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int array[10000000];
//int num[1000000];
int n,i,j,t;
clock_t tm;

int BinarySearch(int array[],int l,int r,int x) {
    int mid = r + (l-1)/2;
    if (array[mid] == x) {
        tm = clock() - tm;
        return mid;
    }
    else if (array[mid] > x) {
        tm = clock() - tm;
        return BinarySearch(array,l,mid-1,x);
    }
    else {
        tm = clock() - tm;
        return BinarySearch(array,mid+1,r,x);
    }
}

int main()
{
    int array[]={1,4,6,8,9,10};
    int n = sizeof(array)/sizeof(array[0]);
    int result,number;
    printf("Enter the number to search: ");
    scanf("%d",&number);
    result = BinarySearch(array,0,n-1,number);
    printf("%d is in index %d\n",number,result);
    printf("Required time for Binary Search is: %f sec.\n", ((double)tm)/CLOCKS_PER_SEC);
   return 0;
}
