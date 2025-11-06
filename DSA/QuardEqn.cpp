#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter a, b and c...: ";
    cin >> a >> b >> c;

    double d = pow(b, 2) - 4 * a * c;

    if (d == 0) {
        cout << "Both roots are same: " << (-b) / (2 * a);
    } 
    else if (d > 0) {
        cout << "\nBoth roots are real and different.\n";
        double rt = sqrt(d);
        cout << "Root 1: " << (-b + rt) / (2 * a) << endl;
        cout << "Root 2: " << (-b - rt) / (2 * a) << endl;
    } 
    else {
        cout << "\nRoots are complex and different.\n";
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-d) / (2 * a);
        cout << "Root 1: " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2: " << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}
