#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ppp(a) cout<<a<<endl
ll arr[15500],n,stpbin,stpit;
map<ll,ll>mp;


void ranGen(int n)
{
    int v;

    v=rand();
    for(int i=0; i<n; i++)
    {
        while(mp[v]==1)
            v=rand();
            mp[v]=1;
        arr[i]=v;

    }


}

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
    int n=1000;
//    cin>>n;
    ranGen(10000);

string  fname,kkk;
    ofstream flWrite;
for(int i=0;i<10;i++)
{
    n=(i+1)*1000;
    ppp(n);
    fname="";
    kkk=cnvStrToNum(n);
    fname+="Random "+kkk+ " Numbers.txt";
    cout<<fname<<endl;

    flWrite.open(fname.c_str());

    for(int j=0;j<n;j++)
        flWrite<<arr[j]<<endl;

    flWrite.close();
    cout<<i<<"  "<<n<<endl;
    }


    return 0;
}

