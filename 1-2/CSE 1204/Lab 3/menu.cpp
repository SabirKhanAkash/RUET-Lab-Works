#include<iostream>
using namespace std;

class math
{
   int x,y;
public:
   math(){x=0;y=0;}
   math(int i, int j){x=i;y=j;}
   void get_xy()
   {
      cout<<"x="<<x<<'\t'<<"y="<<y<<endl;
   }
   math operator+(math ob)
   {
      math temp;
      temp.x=x+ob.x;
      temp.y=y+ob.y;
      return temp;
   }
   math operator+(int i)
   {
      math temp;
      temp.x=x+i;
      temp.y=y+i;
      return temp;
   }
   math operator-(math ob)
   {
      math temp;
      temp.x=x-ob.x;
      temp.y=y-ob.y;
      return temp;
   }
   math operator-(int i)
   {
      math temp;
      temp.x=x-i;
      temp.y=y-i;
      return temp;
   }
   math operator*(math ob)
   {
      math temp;
      temp.x=x*ob.x;
      temp.y=y*ob.y;
      return temp;
   }
   math operator*(int i)
   {
      math temp;
      temp.x=x*i;
      temp.y=y*i;
      return temp;
   }
   math operator/(math ob)
   {
      math temp;
      temp.x=x/ob.x;
      temp.y=y/ob.y;
      return temp;
   }
   math operator/(int i)
   {
      math temp;
      temp.x=x/i;
      temp.y=y/i;
      return temp;
   }
   math operator++()
   {
      x++;
      y++;
      return *this;
   }
   math operator++(int notused)
   {
      x++;
      y++;
      return *this;
   }
   friend math operator+(int i, math ob);
   friend math operator-(int i, math ob);
   friend math operator*(int i, math ob);
   friend math operator/(int i, math ob);
};

math operator+(int i, math ob)
{
   math temp;
   temp.x=i+ob.x;
   temp.y=i+ob.y;
   return temp;
}
math operator-(int i, math ob)
{
   math temp;
   temp.x=i-ob.x;
   temp.y=i-ob.y;
   return temp;
}
math operator*(int i, math ob)
{
   math temp;
   temp.x=i+ob.x;
   temp.y=i+ob.y;
   return temp;
}
math operator/(int i, math ob)
{
   math temp;
   temp.x=i+ob.x;
   temp.y=i+ob.y;
   return temp;
}

int menu()
{
    int op;
    cout<<"1. Addition \n2. Subtraction \n3. Multiplication \n4. Division\n5. Comparison\n6. Unary operator\n7. Exit\nEnter your option(1-7) \n"<<endl;
    cin>>op;
    return op;
}

int main()
{
   int i,j;
   math ob1(10,20),ob2(50,60),ob3;
   for ( ; ; )
      {
         j=menu();
         switch(j)
         {
            case 1:
               ob3=ob1+ob2;
               ob3.get_xy();
               cout<<'\n';
               break;
            case 2:
               ob3=ob1-ob2;
               ob3.get_xy();
               //cout<<'\n';
               break;
            case 3:
               ob3=ob1*ob2;
               ob3.get_xy();
              // cout<<'\n';
               break;
            case 4:
               ob3=ob1/ob2;
               ob3.get_xy();
               //cout<<'\n';
               break;
            case 5:
           /*     if (ob1.i > ob2.j)
                    cout<<" > "<<endl;
                else
                    cout<<" < "<<endl;
                break; */
            case 6:
               ++ob1;
               ob1.get_xy();
               ob2++;
               ob2.get_xy();
               break;
            case 7:
                cout<<"The program is finished. . . .\n"<<endl;
                break;
            default:
                cout<<"Invalid Input. Try again !!!"<<'\n'<<endl;
                break;
            }
            if (j == 7)
                break;

         }
      return 0;
}
