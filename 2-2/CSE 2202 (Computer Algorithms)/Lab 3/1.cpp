#include<bits/stdc++.h>
using namespace std;

#define inf 1e18
#define ll long long
ll arr[10000],c=0,d=0,n,num;

ll bs_rec(ll i,ll j)
{
    if(i<=j)
    {
        c+=3;
        ll mid = (i+j)/2;
        if(num == arr[mid])
        {
            c+=2;
             return mid;
        }
        else if(num<arr[mid]) {
                c+=2;
            return bs_rec(i,mid);
        }
        else {
            c+=2;
            return bs_rec(mid+1,j);
        }
    }
    c++;
     return -1;
}

ll bs_iter(ll i, ll j)
{
    while(i<=j)
    {
        d+=3;
        ll mid = (i + j)/2;
        if(arr[mid] == num)
        {
            d+=2;
            return mid;
        }
        else if(arr[mid] < num)
        {
            d +=3;
            i = mid +1;
        }
        else
        {
            d +=3;
            j = mid - 1;
        }
    }
    d++;
    return -1;
}

int main()
{
    ll indx,indX;
    cout<<"Enter the size of array (upto 10000): ";
    cin>>n;
    for (ll i=0; i<n;i++)
        arr[i] = rand()%10000000000-1000;
    c++;
    d++;
    sort(arr, arr+n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"   ";
    }

    cout<<"\n\nEnter the number that you want to search: ";
    cin>>num;

    c++;
    d++;
    indx = bs_rec(0,n-1);
    indX = bs_iter(0,n-1);

    if(indX == -1 || indx == -1)
        cout<<"Value not found... :( "<<endl;
    else
        cout<<"\n\nCongrats..."<<arr[indx]<<" is found at index "<<indx<<"...!"<<endl;

    cout<<endl;
    cout<<"Number of steps in recursive process: "<<c<<endl;
    cout<<"Number of steps in Iterative process: "<<d<<endl;

    return 0;
}
