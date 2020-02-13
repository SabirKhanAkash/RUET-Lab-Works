#include<bits/stdc++.h>
using namespace std;
string q[10];
string result;

int main()
{
    int n,te;
    char ss,fs,temp;

    cout<<"Number of states: ";
    cin>>n;
    cout<<"Starting State: ";
    cin>>ss;
    cout<<"Final State: ";
    cin>>fs;
    cout<<"\nTransition Table"<<endl;
    cout<<"0 1\n-----"<<endl;

    for(int i=1 ; i<=n ; i++)
    {
        cin>>q[i];
    }

    for(int i=1 ; i<=n ; i++)
    {
        if(q[i][0]==q[i][1])
        {
            if(q[i][0]!='-' && q[i][1] != '-')
            {
                result += "(0+1)";
            }
            else
                continue;
        }
        else if(q[i][0]!='-')
        {
            temp = q[i][0];
            te = temp - 48;
            get_result(temp,te);
        }
        else if(q[i][1]!='-')
        {
            temp = q[i][1];
            te = temp - 48;
            get_result(temp,te);
        }
    }


    return 0;
}
