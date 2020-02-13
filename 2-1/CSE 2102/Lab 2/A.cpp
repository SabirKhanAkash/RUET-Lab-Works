#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;

int result(char x[],int ix,int jx,int kx)
{
    char m[10];
    for(int i=0;i<(strlen(x));i++)
    {
        if(x[i]=='!') {
            if(x[i+1]=='p') {
                x[i]='x';
                if(ix==0)
                    x[i+1]='1';
                else if(ix==1)
                    x[i+1]='0';
            }
            else if(x[i+1]=='q') {
                x[i]='x';
                if(jx==0)
                    x[i+1]='1';
                else if(jx==1)
                    x[i+1]='0';
            }
            else if(x[i+1]=='r') {
                x[i]='x';
                if(kx==0)
                    x[i+1]='1';
                else if(kx==1)
                    x[i+1]='0';
            }
        }
        if(x[i]=='&') {
            /*if((x[i-1]=='p' && x[i+1]=='q') || (x[i-1]=='q' && x[i+1]=='p'))
            {
                x[i-1] = 'x';
                x[i] = 'x';
                if(ix==0 && jx==0)
                    x[i+1]='0';
                else if(ix==1 && jx==1)
                    x[i+1]='1';
                else if()
            }*/

            if((x[i-1]=='0' || x[i+1]=='0'))
            {
                x[i-1] = 'x';
                x[i] = 'x';
                x[i+1] = '0';
            }

            if((x[i-1]=='1' && x[i+1]=='1'))
            {
                x[i-1] = 'x';
                x[i] = 'x';
                x[i+1] = '1';
            }

            /*if((x[i-1]=='p' && x[i+1]=='r') || (x[i-1]=='r' && x[i+1]=='p'))
            {
                x[i-1] = 'x';
                x[i] = 'x';
                x[i+1] = i&k;
            }
            if((x[i-1]=='q' && x[i+1]=='r') || (x[i-1]=='r' && x[i+1]=='q'))
            {
                x[i-1] = 'x';
                x[i] = 'x';
                x[i+1] = j&k;
            }*/
        }
        if(x[i]=='|') {
            /*if((x[i-1]=='p' && x[i+1]=='q') || (x[i-1]=='q' && x[i+1]=='r'))
            {
                x[i-1] = 'x';
                x[i] = 'x';
                x[i+1] = i|j;
            }
            if((x[i-1]=='p' && x[i+1]=='r') || (x[i-1]=='r' && x[i+1]=='p'))
            {
                x[i-1] = 'x';
                x[i] = 'x';
                x[i+1] = i|k;
            }
            if((x[i-1]=='q' && x[i+1]=='r') || (x[i-1]=='r' && x[i+1]=='q'))
            {
                x[i-1] = 'x';
                x[i] = 'x';
                x[i+1] = j|k;
            }*/

            if((x[i-1]=='0' && x[i+1]=='0'))
            {
                x[i-1] = 'x';
                x[i] = 'x';
                x[i+1] = '0';
            }

            if((x[i-1]=='1' || x[i+1]=='1'))
            {
                x[i-1] = 'x';
                x[i] = 'x';
                x[i+1] = '1';
            }

        }
    }
    for(int j=0;j<strlen(x);j++)
        cout<<x[j]<<" ";
}

int main()
{
    char x[10];
    int c=0,p=0;
    cout<<"Enter the Propositional Statement: ";
    gets(x);
    //cout<<"p  |  q  |  r  |  "<<x<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                result(x,i,j,k);
                if(result(x,i,j,k)==1)
                    c+=1;
                else if(result(x,i,j,k)==0)
                    p+=1;

            }
        }
    }
    if(c==8)
        cout<<"Tautology"<<endl;
    else if(p==8)
        cout<<"Contradiction"<<endl;
    else
        cout<<"Contigency"<<endl;

    return 0;
}
