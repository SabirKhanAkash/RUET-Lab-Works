///Code
#include<iostream>
#include<cmath>
using namespace std;

int a[8]={0,0,0,0,1,1,1,1};
int b[8]={0,0,1,1,0,0,1,1};
int c[8]={0,1,0,1,0,1,0,1};
int x[4]={0,0,1,1};
int y[4]={0,1,0,1};
int v;

void AND()
{
    if(v==3)
    {
        cout<<"\nA  |  B  |  C  |  AND"<<endl;
        for(int i=0;i<pow(2,v);i++)
            cout<<a[i]<<"  |  "<<b[i]<<"  |  "<<c[i]<<"  |  "<<((a[i]&b[i])&c[i])<<endl;
    }
    else if(v==2)
    {
        cout<<"\nA  |  B  |  AND"<<endl;
        for(int i=0;i<pow(2,v);i++)
            cout<<x[i]<<"  |  "<<y[i]<<"  |  "<<(x[i]&y[i])<<endl;
    }
}

void OR()
{
    if(v==3)
    {
        cout<<"\nA  |  B  |  C  |  OR"<<endl;
        for(int i=0;i<pow(2,v);i++)
        {
            cout<<a[i]<<"  |  "<<b[i]<<"  |  "<<c[i]<<"  |  "<<((a[i]|b[i])|c[i])<<endl;
        }
    }
    else if(v==2)
    {
        cout<<"\nA  |  B  |  OR"<<endl;
        for(int i=0;i<pow(2,v);i++)
        {
            cout<<x[i]<<"  |  "<<y[i]<<"  |  "<<(x[i]|y[i])<<endl;
        }
    }
}

void NOT()
{
    cout<<"\nA  |  NOT of A"<<endl;
    for(int i=0;i<2;i++)
    {
        cout<<i<<"  |  "<<!i<<endl;
    }
}

void XOR()
{
    if(v==3)
    {
        cout<<"\nA  |  B  |  C  |  XOR"<<endl;
        for(int i=0;i<pow(2,v);i++)
        {
            cout<<a[i]<<"  |  "<<b[i]<<"  |  "<<c[i]<<"  |  "<<((a[i]^b[i])^c[i])<<endl;
        }
    }
    else if(v==2)
    {
        cout<<"\nA  |  B  |  XOR"<<endl;
        for(int i=0;i<pow(2,v);i++)
        {
            cout<<x[i]<<"  |  "<<y[i]<<"  |  "<<(x[i]^y[i])<<endl;
        }
    }
}

void CO()
{
    if(v==3)
    {
        cout<<"\nA  |  B  |  C  |  (A -> B) -> C"<<endl;
        for(int i=0;i<pow(2,v);i++)
        {
            cout<<a[i]<<"  |  "<<b[i]<<"  |  "<<c[i]<<"  |  "<<(!((!a[i])|(b[i]))|(c[i]))<<endl;
        }
    }
    else if(v==2)
    {
        cout<<"\nA  |  B  |  A -> B"<<endl;
        for(int i=0;i<pow(2,v);i++)
            cout<<x[i]<<"  |  "<<y[i]<<"  |  "<<((!x[i])|(y[i]))<<endl;
    }
}

void BCO()
{
    if(v==3)
    {
        cout<<"\nA  |  B  |  C  |  (A <-> B) <-> C"<<endl;
        for(int i=0;i<pow(2,v);i++)
        {
            cout<<a[i]<<"  |  "<<b[i]<<"  |  "<<c[i]<<"  |  "<<((!((!a[i])|(b[i]))|(c[i]))&(!(c[i])|((!b[i])|(a[i]))))<<endl;
        }
    }
    else if(v==2)
    {
        cout<<"\nA  |  B  |  A <-> B"<<endl;
        for(int i=0;i<pow(2,v);i++)
            cout<<x[i]<<"  |  "<<y[i]<<"  |  "<<(((!x[i])|(y[i]))&((!y[i])|(x[i])))<<endl;
    }
}


void menu()
{
    int op;
    cout<<"1. AND"<<endl;
    cout<<"2. OR"<<endl;
    cout<<"3. NOT"<<endl;
    cout<<"4. XOR"<<endl;
    cout<<"5. Conditional Operator"<<endl;
    cout<<"6. Bi-Conditional Operator"<<endl;
    cout<<"Enter your Option (1 ~ 5): ";
    cin>>op;
    cout<<"\n*** TRUTH TABLE ***"<<endl;
    switch(op)
    {
    case 1:
        AND();
        break;
    case 2:
        OR();
        break;
    case 3:
        NOT();
        break;
    case 4:
        XOR();
        break;
    case 5:
        CO();
        break;
    case 6:
        BCO();
        break;
    default:
        cout<<"Please Choose between 1 to 6"<<endl;
        break;
    }
}

int main()
{
    cout<<"How many Variables (2/3): ";
    cin>>v;
    menu();
    return 0;
}
