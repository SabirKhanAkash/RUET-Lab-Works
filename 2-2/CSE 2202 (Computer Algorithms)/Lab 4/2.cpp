///QUICK SORT

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 1e18
ll arr[10000],c=0;

void swap(ll* a , ll* b)
{
    c+=3;
    ll t = *a;
    *a = *b;
    *b = t;
}

int partition (ll arr[], ll low, ll high)
{
    c+=3;
    ll pivot = arr[high];
    ll i = (low - 1);
    c++;
    for (ll j = low; j <= high- 1; j++)
    {
        c+=4;
        if (arr[j] <= pivot)
        {
            c+=2;
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    c+=3;
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void QuickSort(ll arr[], ll low, ll high)
{
    c++;
    if (low < high)
    {
        c+=4;
        ll pi = partition(arr, low, high);
        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
}


int main()
{
    ll n;
    cout<<"TIME COMPLEXITY OF QUICK SORT FOR DIFFERENT 10 INPUT SIZES\n"<<endl;
    for(ll i=0; i<10 ; i++)
    {
        cout<<"Enter the size of array: ";
        cin>>n;
        for(ll i=0 ;i<n ;i++)
            arr[i] = rand()%10000000000-1000;
        c++;
        QuickSort(arr,0,n-1);
        cout<<"Time Complexity for input size "<<n<<" is : "<<(double)c/320000000000<<" seconds\n"<<endl;
        c=0;
    }

    return 0;
}
