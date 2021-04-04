#include<bits/stdc++.h>
using namespace std;
double sumx,sumlny,sumx2,sumxy;
int main()
{
    int m = 6;
    double x[6],y[6],lny[6],x2[6],xy[6],a0,a1;
    for(int i=0; i<6 ; i++)
    {
        cout<<"Enter the value of x"<<i<<" : ";
        cin>>x[i];
        sumx = sumx + x[i];
        x2[i] = x[i] * x[i];
        sumx2 = sumx2 + x2[i];
        cout<<"Enter the value of y"<<i<<" : ";
        cin>>y[i];
        lny[i] = log(y[i]);
        sumlny = sumlny + lny[i];
        xy[i] = x[i] * lny[i];
        sumxy = sumxy + xy[i];
    }

    a0 = (-(sumx*sumxy) + (sumlny * sumx2)) / ((m * sumx2) - (sumx * sumx));
    a1 = (-(sumlny*sumx) + (m*sumxy)) / ((m * sumx2) - (sumx * sumx));

    cout<<endl;
    cout<<"a0 = "<<exp(a0)<<endl;
    cout<<"a1 = "<<ceil(a1)<<endl;

    return 0;
}
