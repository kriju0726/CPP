// Octal To Binary...

// Step1 : Octal to Decimal...
// Step2 : Decimal to Binary...
#include<bits/stdc++.h>
using namespace std;

int octalToDcml(string s){
    int sum = 0, power=0;
    
    for(int i = s.size()-1; i>=0; i--){
        if(s[i] > '0'){
            sum = sum + pow(8, power)*(s[i] - '0');
        }
        power++;
    }
    return sum;
}

string dcmlToBnry(int n) {
    if (n == 0) return "0";

    string binary = "";
    while (n > 0) {
        binary = to_string(n % 2) + binary;  // store remainder (0 or 1)
        n /= 2;
    }
    return binary;
}


int main(){
    int octal = 376;
    string s = to_string(octal);
    
    
    int dcml = octalToDcml(s);
    cout<<"Octal....: "<<octal<<"\n";
    cout<<"Decimal..: "<<dcml<<"\nBinary..: "<<dcmlToBnry(dcml);
    
    
    return 0;
}