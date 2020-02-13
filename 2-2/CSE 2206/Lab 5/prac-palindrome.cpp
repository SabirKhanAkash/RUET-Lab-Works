#include<bits/stdc++.h>
using namespace std;
int lo,hi;
string str;
bool flag = true;
void p(int lo,int hi)
{

    if(lo>=hi)
        return;
    if(str[lo]!=str[hi])
        p(lo+1,hi-1);
    else if(str[lo]==str[hi])
        {
            flag = false;
            return;
        }
}
int main()
{
    int x;
    cout<<"enter string:";
    cin>>str;
    if(str.size()%2==0)
    {
          cout<<"no";
          return 0;
    }

      p(0,str.size()-1);

    if(flag == true)
        cout<<"yes";
    else
        cout<<"no";



}

