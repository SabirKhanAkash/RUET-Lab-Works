#include<iostream>
using namespace std;
class MoreTest {
public:
    int abs(int x) {
    if(x>=0)
        return x;
    else
        return (0-x);
    }
    double abs(double z) {
        if(z>=0)
            return z;
        else
            return (0-z);
    }
};

int main()
{
    int a;
    double b;
    MoreTest ob;
    a = ob.abs(5);
    cout<<a<<endl;
    a = ob.abs(-7);
    cout<<a<<endl;
    b = ob.abs(12.6);
    cout<<b<<endl;
    b = ob.abs(-6.5);
    cout<<b<<endl;
   return 0;
}
