///Determining the difference of time complexity between nCr using normal process and using recursion

#include<bits/stdc++.h>
using namespace std;
int c = 0,d=0;

int fact(int n)
{
    int f =1;
    c++;
    if(n == 0 || n==1)
    {
        c = c+3;
        return 1;
    }
    for(int i=1 ; i<=n; i++)
    {
        f = f*i;
        c = c + 4;
    }
    return f;
}

int factRec(int n)
{
    if(n==0  || n==1)
    {
        d=d+3;
        return 1;
    }

    if(n>1)
    {
        d = d+2;
        return n*factRec(n-1);
    }
}

int main()
{
    int n,r,resultT,op,resultRec;

    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;
    cout<<endl;

    resultT = fact(n)/(fact(r)*fact(n-r));
    resultRec = factRec(n)/(factRec(r)*factRec(n-r));


    c = c+2;
    d = d+2;

    cout<<"The value of C("<<n<<","<<r<<") is: "<<resultT<<endl;
    cout<<endl;
    cout<<"Number of operations for normal process: "<<c<<endl;
    cout<<"Number of operations for recursion process: "<<d<<endl;
    cout<<endl;
    cout<<"Time complexity for normal process: "<<(double)c/3200000000<<" seconds"<<endl;
    cout<<"Time complexity for recursion process : "<<(double)d/3200000000<<" seconds"<<endl;
    cout<<endl;
    cout<<"Difference between both time complexity: "<<fabs((double)c/3200000000 - (double)d/3200000000)<<" seconds"<<endl;

    return 0;
}
