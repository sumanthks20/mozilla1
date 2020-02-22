#include <iostream>

using namespace std;
class A{
public:
    mutable int x;
    mutable float y;
     void fun()const;//if the const it cannot modify the value but it can print value
     };
     void A::fun()const
     {
         x=1;
         y=7.2;
         cout<< "\nfunction1\n";
         cout<<x<<"\n"<<y;

     }


int main()
{
    A a;
    //a.x=1;
    //a.y=7.2;
    a.fun();
}
