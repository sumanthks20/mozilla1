#include<iostream>
using namespace std;
class Emp{
    public:
    string empno;
    string empname;
    double gross;
    double basic;
    double da;
    double it;
    double net_salary;
    void read();
    void com();
    void display();
    void searchno();
    void searchran();
    };
void Emp::read()
{
    cout<<"\nenter the employee details";
    cout<<"\nenter the employee no\n";
    cin>>empno;
    cout<<"\nenter the employee name\n";
    cin>>empname;
    cout<<"\nenter the basic salary\n";
    cin>>basic;
}
void Emp::searchno()
{
    string k;
    cout<<"\nenter the element\n";
    cin>>k;
   if(empno==k)
   {
       cout<<"found";
   }
}
void Emp::searchran()
{
    double a,b;
    cout<<"\nenter the range\n";
    cin>>a>>b;
   if(net_salary<a)
   {
       cout<<"increase";
   }
   else if(a<net_salary<b)
   {
       cout<<"moderate";
   }
   else
   {
       cout<<"less";
   }
}
void Emp::com()
{

    da=(basic*52)/100;
    gross=basic+da;
    it=(gross*30)/100;
   net_salary=basic+da-it;
}
void Emp::display()
{
    cout<<" the details\n";
    cout<<"\n the employee no\n"<<empno;
    cout<<"\nthe employee name\n"<<empname;
    cout<<"\n the basic salary\n"<<basic;
    cout<<"\n the direct allcbreation\n"<<da;
    cout<<"\nthe gross\n"<<gross;
    cout<<"\nthe insurence \n"<<it;
    cout<<"\nthe net salary\n"<<net_salary;
}

int main()
{
   Emp e[10];
    int n,ch;
    cout<<"\nenter no of employees\n";
    cin>>n;

while(1)
{
    cout<<"enter the choice\n";
    cin>>ch;
    switch(ch)
    {

        case 1 :for(int i=0;i<n;i++)
                {
                    e[i].read();
                }
                break;
        case 2 :for(int i=0;i<n;i++)
                {
                    e[i].com();
                }
                break;
        case 3 :for(int i=0;i<n;i++)
                {
                    e[i].display();
                }
                break;
        case 4 :     for(int i=0;i<n;i++)
                        e[i].searchno();
                break;
        case 5 : for(int i=0;i<n;i++)
                 e[i].searchran();
                break;


    }
}


    return 0;
}
