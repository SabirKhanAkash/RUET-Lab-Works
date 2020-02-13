#include<bits/stdc++.h>
using namespace std;
string str;
int x,y;
void palindrome(int x, int y)
{
    if(((x==y)||(x+1==y))&&(str[x]==str[y]))
    {
        cout<<"Palindrome"<<endl;
        return;
    }

    if(str[x]==str[y])
        palindrome(x+1,y-1);
    else
    {
        cout<<"Not Palindrome"<<endl;
        return;
    }
}
int main()
{
    cout<<"Enter String: ";
    cin>>str;
    x = 0; y = str.size() - 1;
    palindrome(x,y);
    return 0;
}
