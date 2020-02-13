#include<bits/stdc++.h>
using namespace std;

void GCDEuclid(int a, int b)
{
    int r;
    int x = a;
    int y = b;

    while(y !=0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    cout<<"The GCD is: "<<x<<" (Euclidean Method)"<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter another number: ";
    cin>>b;

    GCDEuclid(a,b);

    return 0;
}
