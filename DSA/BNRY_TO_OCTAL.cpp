// Binary to Octal...

// Step1 : Binary to Decimal...
// Step2 : Decimal to Octal...


#include<bits/stdc++.h>
using namespace std;

int bnryToDcml(string s){
    int sum = 0, power = 0;
    
    for(int i=s.size()-1; i>=0; i--){
        if(s[i] == '1'){
            sum = sum + pow(2, power);
        }
        power++;
    }
    return sum;
}

void dcmlToOctal(int n){
    string s = "";
    
    while(n > 7){
        s = to_string(n % 8) + s;
        n = n / 8;
    }
    s = to_string(n) + s;
    
    cout<<s;
    return;
}

int main(){
    string s = "1011";
    
    int dcml = bnryToDcml(s);
    cout<<dcml<<"\n";
    dcmlToOctal(dcml);
    
    return 0;
}