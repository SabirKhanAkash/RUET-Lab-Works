#include<bits/stdc++.h>
using namespace std;
class base{
public:
    string n;
    int s;
    get(){
        cout<<"Enter name:";
        cin>>n;
        cout<<"Enter salary:";
        cin>>s;
    }
};
class derive : public base{
    public:
        string name;
        int salary;
        get_sn(base ob)
        {
            name = ob.n;
            salary = ob.s;
        }
        show(){
            cout<<"Name:"<<name<<"\nsalary:"<<salary<<endl;
            }
};
int main()
{
    base b;
    derive d;
    b.get();
    d.get_sn(b);
    d.show();
    return 0;
}
