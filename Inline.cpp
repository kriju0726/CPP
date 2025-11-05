//It is used, only when some small calculation had been done in called function...
//if long calculation exist in called func. then we can't use INLINE function, it takes more space...
//In case of Recursion or static variable, it is prohibited...
#include<iostream>
using namespace std;
inline int product(int a,int b){
    return a*b;
}
int main()
{
    int a,b;
    cout<<"Enter the value of a & b...: ";
    cin>>a>>b;
    cout<<"\nThe product of a and b is "<<product(a,b);
    cout<<"\nThe product of a and b is "<<product(a,b);
    cout<<"\nThe product of a and b is "<<product(a,b);
    cout<<"\nThe product of a and b is "<<product(a,b);
    cout<<"\nThe product of a and b is "<<product(a,b);
    cout<<"\nThe product of a and b is "<<product(a,b);
    cout<<"\nThe product of a and b is "<<product(a,b);
    cout<<"\nThe product of a and b is "<<product(a,b);
      return 0;
}