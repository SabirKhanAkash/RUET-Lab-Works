#include<bits/stdc++.h>
using namespace std;
#define ll long long
string str;

void palindrome (ll p,ll q)
{
    if(p == q)
    {
        cout<<"Palindrome"<<endl;
        return;
    }
    else if(p+1 == q)
    {
        if(str[p]==str[q])
        {
            cout<<"Palindrome"<<endl;
            return;
        }
        else
        {
            cout<<"Not Palindrome"<<endl;
            return;
        }
    }
    else
    {
        if(str[p]!=str[q])
        {
            cout<<"Not Palindrome"<<endl;
            return;
        }
        else if(str[p]==str[q])
        {
            palindrome (p+1,q-1);
        }
    }
}

int main()
{
    cout<<"Enter a string: ";
    cin>>str;
    palindrome(0,str.size()-1);

}
