#include<bits/stdc++.h>
using namespace std;

void diff(char *s1, char *s2)
{
    char d[35];
    int m=0;
    for(int i=0,k=0;i<strlen(s1);i++)
    {
        for(int j=0;j<strlen(s2);j++)
        {
            if((s1[i]!=s2[j]))
            {
                m++;
                continue;
            }
        }
        if(m==(strlen(s2)))
        {
            d[k]=s1[i];
            d[k+1]=' ';
            k=k+2;
        }
        m=0;
        if(i==(strlen(s1)-1))
           d[k]='\0';
    }
    cout<<"\nA difference B = "<<"{ "<<d<<"}"<<endl;
}

void inter(char *s1, char *s2)
{
    char in[35];
    int m=0;
    for(int i=0,k=0;i<strlen(s1);i++)
    {
        for(int j=0;j<strlen(s2);j++)
        {
            if(s1[i]==s2[j])
            {
                m++;
                break;
            }
        }
        if(m!=0)
        {
            in[k]=s1[i];
            in[k+1]=' ';
            k=k+2;
        }
        if(i==(strlen(s1)-1))
           in[k]='\0';
        m=0;
    }
    cout<<"\nA intersection B = "<<"{ "<<(in)<<"}"<<endl;
}

void uni(char *s1,char *s2)
{
    int m=0,n=0,k=0;
    char u[35];
    for(int i=0;i<strlen(s1);i++)
    {
        u[k]=s1[i];
        u[k+1]=' ';
        k=k+2;
    }
    for(int i=0;i<=strlen(s1);i++)
    {
        m=0;
        for(int j=0;j<strlen(s2);j++)
        {
            if(s2[i]==u[j])
            {
                m=1;
                break;
            }
        }
        if(m==0)
        {
            u[k]=s2[i];
            u[k+1]=' ';
            k=k+2;
        }
        if(i==(strlen(s1)))
            u[k]='\0';
    }

    cout<<"\nA union B = "<<"{ "<<u<<"}"<<endl;
}


int main()
{
    int ch,ActLen1,ActLen2,c=0,d=0;
    char set1[30],set2[30];
    char str1[15],str2[15];

    cout<<"Enter Set A: ";
    gets(set1);
    cout<<"Enter Set B: ";
    gets(set2);

    cout<<"1.Difference\n2.Intersection\n3.Union\nEnter Choice: ";
    cin>>ch;

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

    sort(str1,str1+ActLen1);
    sort(str2,str2+ActLen2);

    if(ch==1)
        diff(str1,str2);
    else if(ch==2)
        inter(str1,str2);
    else if(ch==3)
        uni(str1,str2);

    return 0;
}
