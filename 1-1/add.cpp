#include<iostream>
using namespace std;

class A {
public:
    int x,y;
    void get_x(int a, int b) {
        x = a;
        y = b;
    }
    friend int sum(A ob1);
};

int sum(A ob1) {
    return ob1.x+ob1.y;
}

int main()
{
    A ob;
    ob.get_x(10,20);
    cout<<sum(ob)<<endl;

    return 0;
}
