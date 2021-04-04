#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x[10],y[10],X;
    double result=0;
    
    cout<<"How many pairs of x and y: ";
    cin>>n;
    cout<<endl;
    
    for(int i=0; i<n ; i++)
    {
        cout<<"Enter the value of x"<<i<<" : ";
        cin>>x[i]; 
        cout<<"Enter the value of y"<<i<<" : ";
        cin>>y[i];
    }
    cout<<"\nEnter the value of x for which the value of y will be determined: ";
    cin>>X;
    
    int i=0;
    do
    {
        int j=0;
        double numerator=1,denominator=1;
        
        do
        {
            if(i!=j)
            {
                numerator = numerator*(X-x[j]);
                denominator = denominator*(x[i]-x[j]);
            }
            j = j+1;
        }while(j<n);
        result = result + (numerator/denominator)*y[i];
        i = i+1;
    }while(i<n);
    
    cout<<"\nThe value of y("<<X<<") is: "<<result<<endl;
    
    return 0;
}
