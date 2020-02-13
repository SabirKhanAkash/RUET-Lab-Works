#include<bits/stdc++.h>
using namespace std;


string cnvStrToNum(int n)
{
    string a="";
    int v;
    while(n)
    {
        v=(n%10);
        a+=v+'0';
        n/=10;
    }
    reverse(a.begin(),a.end());
    return a;
}


int main()
{
    ifstream flin;

    int n;
    cin>>n;

     string  fname="",kkk;
    kkk=cnvStrToNum(n);
    fname+="Random "+kkk+ " Numbers.txt";
    cout<<fname<<endl;

    flin.open(fname.c_str());

    if(!flin.is_open())
    {

        cout<<"Not open !"<<endl;
    }
    else
    {


        cout<<"Opened !\n";
        string b;
        for(int i=0;i<n;i++)
        {
            flin >> b;
            cout<<b<<endl;
        }

    }
    return 0;
}
