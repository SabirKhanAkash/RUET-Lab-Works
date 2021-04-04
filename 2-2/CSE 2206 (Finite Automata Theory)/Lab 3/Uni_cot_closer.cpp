#include<bits/stdc++.h>
using namespace std;

void get_union(char *s1, char *s2)
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
    cout<<"\nL+M = "<<"{ "<<u<<"}"<<endl;
}

void get_concat(char *s1,char *s2)
{
    char c[40];
    int k=0;
    for(int i=0 ; i<=strlen(s1) ; i++)
    {
        for(int j=0; j<strlen(s2) ; j++)
        {
            c[k] = s1[i];
            c[k+1] = s2[j];
            c[k+2] = ' ';
            k+=3;
        }
        if(i==(strlen(s1)))
        c[k]='\0';
    }
    cout<<"\nL.M = {"<<c<<"} "<<endl;
}

void get_closure(char *s)
{
    char res[1000],ress[1000],resss[1000],ressss[1000],result[1000];
    int c=0,k=4,l=0,m=0,n=0;
    res[0] = 'e';
    res[1] = 'p';
    res[2] = 's';
    res[3] = ' ';
    for(int i=0 ; i<=strlen(s) ; i++)
    {
        res[k] = s[i];
        res[k+1] = ' ';
        k+=2;
    }

    for(int i=0 ; i<=strlen(s) ; i++)
    {
        for(int j=0; j<strlen(s) ; j++)
        {
            ress[l] = s[i];
            ress[l+1] = s[j];
            ress[l+2] = ' ';
            l+=3;
        }
    }

    for(int i=0 ; i<=strlen(s) ; i++)
    {
        for(int j=0; j<strlen(s) ; j++)
        {
            for(int x=0 ; x<strlen(s) ; x++)
            {
                resss[m] = s[i];
                resss[m+1] = s[j];
                resss[m+2] = s[x];
                resss[m+3] = ' ';
                m+=4;
            }
        }
    }

    for(int i=0 ; i<=strlen(s) ; i++)
    {
        for(int j=0; j<strlen(s) ; j++)
        {
            for(int x=0 ; x<strlen(s) ; x++)
            {
                for(int y=0 ; y<strlen(s) ; y++)
                {
                    ressss[n] = s[i];
                    ressss[n+1] = s[j];
                    ressss[n+2] = s[x];
                    ressss[n+3] = s[y];
                    ressss[n+4] = ' ';
                    n+=5;
                }
            }
        }
    }

    strcpy(result,strcat(strcat(strcat(res,ress),resss),ressss));

    cout<<"{ "<<result<<"}"<<endl;
}

int main()
{
    int ch,ActLen1,ActLen2,c=0,d=0,op=1;
    char L[15],M[15];
    char str1[15],str2[15];

    cout<<"Enter the values of L set: ";
    gets(L);
    cout<<"Enter the values of M set: ";
    gets(M);

    ActLen1=((strlen(L)-2)/2)+1;
    ActLen2=((strlen(M)-2)/2)+1;

    for(int i=0,j=0;i<strlen(L);i++)
    {
        if(j==ActLen1){
            str1[j]='\0';
            break;
        }
        else if(L[i]!='{' && L[i]!='}' && L[i]!=','){
            str1[j]=L[i];
            j++;
        }
    }

    for(int i=0,j=0;i<strlen(M);i++)
    {
        if(j==ActLen2){
            str2[j]='\0';
            break;
        }
        else if(M[i]!='{' && M[i]!='}' && M[i]!=','){
            str2[j]=M[i];
            j++;
        }
    }

    sort(str1,str1+ActLen1);
    sort(str2,str2+ActLen2);

    while(op)
    {
        cout<<"\n1. Union\n2. Concatenation\n3. Closure of L set (upto L4)\n4. Exit\nEnter a option: ";
        cin>>op;
        switch(op)
        {
            case 1:
                get_union(str1,str2);
                break;
            case 2:
                get_concat(str1,str2);
                break;
            case 3:
                get_closure(str1);
                break;
            case 4:
                cout<<"\nProgram Ended"<<endl;
                break;
            default:
                cout<<"Enter Valid option... Try Again !!!"<<endl;
        }
        if(op==4)
            break;
    }

    return 0;
}
