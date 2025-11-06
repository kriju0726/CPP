//Find GCD of two numbers..
/*#include<bits/stdc++.h>
using namespace std;

stack<int> findFact(int n){
    stack<int> s;
    
    for(int i=1; i<=n/2; i++){
        if(n % i == 0) s.push(i);
    }
    s.push(n);
    
    return s;
}

int main(){
    int n1, n2;
    cout<<"Enter first & second no..: ";
    cin>>n1>>n2;
    
    stack<int> s1 = findFact(n1);
    stack<int> s2 = findFact(n2);
    
    
        while(s1.top() != s2.top()){
            if(s1.top() > s2.top()) s1.pop();
            else s2.pop();
        }
    
    
    cout<<"GCD is "<<s1.top();
    
    return 0;
}*/



#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    while(b != 0){
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main(){
    int n1, n2;
    cout<<"Enter first & second no..: ";
    cin >> n1 >> n2;
    cout << "GCD is " << ((n1 > n2) ? gcd(n1, n2) : gcd(n2, n1));

    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}
int main()
{
	int a = 4, b = 8;
	int g = gcd(a, b);
	int lcm = (a * b) / g;
	cout <<"The LCM of the two given numbers is "<<lcm;
}
*/

