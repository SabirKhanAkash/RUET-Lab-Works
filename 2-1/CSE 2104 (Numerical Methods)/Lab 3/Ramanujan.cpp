#include<bits/stdc++.h>
using namespace std;

void Ramanujan(double a1,double a2,double a3)
{
    double a[100],b[100];
    a[0]=1.0;
    a[1]=a1;
    a[2]=a2;
    a[3]=a3;
    for(int i=4;i<38;i++)
        a[i]=0;
    b[0]=1.0;
    b[1]=1.0;
    int i,j,k,x=1,y=2,m,count=0;
    i=1,j=1;
    int n=2;
    double result,temp,error,sum=0;
    cout<<" b"<<"1"<<" = "<<b[1]<<endl;
    while(n<18)
    {
        count++;
        i=1,j=1;
        while(1)
        {
            sum += a[j]*b[n-i];
            if((n-i)==1 && j==(n-1)){
                break;
            }
            i++;
            j++;
        }
        if((n-i)==1 && j==(n-1)){
            b[n]=sum;

            cout<<" b"<<n<<" = "<<b[n]<<endl;
            n++;
            sum=0;
        }
        result = (double)(b[x]/b[y]);
        if(count==1)
            temp=result;
        else
            error = abs(result-temp);
        cout<<" b"<<x<<"/"<<"b"<<y<<" = "<<result<<" Error: "<<error<<endl;
        temp = result;
        m=y;
        x=y;
        y=m+1;
        if(error==0.00001)
            break;
    }
    cout<<"\n The Smallest Root is: "<<abs(result)<<endl;
}

int main()
{
    double a1,a2,a3;
    cout<<" Enter the value of a1: ";
    cin>>a1;
    cout<<" Enter the value of a2: ";
    cin>>a2;
    cout<<" Enter the value of a3: ";
    cin>>a3;

    Ramanujan(a1,a2,a3);

    return 0;
}
