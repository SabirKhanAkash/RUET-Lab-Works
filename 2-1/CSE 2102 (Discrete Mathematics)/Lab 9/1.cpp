#include<bits/stdc++.h>
using namespace std;

int n,e,n2,e2,A,B,c=0;
char a,b,a2,b2;
int main()
{
    int p = 0,z=0,k=0,z2=0,k2=0;
    char arr[10000];
    cout<<"*** Graph 1 ***"<<endl;
    cout<<"Enter the no. of nodes: ";
    scanf("%d",&n);

    cout<<"\nEnter the number of edges: ";
    scanf("%d,&",&e);

    int counter[n];

    int AM[n][n];

    for(int i=0; i<n ;i++)
        for(int j=0 ; j<n ; j++)
        AM[i][j] = 0;

    cout<<"\nEnter the edge connection between two nodes\n";

    for(int i=0 ; i<e ; i++)
    {
        scanf(" %c",&a);
        scanf(" %c",&b);

        A = a - 'a';
        B = b - 'a';

        AM[A][B]++;
        AM[B][A]++;
    }

        cout<<"\n*** Graph 2 ***"<<endl;
            cout<<"Enter the no. of nodes: ";
    scanf("%d",&n2);

    cout<<"\nEnter the number of edges: ";
    scanf("%d,&",&e2);

    int counter2[n2];

    int AM2[n2][n2];

    for(int i=0; i<n2 ;i++)
        for(int j=0 ; j<n2 ; j++)
        AM2[i][j] = 0;

    cout<<"\nEnter the edge connection between two nodes\n";

    for(int i=0 ; i<e2 ; i++)
    {
        scanf(" %c",&a2);
        scanf(" %c",&b2);

        A = a2 - 'a';
        B = b2 - 'a';

        AM2[A][B]++;
        AM2[B][A]++;
    }

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(AM[i][j] == 1)
                z++;
        }
        counter[k++] = z;
        z=0;
    }

    for(int i=0 ; i<n2 ; i++)
    {
        for(int j=0 ; j<n2 ; j++)
        {
            if(AM2[i][j] == 1)
                z2++;
        }
        counter2[k2++] = z2;
        z2=0;
    }

    sort(counter,counter+k);
    sort(counter2,counter2+k2);

    int flag =0;

    for(int i=0; i<k ; i++)
    {
        if(counter[i] == counter2[i])
            flag++;
    }

    if(n == n2 && e == e2 && flag == k)
        cout<<"\nGraph 1 and Graph 2 are Isomorphic"<<endl;
    else
        cout<<"\nGraph 1 and Graph 2 are not Isomorphic"<<endl;

    return 0;
}






















/*
a b
a c
c d
b d
*/

/*
a c
a d
b c
b d
*/

/*
a b
a f
b f
b c
c d
d e
c e
e f
*/

/*
a b
a f
b c
b e
c d
d e
e f
c f
*/
