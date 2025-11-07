#include <iostream>
using namespace std;

int main() {
    int n, original, reversed = 0, remainder;

    cout << "Enter a number: ";
    cin >> n;

    original = n; // store the original number

    // Reverse the number
    while(n > 0){
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }

    // Check palindrome
    if(original == reversed){
        cout << "Palindrome Number" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}
