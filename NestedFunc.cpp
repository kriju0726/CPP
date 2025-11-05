//Nesting of member function in C++...
//In C++, nesting member functions refers to the practice of defining a member function within the scope of another member function within a class.
#include<bits/stdc++.h>
using namespace std;

class outer{
    private:
         int data;
    public:
         void setdata(int value){
            data = value;
         }

         void processdata(){
            auto displaydata = [this](){
                cout<<"DATA....: "<<data;
            };

            displaydata();
         }
};

int main(){
    outer obj;
    obj.setdata(25);
    obj.processdata();
}