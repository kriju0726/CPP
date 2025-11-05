//Classes, Public and Private access modifiers in C++....
#include<iostream>
using namespace std;
class Employee
{
    private: 
       int a,b,c;      public:
                          int d,e;
    
    void setdata(int a1,int b1,int c1);     //DECLARATION...
    void getdata(){
        cout<<"The value of a is "<<a;
        cout<<"\nThe value of b is "<<b;
         cout<<"\nThe value of c is "<<c;
          cout<<"\nThe value of d is "<<d;
         cout<<"\nThe value of e is "<<e;
  }};
   void Employee :: setdata(int a1,int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
   }
int main()
{
     Employee harry;
     harry.d = 34;
     harry.e = 89;
     harry.setdata(1,2,4);
     harry.getdata();

      return 0;
}