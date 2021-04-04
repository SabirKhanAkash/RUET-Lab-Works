#include<iostream>
using namespace std;
class A {
    int a;
public:
    A (int x) { a = x; }
    int get_a() { return a; }
    };

class B : public A {
    int b;
public:
    B (int x, int y) : A (y) { b = x; }
    int get_b() { return b; }
};

class C : public B {
    int c;
public:
    C (int x , int y, int z) : B (y , z) { c = x; }
    int get_c() { return c; }

void show() {
    cout<<get_a()<<"  "<<get_b()<<"  "<<get_c()<<endl;
    }
};

int  main() {
    C object(1,2,3);
    object.show();
    return 0;
}
