#include<bits/stdc++.h>
using namespace std;

class StrRev {
    string name;
public:
    StrRev(string str) {
        name = str;
        reverse(name.begin(),name.end());
    }
    show(){
        cout<<name<<endl;
    }

};

int main()
{
    StrRev ob("My Name is Akash");
    ob.show();
    return 0;
}
