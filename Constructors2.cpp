//Constructor Overloading...
/*#include<iostream>                    //Ek class ke aandar Multiple Constructor alag-alag Parameters ke, ek hin naam se ho sakte hain...
using namespace std;
class complex{
    int a,b;
    public:
       complex(int x, int y){                      //Constructor 1...With two Parameters...
        a = x;
        b = y;
       }
       complex(int x){                             //Constructor 2...With one Parameter...
        a = x;
        b = 0;
       }
       void printnumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i\n";
       }
};
int main(){
    complex c1(4,6);
    c1.printnumber();
    complex c2(5);
    c2.printnumber();
    
    return 0;
}*/

//Constructor With Default Arguments in C++;
/*#include<iostream>
using namespace std;
class simple{
    int data1;
    int data2;
    int data3;
       public:
         simple(int a, int b=9, int c=8){
            data1 = a;
            data2 = b;
            data3 = c;
         }
         void printdata();
};
void simple :: printdata(){
    cout<<"The value of data1, data2 and data3 is "<<data1<<", "<<data2<<" and "<<data3<<".";
}
int main()
{
    simple s(1);
    s.printdata();
      return 0;
}*/

//Copy Constructors in C++...
// It is a type of constructor that creates a copy of another object.
// If we want one object to resemble another object, We can use a copy constructor....
#include<stdio.h>
using namespace std;
class number{
    int a;
    public:
       number(){
        a=0;
       }
       number(int num){
        a=num;
       }
//When no copy Constructor is found, Complier supplies it's own copy constructor.....
number(number &obJ){
    cout<<"Copy constructor called!!!";
    a = obj.a;
} 
void display(){
    cout<<"The number for this object is "<<a;
}
};

int main(){
    number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();

    number z1(z);            //Copy Constructor invoked
    z1.display();

    z2 = z;                  //Copy Constructor not called
    z2.display();

    number z3 = z;           //copy Constructor invoked
    z3.display();
    return 0;                //z1 should exactly resemble Z or X or Y
}
