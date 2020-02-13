#include<bits/stdc++.h>
using namespace std;
char L[30],M[30];
int i,j,k,m,n;
char result[1000], x;
string LC[10000],clsr[10000];
string a,b,t;
void unin(char L[], char M[]){
    k = 0;
    for(i = 0; i < strlen(L); i++)
        result[k++] = L[i];

    for(j = 0; j < strlen(M); j++)
    {
        x = M[j];
        int c = 0;
        for(i = 0; i <= k; i++)
            if(result[i] == x)
                c = 1;
        if(c == 0)
            result[k++] = x;
    }
    cout<<"L+M: { ";
    for(i = 0; i < k ; i++)
        cout<<result[i]<<" ";
    cout<<"}"<<endl;
}
void concat(char L[], char M[]){
    cout<<"L.M: { ";
    for(i = 0; i < strlen(L); i++)
        for(j = 0; j < strlen(M); j++)
            cout<<L[i]<<M[j]<<" ";
    cout<<"}"<<endl;
}
void closer(char L[]){
    for(i = 0; i < strlen(L); i++)
    {
        LC[i] = L[i];
        clsr[i] = L[i];
    }
    for(int n = 0; n < 20 ; n++)
    {
        for(j = 0; j < strlen(L); j++)
            for(k = 0 ; k < i ; k++)
            {
                cout<<clsr[i]<<" ";
                b = L[j];
                t = LC[k];
                a = b+t;
                cout<<a;
                clsr[i++] = a;
            }
        for(m = 0 ; m<i ; m++)
            LC[m] = clsr[m];
    }
    cout<<"Closer of L: epsilon, ";
    for( m = 0 ; m < i ; m++)
        cout<<clsr[m]<<" ";

}
int main()
{
    int w=1;
    cout<<"Enter 1st set: ";
    scanf("%s",&L);
    cout<<"Enter 2nd set: ";
    scanf("%s",&M);
    while(w)
    {
        cout<<endl<<"*****Choose what to do*****"<<endl;
        cout<<"1. Union (L+M)"<<endl<<"2. Concatenation (L.M)"<<endl<<"3. Closer"<<endl<<"4. Exit"<<endl;
        cin>>w;
        switch(w){
        case 1: unin(L,M); break;
        case 2: concat(L,M); break;
        case 3: closer(L); break;
        case 4: break;
        }
        if(w == 4)
            break;
    }
    return 0;
}
