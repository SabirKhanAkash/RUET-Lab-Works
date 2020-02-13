#include<iostream>
#include<string.h>
using namespace std;

    class student {
        char name[50];
        int roll;
        double cgpa;
    public:
        void get_name() {
            cout<<"Enter Name: ";
            cin>>name;
        }
        void get_roll() {
            cout<<"Enter Roll: ";
            cin>>roll;
        }
        void get_cgpa() {
            cout<<"Enter CGPA :";
            cin>>cgpa;
        }

        int mark()
        {
            double a,b,c,d;
            cout<<"Enter your CT marks: ";
            cin>>a>>b>>c>>d;
            return ((a+b+c+d)/4);
        }
        void show()
        {
            cout<<"Name: "<<name<<'\t'<<"Roll: "<<roll<<'\t'<<"cgpa: "<<cgpa<<'\t';
        }
};

int main()
{
    student ob;
    float x;
    ob.get_name();
    ob.get_roll();
    ob.get_cgpa();
    x = ob.mark();
    ob.show();
    cout<<"Mark: "<<x;

    return 0;
}
