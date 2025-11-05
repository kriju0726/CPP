#include<iostream>
//UNION used for better memory management...
using namespace std;
union money
{
  int rice;
  char car;
  float pounds;
};
int main()
{
   union money m1;
   m1.rice = 34;
   m1.car = 'B';
   cout<<m1.car;
      return 0;
}