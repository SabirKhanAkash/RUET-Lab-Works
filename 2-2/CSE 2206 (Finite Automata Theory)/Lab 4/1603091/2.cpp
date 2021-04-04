#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<string>edge[10];
vector<ll>graph[10];
map<string,ll>mm;
ll cnt=0;
string arr[10];
string path[10];

ll start,finish;

void dfs(ll s,string str)
{
    if(s==start)
        str.clear();
    if(s==finish)
    {
        path[++cnt]=str;
        return;
    }
    string aaa=str;
    for(ll i=0;i<graph[s].size();i++)
    {
        ll v=graph[s][i];
        str=aaa+edge[s][v];
        dfs(v,str);
    }
}

int main()
{
    for(ll i=0;i<9;i++)
    {
        edge[i].resize(10);
    }
    cout<<"Enter the number of states: ";
    ll n;
    cin>>n;
    cout<<"\nEnter the states: ";
    for(ll i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(mm[arr[i]]==0)
        {
            mm[arr[i]]=++cnt;
        }
    }
    cout<<"\nEnter the initial and final states"<<endl;
    string s,e;
    cin>>s>>e;
    ll st=mm[s];
    ll en=mm[e];
    cout<<"start = "<<st<<" end = "<<en<<endl;
    cout<<"\nEnter the DFA"<<endl;
    while(1)
    {
        string str;
        cin>>s>>e>>str;
        if(s=="-1")break;
        ll a=mm[s],b=mm[e];
        if(edge[a][b].empty()){
            graph[a].push_back(b);
            edge[a][b]=str;
        }
        else
        {
            edge[a][b]+="+";
            edge[a][b]+=str;
            str=edge[a][b];
            string s;
            s.push_back('(');
            for(ll i=0;i<str.size();i++)
                s.push_back(str[i]);
            s.push_back(')');
            edge[a][b]=s;

        }
    }
    start=st;
    finish=en;
    cnt=0;
    string aa;
    cout<<"---"<<aa<<endl;

    dfs(start,aa);

    cout<<"The valid paths are"<<endl<<endl;
    for(ll i=1;i<=cnt;i++)
    {
        cout<<path[i]<<endl;
    }

    return 0;
}
