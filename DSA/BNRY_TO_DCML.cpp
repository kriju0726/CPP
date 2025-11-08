#include <bits/stdc++.h>
using namespace std;

int toDecimal(string binary) {
    int sum = 0;
    int power = 0;

    // traverse from right to left
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1')
            sum += pow(2, power);
        else if (binary[i] != '0') {
            cout << "Invalid binary digit found!";
            return -1;
        }
        power++;
    }
    return sum;
}

int main() {
    string binary = "010111";
    cout << "The Decimal value of " << binary << " is " << toDecimal(binary);
    return 0;
}
