#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0;
    double h,UL = 1.0,temp,I,sumy=0.0;
    double x[10],y[10];
    x[i] = 0.0;
    cout<<"When h = 0.5 , "<<endl;
    h = 0.5;
    if(h == 0.5)
    {
        while(x[i] <= UL)
        {
            temp = x[i];
            y[i] = 1 / (1 +(x[i]*x[i]));
            if(i>0 && x[i]!=1.00)
            {
                sumy = sumy + y[i];
            }
            i++;
            x[i] =  temp + h;
        }
        I = (h /2) *(y[0]+2*sumy + y[i-1]);
        cout<<"The result is (y) : "<<I<<"\n"<<endl;
    }

    x[i] = 0.0;
    i = 0;
    cout<<"When h = 0.25 , "<<endl;
    h = 0.25;
    sumy = 0.0;
    if(h == 0.25)
    {
        while(x[i] <= UL)
        {
            temp = x[i];
            y[i] = 1 / (1 +(x[i]*x[i]));
            if(i>0 && x[i]!=1.00)
            {
                sumy = sumy + y[i];
            }
            i++;
            x[i] =  temp + h;
        }
        I = (h /2) *(y[0]+2*sumy + y[i-1]);
        cout<<"The result is (y) : "<<I<<"\n"<<endl;
    }

    x[i] = 0.0;
    i = 0;
    cout<<"When h = 0.125 , "<<endl;
    h = 0.125;
    sumy = 0.0;
    if(h == 0.125)
    {
        while(x[i] <= UL)
        {
            temp = x[i];
            y[i] = 1 / (1 +(x[i]*x[i]));
            if(i>0 && x[i]!=1.00)
            {
                sumy = sumy + y[i];
            }
            i++;
            x[i] =  temp + h;
        }
        I = (h /2) *(y[0]+2*sumy + y[i-1]);
        cout<<"The result is (y) : "<<I<<"\n"<<endl;
    }

    return 0;
}
