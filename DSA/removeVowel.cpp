#include <bits/stdc++.h>
using namespace std;

int main() {
    string vowel = "aeiou";
    string input = "I am very happy today";
    string result = "";

    for (char c : input) {
        if (find(vowel.begin(), vowel.end(), tolower(c)) == vowel.end()) {
            result += c;  // add only non-vowels
        }
    }

    cout << "After removing vowels: " << result;
    return 0;
}
