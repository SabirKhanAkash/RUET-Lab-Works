#include<iostream>
using namespace std;

class vehicle {
public:
    int wheel_no;
    int range;

    vehicle (int w, int r) {
        wheel_no = w;
        range = r;
    }
    void show() {
            cout<<"This is Car's Wheel Number: "<<wheel_no<<endl;
            cout<<"This is Car's Range: "<<range<<endl;
    }
};
    class car : public vehicle {
        int passenger;
    public:
        car(int p, int w, int r) : vehicle(w,r) {
            passenger = p;
        }
        void show_passenger() {
            cout<<"This is Passenger Number: "<<passenger<<endl;
        }
    };

        class truck : public vehicle {
            public:
            int loadNumber;
            truck (int l, int w, int r) : vehicle(w,r) {
                loadNumber = l;
            }
        void show() {
            cout<<"This is Truck's Load Number: "<<loadNumber<<endl;
            cout<<"This is Truck's Wheel Number: "<<wheel_no<<endl;
            cout<<"This is Truck's Range: "<<range<<endl;        }
        };


int main()
{
    car c(4,4,6);
    truck t(15,6,150);
    c.show();
    c.show_passenger();
    t.show();
    return 0;
}
