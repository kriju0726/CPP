

#include <iostream>
using namespace std;

double newtonSqrt(double n) {
    if (n == 0) return 0;
    double x = n;
    double root;

    while (true) {
        root = 0.5 * (x + (n / x));
        if (abs(root - x) < 1e-6)
            break;
        x = root;
    }
    return root;
}

int main() {
    double n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0)
        cout << "Square root of negative number is not real!" << endl;
    else
        cout << "Square root of " << n << " is " << newtonSqrt(n) << endl;

    return 0;
}

