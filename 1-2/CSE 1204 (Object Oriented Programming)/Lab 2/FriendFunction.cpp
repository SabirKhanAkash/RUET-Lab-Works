#include<iostream>
using namespace std;
class akash {
    int a,b;
public:
    akash(int x, int y) {
    a = x;
    b = y;
    }
    friend int factor(akash ob);
};

int factor (akash ob) {
    if (!(ob.a % ob.b))
        return 1;
    else
        return 0;
    }

int main()
{
    akash ob1(10,2), ob2(13,3);
    if (factor(ob1))
        cout<<"2 is a factor of 10"<<endl;
    else
        cout<<"2 is not a factor of 10"<<endl;
    if (factor(ob2))
        cout<<"3 is a factor of 13"<<endl;
    else
        cout<<"3 is not a factor of 13"<<endl;
    return 0;
}

