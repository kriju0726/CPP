// Find all prime factors of a given number
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n < 2) return 0;
    bool check = true;
    
    for(int i=2; i*i <= n; i++){
        if(n % i == 0){
            check = false;
            break;
        }
    }
    
    return check;;
}

int main(){
    int n;
    cout<<"Enter a no. to find it's Prime Factor..: ";
    cin>>n;
    
    if(isPrime(n)){
        cout<<"It has no any primfe Factors., B/E "<<n<<" is prime no.";
    }else{
        for(int i=2; i<n; i++){
        if(n % i == 0){
            if(isPrime(i)){
                cout<<i<<" ";
            }
        }
    }
    }
    
    return 0;
}


