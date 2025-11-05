//Single Inheritance Deep Dive : Examples + Code...
/*#include<iostream>
using namespace std;
class base{
    int data1;                                               //It is Private by Default.., and it is not Inheritable...
    public:
       int data2;
       void setdata(){
        data1=10;
        data2 = 20;
       }
       int getdata1(){
        return data1;
       }
       int getdata2(){
        return data2;
       }
};
class derived : public base{                               //class is being publically derived
      int data3;
      public: 
        void process(){
            data3 = data2 * getdata1();
        }
        void display(){
     cout<<"Value of data1 is "<<getdata1();
    cout<<".\nvalue of data2 is "<<data2;
    cout<<".\nValue of data3 is "<<data3<<".";
        }
};
int main(){
    derived der;
    der.setdata();
    der.process();
    der.display();
    return 0;
}*/


//Protected Access Modifiers in C++...
/*#include<iostream>>
using namespace std;
class base{
    protected:
      int x;
    private:
      int y;
};

/*Note:                                         PUBLIC derivation      PRIVATE derivation     PROTECTED derivation
                     1. Private members-----      Not inherited          Not inherited          Not inherited
                     2. Protected members---      Protected              Private                Protected
                     3. Public members------      Public                 Private                Protected
*/
/*class derived : protected base{

};
int main(){
    base b;
    derived d;
    //cout<<d.x;                                //Will not work since x is protected in both base as well as derived class
}*/


//Multi-level inheritance Deep-Dive with code Explain in C++...
/*#include<iostream>
using namespace std;
class student{
    protected:
       int roll_number;
       public:
      void set_roll_number(int r){
         roll_number = r;
      }
      void get_roll_number(void){
        cout<<"The roll number is "<<roll_number<<endl;
      }
};
class Exam : public student{
    protected:
       float maths;
       float physics;
    public:
       void set_marks(float m1,float m2){
            maths = m1;
            physics = m2;
       }
       void get_marks(void){
        cout<<"The marks obtained in maths are : "<<maths<<endl;
        cout<<"The marks obtained in physics are : "<<physics<<endl;
       }
};
class Result : public Exam{
    float percentage;
    public:
      void display_results()
      {
        get_roll_number();
        get_marks();
        cout<<"Your result is "<<(maths + physics)/2<<"%"<<endl;
      }
};
int main(){                                            //Notes:-
    Result harry;                                      //---> If we are inheriting B from A and C from B: [A--->B--->C]
    harry.set_roll_number(4);                          //1. A is the base class for B and B is the base class for C.
    harry.set_marks(94.0,90.0);                        //2. A--->B--->C is called Inheritance Path.
    harry.display_results();
}*/


//Multiple inheritance Deep Dive with code Example in C++
#include<iostream>
using namespace std;                                               
class Base1{                                                       
  protected:
       int base1int;
  public:
       void set_base1int(int a){
          base1int = a;
        }
};
class Base2{
  protected:
       int base2int;
  public:
       void set_base2int(int a){
        base2int = a;
       }
};
class Base3{
  protected:
       int base3int;
  public:
       void set_base3int(int a){
        base3int = a;
       }
};
class Derived : public Base1, public Base2, public Base3                     //Syntax for inheriting in multiple inheritance...
{                                                                            //class Derived : visibility-mode base1, visibility-mode base2
  public:                                                                    // {
      void show(){                                                           //     class body of class "Derived"
        cout<<"The value of Base1 is "<<base1int<<endl;                      //  };
        cout<<"The value of Base2 is "<<base2int<<endl;
        cout<<"The value of Base2 is "<<base3int<<endl;
        cout<<"The product of those values is "<<base1int * base2int * base3int<<endl;
      }
}; 
/*The inherited derived class will look something like this...:
Data members:  
                base1int ---> protected
                base2int ---> protected
                base3int ---> protected
Member functions:
                set_base1int() ---> public
                set_base2int() ---> public
                set_base3int() ---> public
                set_show() ---> public
*/
int main(){
  Derived harry;
  harry.set_base1int(25);
  harry.set_base2int(5);
  harry.set_base3int(2);
  harry.show();
  return 0;
}



