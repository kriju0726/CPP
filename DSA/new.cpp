// Number in Words...

#include<bits/stdc++.h>
using namespace std;

void convertIntoWords(string s){
    string singledigit[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string twodigits[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "ninteen", "twelve"};
    string tensmultiple[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninty"};
    string tenspower[] = {"hundreds", "thousands"};
    
    if(s.length() == 0){
        return;
    }else if(s.length() == 1){
        singledigit[s[0] - '0'];
        return;
    }
    
    int len = s.length();
    for(int i=0; i<s.length(); i++){
        if(len > 2){
            if(s[i] - '0' != 0){
                cout<<singledigit[s[i] - '0'] << " ";
                cout<< tenspower[len - 3]<<" ";
            }
            len--;
        }
        else{
            if(s[i] - '0' == 1){
                cout<<twodigits[s[i + 1] - '0']<<" ";
                return;
            }
            else if(s[i] - '0' != 0){
                cout<<tensmultiple[s[i] - '0'] << " ";
                if(s[i+1] - '0' != 0){
                    cout<< singledigit[s[i+1] - '0'] <<" ";
                }
                return;
            }
        }
    }
}


int main(){
    string num;
    cout<<"Enter n....: ";
    cin>>num;

    convertIntoWords(num);
}









/*
#include <bits/stdc++.h>
using namespace std;

string singledigit[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string twodigits[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
                      "sixteen", "seventeen", "eighteen", "nineteen"};
string tensmultiple[] = {"", "", "twenty", "thirty", "forty", "fifty",
                         "sixty", "seventy", "eighty", "ninety"};
string powers[] = {"", "thousand", "lakh", "crore"};

void twoDigitToWords(int num) {
    if (num == 0)
        return;
    if (num < 10)
        cout << singledigit[num] << " ";
    else if (num < 20)
        cout << twodigits[num - 10] << " ";
    else {
        cout << tensmultiple[num / 10] << " ";
        if (num % 10)
            cout << singledigit[num % 10] << " ";
    }
}

void convertToWords(long n) {
    if (n == 0) {
        cout << "zero";
        return;
    }

    vector<int> parts;

    // Break number into crore, lakh, thousand, hundred, last two digits
    parts.push_back(n % 100);      // last two digits
    n /= 100;
    parts.push_back(n % 10);       // hundreds
    n /= 10;
    parts.push_back(n % 100);      // thousands
    n /= 100;
    parts.push_back(n % 100);      // lakhs
    n /= 100;
    parts.push_back(n);            // crores

    reverse(parts.begin(), parts.end());

    string labels[] = {"crore", "lakh", "thousand", "hundred", ""};

    for (int i = 0; i < 5; i++) {
        if (parts[i] != 0) {
            if (i == 3) { // hundreds
                cout << singledigit[parts[i]] << " hundred ";
                if (parts[i + 1] != 0)
                    cout << "and ";
            } else if (i == 4) { // last two digits
                twoDigitToWords(parts[i]);
            } else {
                twoDigitToWords(parts[i]);
                cout << labels[i] << " ";
            }
        }
    }
}

int main() {
    long n;
    cout << "Enter number: ";
    cin >> n;
    convertToWords(n);
    cout << endl;
    return 0;
}

*/


