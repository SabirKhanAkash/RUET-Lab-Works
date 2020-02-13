#include<iostream>
using namespace std;

class vehicle {
public:
    int wheel_no;
    int range;
    void get_wheel_no() {
        cout<<"Enter Wheel Number: ";
        cin>>wheel_no;
    }
    void get_range() {
        cout<<"Enter Range: ";
        cin>>range;
    }
    void show() {
            cout<<"This is Car's Wheel Number: "<<wheel_no<<endl;
            cout<<"This is Car's Range: "<<range<<endl;
    }
};
    class car : public vehicle {
    public:
        int passenger;
        void get_passenger() {
            cout<<"Enter Passenger number: ";
            cin>>passenger;
        }
        void show_passenger() {
            cout<<"This is Passenger Number: "<<passenger<<endl;
        }
    };

        class truck : public vehicle {
            public:
            int loadNumber;
        void get_load_number() {
            cout<<"Enter Truck's Load Number: ";
            cin>>loadNumber;
        }
        void show() {
            cout<<"This is Truck's Load Number: "<<loadNumber<<endl;
            cout<<"This is Truck's Wheel Number: "<<wheel_no<<endl;
            cout<<"This is Truck's Range: "<<range<<endl;        }
        };

int main()
{
    car c;
    truck t;
    cout<<"***This is Car's details***"<<endl;
    c.get_wheel_no();
    c.get_range();
    c.get_passenger();
    c.show();
    c.show_passenger();
    cout<<'\n';
    cout<<"***This is Truck's details***"<<endl;
    t.get_load_number();
    t.get_wheel_no();
    t.get_range();
    t.show();
    cout<<"\nThe program is finished. . . ."<<endl;

    return 0;
}

