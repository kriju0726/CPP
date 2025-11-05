//Ambiguity Resolution in Inheritance...
//When one class is derived for two or more base classes then ther are chances
//--that the base classes have functions with the same name.
//So, it will confuse derived class to choose from similar name functions...
#include<iostream>
using namespace std;
class Base1{
    public:
        void greet(){
            cout<<"How are you ? "<<endl;
        }
};
class Base2{
    public:
        void greet(){
            cout<<"Kaise ho ?"<<endl;
        }
};
class Derived : public Base1, public Base2{
   // int a;
    public:
        void greet(){
            Base1 :: greet();
        }
};
class B{
    public:
        void say(){
            cout<<"Hello World !!!"<<endl;
        }
};
class D : public B{
   // int a;
    public:
    void say(){
        cout<<"Hello my Beautiful people..!!!"<<endl;
    }
};
int main(){
    //Ambiguity 1
    Base1 base1obj;
    Base2 base2obj;        base1obj.greet();
                           base2obj.greet();
    Derived d;
    d.greet();

    //Ambiguity 2
    B b;
    b.say();          D m;
                      m.say();
    return 0;
}
