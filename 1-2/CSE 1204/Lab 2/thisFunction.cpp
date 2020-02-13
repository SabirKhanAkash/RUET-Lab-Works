#include<iostream>
#include<string.h>
using namespace std;
class student {
    char name[50];
    int roll;
    double cgpa;
public:
    student(char *p, int i, double d)
    {
        strcpy(this->name,p);
        this->roll = i;
        this->cgpa = d;
    }
    void show()
    {
        cout<<this->name<<'\n'<<this->roll<<'\n'<<this->cgpa<<'\n'<<endl;
    }
};

int main()
{
    student ob("Mr. Akash",1603108,3.14);
    ob.show();

    return 0;
}

