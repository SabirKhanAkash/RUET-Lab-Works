#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return (x*x*x+x-1);
}

int main()
{
    double a,b,x1,x2;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    if(f(a)*f(b)>0)
        cout<<"Wrong Assumption"<<endl;
    else {
        cout<<"--------------------------------------------------------"<<endl;
        cout<<"    a         b          x1          f(x1)  Error Rate  \n";
        cout<<"--------------------------------------------------------"<<endl;
        x1=(a*f(b)-b*f(a))/(f(b)-f(a));
        do
        {
            printf(" %0.4lf      %0.4lf     %0.4lf     %0.4lf   %0.6lf   \n",a,b,x1,f(x1),fabs(x2-x1));
            x2=x1;
            if (f(a)*f(x1)<0)
                b=x1;
            if(f(a)*f(x1)>0)
                a=x1;
            x1=(a*f(b)-b*f(a))/(f(b)-f(a));
            }while(fabs(x2-x1)>=0.001);
        cout<<"\nThe root is:"<<x2<<endl;
    }

    return 0;
}
