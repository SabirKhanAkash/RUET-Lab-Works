#include<bits/stdc++.h>
using namespace std;

class StrRev {
    string name;
public:
    StrRev(string str)
    {
        name = str;
    }
        StrRev(const StrRev &ob)
        {
            name = ob.name;
            reverse(name.begin(),name.end());
        }
    show()
    {
        cout<<name<<endl;
    }


};

int main()
{
    StrRev ob("My Name is Akash");
    StrRev ob2=ob;
    ob2.show();
    return 0;
}
