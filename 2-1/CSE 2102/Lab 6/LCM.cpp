#include<bits/stdc++.h>
using namespace std;

void Intersection(int arr1[], int arr2[], int m, int n)
{
    int mult=1;
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else
        {
            mult = mult * arr2[j];
            i++;
            j++;
        }
    }
    cout<<"The GCD is: "<<mult<<" (Prime Factorization) "<<endl;
}

int PrimeFactor(int a, int b)
{
    int MAX,len1,len2;
    int PF1[10];
    int PF2[10];
    int divisor1 = 2,divisor2 = 2,i=0,j=0,cPF1=0,cPF2=0;
    while(a>1)
    {
        while(a%divisor1 == 0)
        {
            cPF1++;
            //cout<<divisor1<<endl;
            PF1[i++] = divisor1;

            a = a / divisor1;
        }
        divisor1++;
    }


    while(b>1)
    {
        while(b%divisor2 == 0)
        {
            cPF2++;
            PF2[j++] = divisor2;

            b = b / divisor2;
        }
        divisor2++;
    }

    int m = sizeof(PF1)/sizeof(PF1[0]);
    int n = sizeof(PF2)/sizeof(PF2[0]);

    Intersection(PF1,PF2,m,n);
}

int main()
{
    int a,b,m;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter another number: ";
    cin>>b;

    PrimeFactor(a,b);
    //cout<<"\n"<<(a*b)/m<<endl;
    return 0;
}

