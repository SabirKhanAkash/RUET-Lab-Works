#include<bits/stdc++.h>
#define inf 1e18
#define ll long long
using namespace std;

ll n,Max=-inf, Min=inf;
ll arr[10000],c;

void MaxMin(ll i, ll j)
{
    if(i==j)
    {
        c+=5;
        Max = max(arr[i],Max);
        Min = min(arr[i],Min);
    }
    else if(i==j-1)
    {
        c+=1;
        if(arr[i]<arr[j])
        {
            c+=5;
            Min = min(arr[i],Min);
            Max = max(arr[j],Max);
        }
        else
        {
            c+=4;
            Max = max(arr[i],Max);
            Min = min(arr[j],Min);
        }
    }
    else
    {
        c+=5;
        ll mid=(i+j)/2;
        MaxMin(i,mid);
        MaxMin(mid+1,j);

    }


}

int main()
{
    cout<<"Enter the size (upto 4000): ";
    cin>>n;
    for (ll i=0; i<n;i++)
        arr[i] = rand()%10000000000-1000;
    MaxMin(0,n);
    c++;


    for(int i=0;i<n;i++)
    {
        int m;
        m++;
        cout<<arr[i]<<"   ";
        if(m==13)
            cout<<endl;
    }
    cout<<endl;

    cout<<"\nThe Max number is: "<<Max<<endl;
    cout<<"The Min number is: "<<Min<<endl;

    cout<<endl;
    cout<<"Number of steps: "<<c<<endl;
    cout<<"Time Complexity: "<<(double)c/2400000000<<"Seconds "<<endl;

    return 0;
}
