#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll pft[100010],wt[100010],n,w,cnt=0,cnt2=0,cnt3=0;

struct Item {
    ll weight,profit;
};

Item items[100010];

bool cmpup(Item a,Item b)
{
    double r1 = (double) a.profit/a.weight;
    double r2 = (double) b.profit/b.weight;
    return r1>r2;
}

bool cmppft(Item a, Item b)
{
    ll r1 = a.profit;
    ll r2 = b.profit;
    return r1>r2;
}

bool cmpbagnotfill(Item a,Item b)
{
    ll r1 = a.weight;
    ll r2 = b.weight;
    return r1>r2;
}

bool cmpminwt(Item a,Item b)
{
    ll r1 = a.weight;
    ll r2 = b.weight;
    return r1>r2;
}

double knapsackup()
{
    double res=0.0;
    ll curweight=0;
    sort(items+1,items+n+1,cmpup);
    cout<<endl;
    cout<<"*** Maximum UNIT PROFIT ***"<<endl;
    for(ll i=1;i<=n;i++) {
        cout<<i<<" - "<<items[i].weight<<" "<<items[i].profit<<endl;
        cnt+=3;
    }
    cout<<endl;
    for(ll i=1;i<=n;i++)
    {
        cnt+=5;
        if(items[i].weight+curweight<=w)
        {
            cnt+=2;
            curweight+=items[i].weight;
            res+=items[i].profit;
        }
        else
        {
            cnt+=5;
            ll rem=w-curweight;
            res+=((items[i].profit*rem)/(double)items[i].weight);
            break;
        }
    }
    cnt++;
    return res;

}

double knapsackpft()
{
    double res=0.0;
    ll curweight=0;
    sort(items+1,items+n+1,cmppft);
    cout<<"*** Maximum PROFIT ***"<<endl;
    for(ll i=1;i<=n;i++) {
        cnt2++;
        cout<<i<<" - "<<items[i].weight<<" "<<items[i].profit<<endl;
    }

    cout<<endl;
    for(ll i=1;i<=n;i++)
    {
        cnt2+=2;
        if(items[i].weight+curweight<=w)
        {
            cnt2+=3;
            curweight+=items[i].weight;
            res+=items[i].profit;
        }
        else
        {
            cnt2+=3;
            ll rem=w-curweight;
            res+=((items[i].profit*rem)/(double)items[i].weight);
            break;
        }
    }
    cnt2++;
    return res;

}

double knapsackbnf()
{
    double res=0.0;
    ll curweight=0;
    sort(items+1,items+n+1,cmpbagnotfill);
    cout<<"*** BAG Won't be full ***"<<endl;
    for(ll i=1;i<=n;i++)
        cout<<i<<" - "<<items[i].weight<<" "<<items[i].profit<<endl;
    cnt3++;
    cout<<endl;
    for(ll i=1;i<=n;i++)
    {
        cnt3+=2;
        if(items[i].weight+curweight<w)
        {
            cnt3+=3;
            curweight+=items[i].weight;
            res+=items[i].profit;
        }
    }
    cnt3++;
    return res;

}

double knapsackminwt()
{
    double res=0.0;
    ll curweight=0;
    sort(items+1,items+n+1,cmpminwt);
    cout<<"*** BY MINIMUM WEIGHT ***"<<endl;
    for(ll i=n;i>0;i--)
        cout<<i<<" - "<<items[i].weight<<" "<<items[i].profit<<endl;
    cnt3++;
    cout<<endl;
    for(ll i=1;i<=n;i++)
    {
        cnt3+=2;
        if(items[i].weight+curweight<=w)
        {
            cnt3+=3;
            curweight+=items[i].weight;
            res+=items[i].profit;
        }
        else
        {
            cnt3+=3;
            ll rem=w-curweight;
            res+=((items[i].profit*rem)/(double)items[i].weight);
            break;
        }
    }
    cnt3++;
    return res;

}

int main()
{
    freopen("in.txt","r",stdin);
    while(cin>>w)
    {
        cout<<"Enter the size of knapsack: "<<w<<endl;
        cin>>n;
        cout<<"Enter the number of elements: "<<n<<endl;
        for(ll i=1;i<=n;i++)
            cin>>wt[i],cout<<wt[i]<<" ";
        cout<<endl;
        for(ll i=1;i<=n;i++)
            cin>>pft[i],cout<<pft[i]<<" ";
        cout<<endl<<endl;
        for(ll i=1;i<=n;i++)
        {
            items[i].weight=wt[i];
            items[i].profit=pft[i];
        }
        cnt=0;
        double resup=knapsackup();
        double respft=knapsackpft();
        double reswt=knapsackbnf();
        double resminpft = knapsackminwt();

        cout.precision(5);

        cout<<" maximum profit (Considering UNIT PROFIT): "<<resup<<endl;
        //cout<<"The number of operations: "<<cnt<<endl;
        //cout<<"Time Complexity: "<<(double) cnt/320000000000<<" seconds"<<endl;
        cout<<endl;

        cout<<" maximum profit (Considering PROFIT): "<<respft<<endl;
        //cout<<"The number of operations: "<<cnt2<<endl;
        //cout<<"Time Complexity: "<<(double) cnt2/320000000000<<" seconds"<<endl;
        cout<<endl;

        cout<<" maximum profit (Bag not full): "<<reswt<<endl;
        //cout<<"The number of operations: "<<cnt3<<endl;
        //cout<<"Time Complexity: "<<(double) cnt3/320000000000<<" seconds"<<endl;
        cout<<endl;

        cout<<" minimum weight: "<<resminpft<<endl;
        //cout<<"The number of operations: "<<cnt3<<endl;
        //cout<<"Time Complexity: "<<(double) cnt3/320000000000<<" seconds"<<endl;
        cout<<endl;
}
    return 0;
}

