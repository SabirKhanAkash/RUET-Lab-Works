#include<bits/stdc++.h>
using namespace std;
#define error 0.000001

double f(double x)
{
    return (3*x-1-cos(x));
}

double fdiff(double x)
{
    return (3+sin(x));
}

void NewtonRaphson(double x)
{
    int i=0;
    double m,xn;
    do
    {
        m = x;
        xn = x - ( (f(x))/fdiff(x) );
        x = xn;
        cout<<" x"<<i<<" : "<<xn<<"    Error Rate: "<<fabs(xn-m)<<endl;
        i++;
    }while(fabs(xn-m)>=error);
    cout<<"The actual value of x is: "<<xn<<endl;
}

int main()
{
    double x;
    cout<<"Enter the value of x: ";
    cin>>x;
    NewtonRaphson(x);

    return 0;
}

