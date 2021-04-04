#include<iostream>
using namespace std;
int main()
{
    int n,a[110],temp,S=0,i,count=0,x,j;
    cin>>n;
    for (i=0 ; i<n ; i++) {
        cin>>a[i];
        if (n==1) {
            cout<<"0\n";
                break;
        }
        if (i==1) {
            if(a[i]>a[i-1]) {
                temp=a[i];
            //cout<<temp<<endl;
            }
            else {
                temp=a[i-1];
                //cout<<temp<<endl;
            }
        }
        if (i>1) {
            if(a[i]>a[i-1]) {
                if (a[i]>temp)
                    temp=a[i];
                //cout<<temp<<endl;
            }
            else {
                if (a[i]>temp)
                    temp=a[i-1];
                //cout<<temp<<endl;
            }
        }
				    /*if(n>1 && i!=0) {
									 if (temp==a[i-1])
												count--;
							    if(temp>a[(i-1)+count]) {
													cout<<count<<endl;
													x = (temp-a[(i-1)+count]);
													cout<<x<<endl;
										    S = S + x;
													cout<<S<<endl;
								  }*/
    }
    //cout<<temp<<endl;
    for (j=0 ; j<n ; j++) {
        if(n>1 && i!=0) {
            if (temp==a[j])
                count--;
            if(temp>a[(j)]) {
            //cout<<count<<endl;
            //cout<<count<<endl;
                x = (temp-a[j]);
                //cout<<x<<endl;
                S = S + x;
                //cout<<S<<endl;
            }
        }
    }
    if (n!=1)
        cout<<S<<endl;
    return 0;
}
