#include<iostream>
using namespace std;
class test {
public:
    int min(int m, int n)
    {
           if(m<n)
           return m;
           else
           return n;
    }
    int min(int x, int y, int z)
    {
        if(x<y)
         {
            if(x<z)
                return x;
            else if (z<y)
                return z;
          }
        else if (y<z)
            return y;
        else
            return z;
    }
    double min(double p, double q)
    {
        if (p<q)
            return p;
        else
            return q;
    }
};

int main()
{
    int s;
    double p;
    test ob;
    s = ob.min(5,10);
    cout<<s<<endl;
    s = ob.min(3,6,9);
    cout<<s<<endl;
    p = ob.min(12.4,6.7);
    cout<<p<<endl;
    return 0;
}
