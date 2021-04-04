#include<bits/stdc++.h>
using namespace std;
#define Error (0.0001 * (1-0.1602))/0.1602

double f(double x)
{
    return pow((5-x),(1.0/3.0));
}

double Iteration(double x)
{
    int i=0;
    double xn=x,m=f(x);
    cout<<"-------------------------------------------------"<<endl;
    cout<<"| i"<<"    |    "<<"x"<<"         |    "<<"xi + 1 |  Error Rate |"<<endl;
    cout<<"-------------------------------------------------"<<endl;

    do
    {
        xn = m;
        m = f(xn);
        printf("| %d    |    %0.5lf   |   %0.5lf |  %0.6lf   |\n",i,xn,m,fabs(m-xn));
        i++;
    }while(fabs(m-xn)>=Error);
    cout<<"-------------------------------------------------"<<endl;
    cout<<"The value of x is: "<<m<<endl;

}

int main()
{
    double a;
    cout<<"Enter the value of x: ";
    cin>>a;
    Iteration(a);

    return 0;
}
