#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    else if(n>1)
        return n*fact(n-1);
}

void PrintForward(double x[],double y[],double Del1[], double Del2[], double Del3[])
{

    int i,j;
    cout<<"\nx         y         Del1y     Del2y      Del3y"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    for(i=0 ; i<4 ; i++)
    {
        printf("%0.0lf     %0.5lf    %0.5lf    %0.5lf    %0.5lf\n",x[i],y[i],Del1[i],Del2[i],Del3[i]);
    }
    cout<<"-------------------------------------------------"<<endl;
}

void PrintBackward(double x[],double y[],double Del1[], double Del2[], double Del3[],double Del4[])
{
    int i,j;
    cout<<"\nx              y        Del1y      Del2y       Del3y     Del4y"<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    for(i=0 ; i<5 ; i++)
    {
        printf("%0.0lf     %0.5lf    %0.5lf    %0.5lf    %0.5lf    %0.5lf\n",x[i],y[i],Del1[i],Del2[i],Del3[i],Del4[i]);
    }
    cout<<"-----------------------------------------------------------------"<<endl;
}

void Forward()
{
    int points,i,j=0,k=0,l=0;
    double x[10],y[10],h,p,X,Del1[10],Del2[10],Del3[10],Y,G1,G2,G3;
    for(int x=0;x<10;x++)
    {
        Del1[x] = 0;
        Del2[x] = 0;
        Del3[x] = 0;
    }

    cout<<"\nHow many points? : ";
    cin>>points;
    cout<<endl;
    for(i=0;i<points;i++)
    {
        cout<<"Enter the value of x"<<i<<" : " ;
        cin>>x[i];
        cout<<"Enter the value of y"<<i<<" : ";
        cin>>y[i];
    }
    printf("\n");

    cout<<"For which value of x, the value of y will be determined: ";
    cin>>X;

    h = x[1] - x[0];
    p = (X - x[1])/h;

    for(i=0;i<points-1 ; i++)
        Del1[i] = y[i+1] - y[i];
    for(i=0;i<points-2 ; i++)
        Del2[i] = Del1[i+1] - Del1[i];
    for(i=0;i<points-3 ; i++)
            Del3[i] = Del2[i+1] - Del2[i];

    PrintForward(x,y,Del1,Del2,Del3);

    G1 = p;
    G2 = (p*(p-1))/fact(2);
    G3 = ((p+1)*p*(p-1))/fact(3);

    Y = y[1] + G1*Del1[1] + G2*Del2[1] + G3*Del3[0];
    cout<<"\nThe value of Y("<<X<<") is: " <<Y<<endl;
}

void Backward()
{
    int points,flag=0,i,j=0,k=0,l=0;
    double x[10],y[10],h,p,X,Del1[10],Del2[10],Del3[10],Del4[10],Y,G1,G2,G3,G4;
    for(int x=0;x<10;x++)
    {
        Del1[x] = 0;
        Del2[x] = 0;
        Del3[x] = 0;
        Del4[x] = 0;
    }

    cout<<"\nHow many points? : ";
    cin>>points;
    cout<<endl;
    for(i=0;i<points;i++)
    {
        cout<<"Enter the value of x"<<i<<" : " ;
        cin>>x[i];
        cout<<"Enter the value of y"<<i<<" : ";
        cin>>y[i];
    }
    printf("\n");

    cout<<"For which value of x, the value of y will be determined: ";
    cin>>X;

    h = x[1] - x[0];
    p = (X - x[1])/h;

    for(i=0;i<points-1 ; i++)
        Del1[i] = y[i+1] - y[i];
    for(i=0;i<points-2 ; i++)
        Del2[i] = Del1[i+1] - Del1[i];
    for(i=0;i<points-3 ; i++)
            Del3[i] = Del2[i+1] - Del2[i];
    for(i=0;i<points-3 ; i++)
        Del4[i] = Del3[i+1] - Del3[i];

    PrintBackward(x,y,Del1,Del2,Del3,Del4);

    G1 = p;
    G2 = (p*(p+1))/fact(2);
    G3 = ((p+1)*p*(p-1))/fact(3);
    G4 = ((p+1)*(p+2)*p*(p-1))/fact(4);

    Y = y[1] + G1*Del1[1] + G2*Del2[0] + G3*Del3[0] + G4*Del4[0];
    cout<<"\nThe value of Y("<<X<<") is: " <<Y<<endl;

}

void menu()
{
    int choice;
    cout<<"1.Gauss's Forward Interpolation\n2.Gauss's Backward Interpolation\n3. Exit\nEnter your Choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            Forward();
            break;
        case 2:
            Backward();
            break;
        case 3:
            cout<<"The program ended successfully" <<endl;
            break;
        default:
            cout<<"wrong Input"<<endl;
            break;
    }
}

int main()
{
    menu();

    return 0;
}

