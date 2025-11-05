#include<iostream>
using namespace std;
struct employee
{
   int eid;
   char fav;
   float salary;
};
int main()
{
   struct employee harry;
   harry.eid = 5;
   harry.fav = 'g';
   harry.salary = 250000;

   cout<<"The id is "<<harry.eid;
   cout<<"\nThe fav is "<<harry.fav;
   cout<<"\nThe salary is "<<harry.salary;
   
      return 0;
}