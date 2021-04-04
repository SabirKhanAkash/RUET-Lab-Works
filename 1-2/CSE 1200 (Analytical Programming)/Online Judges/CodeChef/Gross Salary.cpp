#include<iostream>
using namespace std;
int main()
{
    int i,T,salary;
    double HRA,DA,GrossSalary;
    cin>>T;
    for(i=0 ; i<T ; i+=1)
    {
        cin>>salary;
        if(salary>=1500)
        {
            HRA=500;
            DA=salary*0.98;
            GrossSalary = salary + HRA + DA;
        }
        else if(salary<1500)
        {
            HRA=salary*0.10;
            DA=salary*0.90;
            GrossSalary = salary + HRA + DA;
        }
        cout<<GrossSalary<<endl;
        GrossSalary=0;
    }

    return 0;
}
