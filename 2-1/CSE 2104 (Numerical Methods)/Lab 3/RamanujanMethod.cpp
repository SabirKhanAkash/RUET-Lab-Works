#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a[100],b[100],r[100],sum=0;
    int i,j,n=1,m;

    for(i=1; i<=3; i++)
    {
        cout<<"Enter the co efficient of  a"<<i<<" : ";
        cin>>a[i];
    }

    b[1]=1.0;

    while(n<=10)
    {
      i=1;
      j=n;
      while(i<=n && j>=1)
      {
        sum+=a[i]*b[j];
        i++;
        j--;
      }
      b[n+1]=sum;
      n++;
      sum=0.0;
    }

    for(i=1; i<=10; i++)
    {
      r[i]=(b[i]/b[i+1]);
      cout<<"\nroot["<<i<<"] : "<<r[i];
    }

    for(i=1; i<=10; i++)
    {
      if((r[i+1]-r[i])<=0.00001)
        {
        cout<<"\n\nActual Smallest root is: \n"<<r[6];
        break;
        }
    }

    return 0;
    }


