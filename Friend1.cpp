//Friend classes...
#include<iostream>
using namespace std;
class complex;                                                                 // 1st class DECLARATION...
class calculator{                                                              // 2nd class (DECLARATION + DEFINITION)...
  public:
       int add(int a, int b){
        return (a+b);
       }
       int sumrealcomplex(complex,complex);                                    //Function Declaration...
};
class complex{                                                                 // 2nd class DEFINITION...
  int a,b;
  friend int calculator :: sumrealcomplex(complex, complex);
  public:
         void setnumber(int n1, int n2){
          a=n1;
          b=n2;
  }
  void printnumber(){
    cout<<"Your number is "<<a<<" + "<<b<<"i";
  }
};
int calculator :: sumrealcomplex(complex p, complex q){
  return(p.a + q.a);
}
int main(){
  complex p,q;
  p.setnumber(1,4);
  q.setnumber(5,7);
  calculator calc;
  int res = calc.sumrealcomplex(p,q);
  cout<<"The sum of real part of p and q is "<<res;
  return 0;
}