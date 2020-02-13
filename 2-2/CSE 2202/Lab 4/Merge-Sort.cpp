#include<bits/stdc++.h>
using namespace std;

#define ppp(a) cout<<a<<endl

map<int,int>mpp;

int arr[50000]={},brr[50000]={};



void ranGen(int n)
{
    int v;
    v=rand();
    for(int i=0;i<n;i++)
    {
        
    while(mpp[v]==1)
        v=rand();
    mpp[v]=1;
    
    arr[i]=v;
        
    }
}

void Merge(int st,int mid, int en)
{
    int i=st,j=st,k=mid+1;
//    ppp("mm");
    while(j<=mid&&k<=en)
    {
        if(arr[j]>arr[k])
        {
            brr[i]=arr[k];
            k++,i++;
        }
        else
        {
            brr[i]=arr[j];
            j++,i++;

        }
    }
//    ppp(1);
    while(j<=mid)
        {
            brr[i]=arr[j];
            j++;
            i++;

        }
//        ppp(2);
        while(k<=en)
            {
            brr[i]=arr[k];
            k++;
            i++;
        }
    i=st;
//    ppp(3);
    while(i<=en)
    {
        arr[i]=brr[i];
        i++;
    }
//        ppp("zz");
}


void MergeSort(int low,int high)
{
//    cout<<low<<" "<<high<<endl;
    if(low<high)
    {
        int mid=(low+high)/2;
        MergeSort(low,mid);
        MergeSort(mid+1,high);
        Merge(low,mid,high);
    }
}




int main()
{
    int n;
    
    cin>>n;
    
    
    ranGen(n);
    
    for(int i=0;i<n;i++)
    {
        ppp(arr[i]);
    }
   
   
   MergeSort(0,n-1);
   
   
   
    
    for(int i=0;i<n;i++)
    {
        ppp(arr[i]);
    }
    
    return 0;
}

