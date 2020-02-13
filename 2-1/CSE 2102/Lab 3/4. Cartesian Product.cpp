#include<bits/stdc++.h>
using namespace std;
int main()
{
    char set1[30],set2[30],str1[15],str2[15],CP[100];
    int len1,len2,ActLen1,ActLen2,k=0;

    cout<<"Enter set A: ";
    cin>>set1;
    cout<<"Enter set B: ";
    cin>>set2;

    len1=strlen(set1);
    len2=strlen(set2);

    ActLen1=((len1-2)/2)+1;
    ActLen2=((len2-2)/2)+1;

    for(int i=0,j=0;i<len1;i++)
    {
        if(j==ActLen1)
            break;
        else if(set1[i]!='{' && set1[i]!='}' && set1[i]!=','){
            str1[j]=set1[i];
            j++;
        }
    }

    for(int i=0,j=0;i<len2;i++)
    {
        if(j==ActLen2)
            break;
        else if(set2[i]!='{' && set2[i]!='}' && set2[i]!=','){
            str2[j]=set2[i];
            j++;
        }
    }

    for(int i=0;i<ActLen1;i++)
    {
        for(int j=0;j<ActLen2;j++)
        {
            CP[k]='(';
            CP[k+1]=str1[i];
            CP[k+2]=',';
            CP[k+3]=str2[j];
            CP[k+4]=')';
            if(j!=(ActLen2-1)||i!=(ActLen1-1)){
                CP[k+5]=',';
                k=k+6;
            }
            else
                k=k+5;
        }
    }

    cout<<"Cartesian Product of A and B is: "<<endl;
    cout<<'{'<<CP<<'}'<<endl;

    return 0;
}
