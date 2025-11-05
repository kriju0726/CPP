#include<iostream>
using namespace std;
int main()
{
  int num, num1, i, gcd, lcm, big;
  cout<<"Enter two no...: ";
  cin>>num>>num1;

  if(num > num1)
    big = num;
  else
    big = num1;
  
  for(i=1; i<=big/2; i++){
    if(num%i ==0 && num1%i ==0){
      gcd = i;
      //cout<<gcd<<" ";
    }
  }
  cout<<"LCM is "<<(num * num1)/gcd;
  cout<<"\nHCF is "<<gcd;
      return 0;
}