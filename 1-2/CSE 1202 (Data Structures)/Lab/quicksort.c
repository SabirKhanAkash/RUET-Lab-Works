#include<stdio.h>
#include<time.h>
#include<math.h>
int high, low, pivot, arr[1000000];
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    int j;
    for (j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main()
{
    int i,n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i = 0; i < n ; i++)
        arr[i] = rand();
    int tm = clock();
    quickSort(arr , 0 , n-1);
    tm = clock() - tm;
    printf("Required time %lf\n", ((double)tm/CLOCKS_PER_SEC));
    return 0;
}
