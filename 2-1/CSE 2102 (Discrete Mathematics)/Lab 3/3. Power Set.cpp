#include<bits/stdc++.h>
using namespace std;

#define PowSetSize(SetSize) pow(2,SetSize)

int main()
{
    char set1[30],str1[15];

    cout<<"Enter a Set: ";
    gets(set1);

    int ActLen1=((strlen(set1)-2)/2)+1;

    for(int i=0,j=0;i<strlen(set1);i++)
    {
        if(j==ActLen1){
            str1[j]='\0';
            break;
        }
        else if(set1[i]!='{' && set1[i]!='}' && set1[i]!=','){
            str1[j]=set1[i];
            j++;
        }
    }

    int SetSize = strlen(str1);
    cout<<"The Power Set of input set is: ";
    cout<<"{ {";
    for(int i=0;i<PowSetSize(SetSize);i++)
    {
        for(int j=0;j<SetSize;j++)
        {
            if((i&1<<j)==0){
                cout<<" "<<str1[j]<<" ";
            }
        }
        if(i!=(PowSetSize(SetSize)-1))
            cout<<"}"<<','<<"{";
        else
            cout<<"}";
    }
    cout<<" }"<<endl;

    return 0;
}
