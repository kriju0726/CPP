//CONSTRUCTORS...
/*#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
       complex(void);                                                //constructor Declaration with no Parameters...
       void printnumber(){
        cout<<"\nYour number is "<<a<<" + "<<b<<"i";
       }
};
complex :: complex(void){                                           //Definition of constructor declare function...
    a=10;
    b=20;
}
int main(){
    complex c;
    c.printnumber();
    return 0;
}*/
//Constructor is a special member function with the same name as of the class...
//It is used to initialize the object of it's class...
//It is automatically invoked, Whenever the object is created...
//It should be declared in the public section in the class...
//They cannot return values and do not have return types...
//It can have default arguments...
//We cannot refer their address...



//Parameterized and Default Constructors in C++...
#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
        complex(int,int);                                         //Constructor declaration with two integer type Parameters...
    void printnumber(){
          cout<<"Your number is "<<a<<" + "<<b<<"i";
    }
};
complex :: complex(int x, int y){                                 //This is a Parameterized Constructor as it takes two parameters...
    a=x;
    b=y;
    //cout<<"\nHello!!\n";
}
int main()
{
    complex a(4,6);                               //Implict Call...
    a.printnumber();   
   // complex b = complex(5,7);                   //Explict call...
   // b.printnumber();
      return 0;
}
