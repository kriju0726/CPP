#include <bits/stdc++.h>
using namespace std;

string decimalToBinary(int n) {
    if (n == 0) return "0";

    string binary = "";
    while (n > 0) {
        binary = to_string(n % 2) + binary;  // store remainder (0 or 1)
        n /= 2;
    }
    return binary;
}

int main() {
    int decimal = 11;
    cout << "Decimal: " << decimal << endl;
    cout << "Binary: " << decimalToBinary(decimal);
    return 0;
}
