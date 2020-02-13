#include<bits/stdc++.h>
using namespace std;

double F(double x,double y)
{
    return ( x*x - y*y -4);
}

double G(double x,double y)
{
    return ( x*x + y*y -16 );
}

double PDFx(double x)
{
    return 2*x;
}

double PDFy(double y)
{
    return -(2*y);
}

double PDGx(double x)
{
    return 2*x;
}

double PDGy(double y)
{
    return 2*y;
}

int Check(double a,double b,double  c,double d)
{
    if((a*d - b*c)!=0)
        return 1;
    else
        return 0;
}

double SolveH(double f0,double g0,double a,double b,double c,double d)
{
    return ((g0*b - f0*d) / (a*d - b*c));
}

double SolveK(double f0,double g0,double a,double b,double c,double d)
{
    return ((f0*c - g0*a) / (a*d - b*c));
}

void NewtonRaphson(double x0,double y0)
{
    double a,b,c,d,h,k,m,n,f0,g0,xn,yn;
    do
    {
        a = PDFx(x0);
        b = PDFy(y0);
        c = PDGx(x0);
        d = PDGy(y0);
        f0 = F(x0,y0);
        g0 = G(x0,y0);

        if(Check(a,b,c,d)!=0)
        {
            h = SolveH(f0,g0,a,b,c,d);
            k = SolveK(f0,g0,a,b,c,d);
            m = x0;
            n = y0;
            xn = x0 + h;
            yn = y0 + k;
            x0 = xn;
            y0 = yn;
        }
        else
        {
            cout<<"Wrong Assumption"<<endl;
            return;
        }

    cout<<"X: "<<xn<<"\t";
    cout<<"Y: "<<yn<<"\t";
    cout<<"Error rate (x): "<<fabs(xn-m)<<"\t"<<"Error Rate (y): "<<fabs(yn-n)<<endl;

    }while(fabs(xn-m)>=0.00001 && fabs(yn-n)>=0.00001);

    cout<<"\nFinal X: "<<xn<<endl;
    cout<<"Final Y: "<<yn<<endl;
    cout<<"Error rate of x : "<<fabs(xn-m)<<endl;
    cout<<"Error rate of y: "<<fabs(yn-n)<<endl;
}

int main()
{
    double x0 = 2.828, y0 = 2.828;
    double a,b,c,d;

    a = PDFx(x0);
    b = PDFy(y0);
    c = PDGx(x0);
    d = PDGy(y0);

    if(Check(a,b,c,d)==0)
        cout<<" Wrong Initialization..."<<endl;
    else
        NewtonRaphson(x0,y0);

    return 0;
}
