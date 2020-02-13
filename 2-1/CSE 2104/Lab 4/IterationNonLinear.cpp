#include<bits/stdc++.h>
using namespace std;

double F(double x,double y)
{
    return y + 4.00/(x+y);
}

double G(double x,double y)
{
    return sqrt(16.00 + 2*x*y)-x;
}

double diff_Fx(double x,double y)
{
    return -4/((x+y)*(x+y));
}

double diff_Fy(double x,double y)
{
    return 1-4/((x+y)*(x+y));
}

double diff_Gx(double x,double y)
{
    return (y/sqrt(16.00 + 2*x*y))-1;
}

double diff_Gy(double x,double y)
{
    return x/(sqrt(16.00 + 2*x*y));
}

int Check(double diff_Fx,double diff_Fy,double diff_Gx,double diff_Gy)
{
    if((fabs(diff_Fx)+fabs(diff_Fy))<1.00 && (fabs(diff_Gx)+fabs(diff_Gy))<1.00 )
        return 1;
    else
        return 0;
}

void Iteration(double x, double y)
{
    double X,Y,m,n;
    do
    {
        X = F(x,y);
        Y = G(x,y);
        m = x;
        n = y;
        x = X;
        y = Y;
        printf("x: %0.6lf\ty: %0.6lf\tError rate (x) : %0.6lf\tError rate (y) : %0.6lf\n",X,Y,fabs(X-m),fabs(Y-n));
    }while(fabs(X-m)>=0.0001 && fabs(Y-n)>=0.0001);
    cout<<"\nFinal x: "<<X<<"\tFinal y: "<<Y<<endl;
}

int main()
{
    double x,y;
    int z;
    cout<<" Assume the x0 : ";
    cin>>x;
    cout<<" Assume the y0 : ";
    cin>>y;
    cout<<endl;

    z = Check(diff_Fx(x,y),diff_Fy(x,y),diff_Gx(x,y),diff_Gy(x,y));
    while(z!=1)
    {
        x += 0.5;
        y += 0.5;
        z = Check(diff_Fx(x,y),diff_Fy(x,y),diff_Gx(x,y),diff_Gy(x,y));
    }
    Iteration(x,y);
    return 0;
}
