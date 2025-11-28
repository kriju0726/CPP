#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n <= 1) return s;

        int bestL = 0, bestR = 0; // inclusive indices of best palindrome

        auto expand = [&](int left, int right) {
            while (left >= 0 && right < n && s[left] == s[right]) {
                --left;
                ++right;
            }
            // after loop, palindrome is (left+1 .. right-1)
            int L = left + 1;
            int R = right - 1;
            if (R - L > bestR - bestL) {
                bestL = L;
                bestR = R;
            }
        };

        for (int i = 0; i < n; ++i) {
            // odd length palindromes
            expand(i, i);
            // even length palindromes
            expand(i, i + 1);
        }

        return s.substr(bestL, bestR - bestL + 1);
    }
};

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    Solution obj;
    string result = obj.longestPalindrome(s);

    cout << "Longest Palindromic Substring: " << result << endl;

    return 0;
}
