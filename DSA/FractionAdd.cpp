#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,d1, n2, d2;
    cout<<"Enter n1 & d1...: ";
    cin>>n1>>d1;
    cout<<"Enter n2 & d2...: ";
    cin>>n2>>d2;
    
    int num = n1 * d2 + n2 * d1;
    int deno = d1 * d2;
    
    int g = __gcd(num, deno);
    
    num = num / g;
    deno = deno / g;
    
    cout<<num << "/" <<deno;
    
    return 0;
}