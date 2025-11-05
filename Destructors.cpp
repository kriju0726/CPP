// Destructor in C++...
// It destruct the memory, that is alloted previously by dynamic initialisation or captured by CONSTRUCTORS...
// It never takes an argument, nor does it return any value...
#include<stdio.h>
using namespace std;
int count=0;                     //Global variable
class num{
    public: 
        num(){
            count++;
            cout<<"This is the time, when constructor is called for object number "<<count;
        }
        ~num(){
            cout<<"This is the time, When my Destructor is called for object number "<<count;
            count--;
        }
};
int main(){
       cout<<"We are inside our main function..\n";
       cout<<"Creating first object n1";

       num n1;
       {
        cout<<"Entering this block";
        cout<<"Creating two more objects";
        num n2,n3;
        cout<<"Exiting this block";
       }
       cout<<"Back to main";
       return 0;
}