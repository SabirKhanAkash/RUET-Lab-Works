#include<bits/stdc++.h>
using namespace std;

char *GetDistinct(char *str)
{
    int resIndex=1, ipIndex=1;
    while (*(str+ipIndex))
    {
        if (*(str+ipIndex)!=*(str+ipIndex-1))
        {
            *(str+resIndex)=*(str+ipIndex);
            resIndex++;
        }
        ipIndex++;
    }
    *(str+resIndex)='\0';
    return str;
}

int main()
{
    int ActLen1,ActLen2,c=0,d=0;
    char set1[30],set2[30];
    char str1[15],str2[15];
    char *s1,*s2;

    while(1)
    {
    cout<<"Enter Set A: ";
    gets(set1);
    cout<<"Enter Set B: ";
    gets(set2);

    ActLen1=((strlen(set1)-2)/2)+1;
    ActLen2=((strlen(set2)-2)/2)+1;

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

    for(int i=0,j=0;i<strlen(set2);i++)
    {
        if(j==ActLen2){
            str2[j]='\0';
            break;
        }
        else if(set2[i]!='{' && set2[i]!='}' && set2[i]!=','){
            str2[j]=set2[i];
            j++;
        }
    }
    cout<<str1<<"  "<<str2<<endl;

    sort(str1,str1+ActLen1);
    sort(str2,str2+ActLen2);

    s1=GetDistinct(str1);
    s2=GetDistinct(str2);

    if(strlen(s1)==strlen(s2)){

        for(int i=0;i<strlen(s1);i++)
        {
            for(int j=0;j<strlen(s1);j++)
            {
                if(s1[i]==s2[j])
                    c++;
            }
        }

        if(c==strlen(s1))
            cout<<"Set A and B are equivalent\n"<<endl;
        else
            cout<<"Set A and B are not equivalent\n"<<endl;
    }
    else
        cout<<"Set A and B are not equivalent\n"<<endl;
    }
    return 0;
}
