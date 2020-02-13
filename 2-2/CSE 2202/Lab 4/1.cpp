///MERGE SORT

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 1e18
ll arr[10000],c=0;

void Merge(ll low,ll mid,ll high)
{
    ll i,j,k;
    c+=5;
    ll n1=mid-low+1;
    ll n2 = high - mid;
    ll a[n1],b[n2];
    
    for(ll i=0; i<n1 ; i++) {
        c+=4;
        a[i] = arr[low+i];
    }
    for(ll j=0 ; j<n2 ; j++) {
        c+=5;
        b[j] = arr[mid+1+j];
    }
    
    i=0,j=0,k=low;
    while(i<n1 && j<n2)
    {
        c+=5;
        if(a[i]<=b[j])
        {
            c+=2;
            arr[k] = a[i];
            i++;
        }
        else 
        {
            c+=2;
            arr[k] = b[j];
            j++;
        }
        c++;
        k++;
    }
    while (i<n1)
    {
        c+=4;
        arr[k] = a[i];
        i++;
        k++;
    }
    while (j<n2)
    {
        c+=4;
        arr[k] = b[j];
        j++;
        k++;
    }
}

void MergeSort(ll low,ll high)
{
    c+=7;
    if(low<high)
    {
        ll mid = (low+high)/2;
        MergeSort(low,mid);
        MergeSort(mid+1,high);
        Merge(low,mid,high);
    }
}

int main()
{
    ll n;
    cout<<"TIME COMPLEXITY OF MERGE SORT FOR DIFFERENT 10 INPUT SIZES\n"<<endl;
    for(ll i=0; i<10 ; i++) 
    {
        cout<<"Enter the size of array: ";
        cin>>n;
        for(ll i=0 ;i<n ;i++)
            arr[i] = rand()%10000000000-1000;
        c++;
        MergeSort(0,n-1);
        cout<<"Time Complexity for input size "<<n<<" is : "<<(double)c/320000000000<<" seconds\n"<<endl;
        c=0;
    }
    /*
    cout<<"Unsorted Array is: ";
    for(ll i=0; i<n ; i++)
        cout<<arr[i]<<"  ";
    
    cout<<endl;
    */
    
    /*
    cout<<"The Merge sorted array is: ";
    for(ll i=0; i<n ; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    */
    
    return 0;
}
