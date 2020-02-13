#include<iostream>
#include<string.h>
using namespace std;

    class student {
        char name[50];
        int roll;
        double cgpa;
    public:
        student() {
            cout<<"This is default constructor\n";
            cout<<"Name: ";
            cin>>name;
            cout<<"Roll: ";
            cin>>roll;
            cout<<"CGPA: ";
            cin>>cgpa;
        }
        student(char *p, int x, float y) {
            cout<<"In Constructor\n";
            strcpy(name,p);
            roll = x;
            cgpa = y;
        }

        void show()
        {
            cout<<"Name: "<<name<<'\t'<<"Roll: "<<roll<<'\t'<<"cgpa: "<<cgpa<<endl;
        }
         ~student()
        {
            cout<<"This is destructor. . ."<<endl;
        }

};

int main()
{
    student ob("Akash",163108,3.14),ob1;
    ob.show();
    cout<<endl;
    ob1.show();
    cout<<endl;

    return 0;
}
