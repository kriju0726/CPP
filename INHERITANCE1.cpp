//What is INHERITANCE in C++ ??
//The concept of reusability in C++ is supported using Inheritance.
//We can reuse the properties of an existing class by inheriting from it.
//The existing class is called as the Base class.
//The new class which is inherited is called as Derived class.
//Reusing classes saves time and money.
//There are different types of inheritance in C++.
#include<iostream>
using namespace std;
class Employee{                                       //Base Class...
    public:
       int id;
       float salary;
        Employee(){}
       Employee(int inpID)
       {
        id = inpID;
        salary = 34.0;
       }
};                                                     //Creating a programmer class derived from Employee Base class...
class programmer : public Employee{                  // Derived class Syntax.
    public:                                          //      class {{derived - class name}} : {{visibility mode}}  {{base - class name}}
         programmer(int inpID)                                        
         {                                           //           {
            id = inpID;                              //               class members/methods/etc...
         }                                           //            }
         int languageCode = 9;
         void getdata(){      
            cout<<id;
         }
         };
/*Note...:
1. Default visibility mode is Private.
2. Public visibility Mode: Public members of the base class becomes Public members of the derived class.
3. Private visibility Mode: Public members of the base class becomes Private members of the Derived class.
4. Private members are never inherited.
*/
int main(){
    Employee harry(1), rohan(2);                       //Harry and Rohan are two objects of class EMPLOYEE....
    cout<<harry.id<<" - ";
    cout<<harry.salary<<"\n";
    cout<<rohan.id<<" - ";
    cout<<rohan.salary<<"\n";
    programmer skillF(10);                             //skillF is the object of class(derived) PROGRAMMER....
    cout<<skillF.languageCode<<"\n";
    cout<<skillF.id<<"\n";
    skillF.getdata();
    return 0;
}






