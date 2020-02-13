#include<iostream>
using namespace std;

class a {
    int x,y;
public:
    a() {
        x = 0, y = 0;
    }
    a(int i, int j) {
        x = i;
        y = j; }
   void get_xy()
   {
      cout<<"x="<<x<<'\t'<<"y="<<y<<endl;
   }
    a operator + (a ob) {
        a temp;
        temp.x = x + ob.x;
        temp.y = y + ob.y;
        return temp;
    }
    a operator + (int i)  {
        a temp;
        temp.x = x + i;
        temp.y = y + i;
        return temp;
    }
    a  operator - (a ob) {
        a temp;
        temp.x = x - ob.x;
        temp.y = y - ob.y;
        return temp;
    }
    a operator - (int i)  {
        a temp;
        temp.x = x - i;
        temp.y = y - i;
        return temp;
    }
    a operator * (a ob) {
        a temp;
        temp.x = x * ob.x;
        temp.y = y * ob.y;
        return temp;
    }
    a operator* (int i)  {
        a temp;
        temp.x = x * i;
        temp.y = y * i;
        return temp;
    }
    a operator / (a ob) {
        a temp;
        temp.x = x / ob.x;
        temp.y = y / ob.y;
        return temp;
    }
    a operator / (int i)  {
        a temp;
        temp.x = x / i;
        temp.y = y / i;
        return temp;
    }

    a operator++() {
        x++;
        y++;
        return *this;
    }
    a operator++(int notUsed) {
        x++;
        y++;
        return *this;
    }

    friend a operator+ (int i,a ob);
    friend a operator- (int i,a ob);
    friend a operator* (int i,a ob);
    friend a operator/ (int i,a ob);
};

    a operator+(int i, a ob){
        a temp;
        temp.x=i+ob.x;
        temp.y=i+ob.y;
        return temp;
    }
    a operator-(int i, a ob) {
        a temp;
        temp.x=i-ob.x;
        temp.y=i-ob.y;
        return temp;
    }
    a operator*(int i, a ob) {
        a temp;
        temp.x=i+ob.x;
        temp.y=i+ob.y;
        return temp;
    }
    a operator/(int i, a ob) {
        a temp;
        temp.x=i+ob.x;
        temp.y=i+ob.y;
        return temp;
}


int menu()
{
    int i;
    cout<<"\n1. Addition\t2. Subtraction \t\t3. Multiplication \n";
    cout<<"4. Division\t5. Unary operator\t6. Exit\nEnter your option(1-6): ";
    cin>>i;
    return i;
}
int main() {
    int i,j;
    a ob1(20,5),ob2(12,4),ob3;
    for( ; ; ) {
        j = menu();
        switch(j){
            case 1:
                ob3 = ob1 + ob2;
                ob3.get_xy();
                break;
            case 2:
                ob3 = ob1 - ob2;
                ob3.get_xy();
                break;
            case 3:
                ob3 = ob1 * ob2;
                ob3.get_xy();
                break;
            case 4:
                ob3 = ob1 / ob2;
                ob3.get_xy();
                break;
            case 5:
                ++ob1;
                ob1.get_xy();
                ob2++;
                ob2.get_xy();
                break;
            case 6:
                cout<<"The program is finished. . . .\n"<<endl;
                break;
            default:
                cout<<"Invalid Input. Try again !!!"<<'\n'<<endl;
                break;
            }
            if (j == 6)
                break;

         }

    return 0;
}
