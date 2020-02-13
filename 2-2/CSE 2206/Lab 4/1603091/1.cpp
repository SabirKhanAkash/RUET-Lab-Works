#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<string>edge[10];
vector<ll>graph[10];
int main()
{
    for(ll i=0;i<9;i++)
    {
        edge[i].resize(10);
        graph[i].resize(10);
    }
    edge[1][2]="hi";
    if(!edge[1][2].empty())
    {
        edge[1][2]+="+shuvon";
    }
    cout<<edge[1][2]<<endl;
//    cout<<graph[1][2]<<endl;


    return 0;
}
