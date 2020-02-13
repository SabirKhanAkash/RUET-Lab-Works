#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

#define ll long long
#define pb push_back

struct node {
     ll x, y;
} point[505];
node p0;
vector <node> convex;

ll orientation(node p0, node p1, node p2)
{
     ll ret = (p0.x * p1.y + p1.x * p2.y + p2.x * p0.y) - (p1.x * p0.y + p2.x * p1.y + p0.x * p2.y);
     return ret;
}

bool cmp(node a, node b)
{
     if(a.y == b.y)
          return a.x < b.x;
     return a.y < b.y;
}

bool cmp2(node p1, node p2)
{
     ll ret = orientation(p0, p1, p2);
     if(ret < 0) return 0;
     else return 1;
}

void convexHull(ll n)
{
     sort(point + 1, point + n + 1, cmp);
     p0 = point[1];
     sort(point + 2, point + n + 1, cmp2);

     convex.pb(point[1]);
     convex.pb(point[2]);
     convex.pb(point[3]);

     for(ll i = 4; i <= n; i++) {
          while(orientation(convex[convex.size() - 2], convex.back(), point[i]) <= 0 && convex.size() > 2)
               convex.pop_back();
          convex.push_back(point[i]);
     }
     for(ll i = 0; i < convex.size(); i++) {
          ll nxt = (i + 1) % convex.size();
          line(convex[i].x, convex[i].y, convex[nxt].x, convex[nxt].y);
     }
}

int main()
{
     ll n;
     cout<<"How many points: ";
     cin>>n;
     int gd = DETECT, gm;
     initgraph(&gd, &gm, "");
     for(ll i = 1; i <= n; i++) {
          point[i].x = rand() % 300 + 100;
          point[i].y = rand() % 300 + 100;
          circle(point[i].x, point[i].y, 1);
     }
     cout<<"\nPoints are: "<<endl;
     for(ll i=0 ; i<5 ; i++)
     {
         cout<<"(x"<<i<<"," <<"y"<<i<<") = ("<<point[i].x<<","<<point[i].y<<")"<<endl;
     }
     cout<<" . . . . . . . . . "<<endl;
     convexHull(n);
     getch();
     return 0;
}
