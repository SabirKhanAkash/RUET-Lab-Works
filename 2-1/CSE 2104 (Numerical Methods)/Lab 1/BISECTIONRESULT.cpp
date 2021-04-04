#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

#define Eps 0.00001

double f(double x)
{
    return (x*x*x)-(x*x)-1;
}

int main()
{
    double a,b,x,xn;
    int i=0;
    cout<<"Enter the Value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    x=(a+b)/2;
    if(f(a)*f(b)>0)
        cout<<"WRONG INPUT. \nPlease Try Again !!!"<<endl;
    else
    {
        cout<<"n"<<"        "<<"a"<<"                 "<<"b"<<"              "<<"x"<<"            "<<"f(x)"<<"         "<<"Error Rate"<<endl;
        do
        {
            cout<<"----------------------------------------------------------------------------------"<<endl;
            printf("%d        %0.5lf        %0.5lf        %0.5lf        %0.5lf        %0.5lf\n",i,a,b,x,f(x),fabs(x-xn));
            xn=x;
            if(f(a)*f(x)<0)
                b=x;
            else if(f(a)*f(x)>0)
                a=x;
            else if(f(a)*f(b)==0)
            {
                x=0;
                break;
            }
            x=(a+b)/2;
            i++;

        }while(fabs(x-xn)>=Eps);

        cout<<"\nThe Value of x is: "<<x<<endl;
        ///cout<<"Error rate: "<<error(x)<<" %"<<endl;
    }

    return 0;
}


