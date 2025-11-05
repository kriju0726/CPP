//In C++, a static data member is a member of a class that is shared among all instances of that class.
// It is not associated with any particular object of the class but rather with the class itself.
#include<bits/stdc++.h>
using namespace std;

class employee{
    int id;
    static int count;

    public:
         void setdata(){
            cout<<"\nEnter the ID...: ";
            cin>>id;
            count++;
         }
         void getdata(){
            cout<<"The id of this employee is "<<id<<", and this is employee number "<<count;
         }
};

int employee::count=100;

int main(){
    employee ram, sham, lalu;
    
    ram.setdata();
    ram.getdata();

    sham.setdata();
    sham.getdata();

    lalu.setdata();
    lalu.getdata();

}