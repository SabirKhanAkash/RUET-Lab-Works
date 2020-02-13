#include<bits/stdc++.h>
using namespace std;

int CheckDuplicate(char* c,int l)
{
    int co=0,x=l,m;
    for(int i=0; i<l; i++)
    {
        for(int j=i+1; j<l; j++)
        {
            if(c[i] == c[j])
            {
                co++;
                break;
            }
        }
        if(i==(l-1)){
            c[i]='\0';
            break;
        }
    }
    return co;
}


int main()
{
    int p,len,newlen,w;
    char c[40],d[40];

    cout<<"Enter the set: ";
    gets(c);

    len = strlen(c);
    newlen = ((len-2)/2)+1;

    for(int i=0,j=0;j!=newlen;i++)
    {
        if(('0'<=c[i] && c[i]<='9') || ('a'<=c[i] && c[i]<='z') || ('A'<=c[i] && c[i]<='Z')){
            d[j]=c[i];
            j++;
        }
        if(j==(newlen)) {
            d[j]='\0';
            break;
        }
    }

    w = strlen(d);
    p = CheckDuplicate(d,w);

    cout<<"Cardinality: "<<abs(newlen-p)<<endl;

    return 0;
}
