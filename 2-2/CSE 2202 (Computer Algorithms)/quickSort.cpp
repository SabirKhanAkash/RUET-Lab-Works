#include<bits/stdc++.h>
using namespace std;
int input[15000], sample[15000], temp[15000];
int i,j,k,steps;
void swap(int* a , int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int low, int high)
{
    int pivot = input[high];
    int i = low - 1;
    for(int j = low; j <= high - 1; j++)
    {
        if(input[j] <= pivot)
        {
            i++;
            swap(&input[i], &input[j]);
        }
    }
    swap(&input[i+1], &input[high]);
    return (i+1);
}
void quickSort(int low, int high)
{
    if(low<high)
    {
        int p = partition(low,high);
        quickSort(low,p-1);
        quickSort(p+1,high);
    }
}

void margeSort(int low, int high)
{
    if(low == high) return;
    int mid = (low+high)/2;
    margeSort(low,mid);
    margeSort(mid+1,high);
    for( i = low, j = mid+1, k = low ; k<=high ; k++)
    {
         if(i > mid)
            temp[k] = sample[j++];
         else if(j > high)
            temp[k] = sample[i++];
        else if(sample[i] < sample[j])
            temp[k] = sample[i++];
        else if (sample[i] > sample[j])
            temp[k] = sample[j++];
    }
    for( i = low; i<=high ; i++)
        sample[i] = temp[i];
}
int main()
{
    int n;
    cout<<"Enter Input Size: ";
    cin>>n;
    for(int i = 0 ; i <n ; i++)
        input[i] = rand();
    quickSort(0,n-1);
    cout<<endl;
    for(int i = 0 ; i <n ; i++)
        cout<<input[i]<<"  ";
    return 0;
}
