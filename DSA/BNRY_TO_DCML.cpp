#include<bits/stdc++.h>
using namespace std;

int toDecimal(int n){
    int power = 0, sum=0;
    
    while(n != 0){
        int last = n % 10;
        int addn = pow(2, power) * last;
        sum += addn;
        power++;
         n = n/10;
    }
    return sum;
}

int main(){
    int n = 100;
    
    cout<<"The Decimal value of "<<n<<" is "<<toDecimal(n);
    
    return 0;
}