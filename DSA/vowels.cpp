#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "India won the cricket match";
    string vowel = "aeiou";
    int vowels = 0, consonants = 0, spaces=0;
    
    for(char c : str){
        if(c == ' ') spaces++;
        else if(find(vowel.begin(), vowel.end(), tolower(c)) != vowel.end()) vowels++;
        else consonants++;
    }
    
    cout<<"Spaces..: "<<spaces;
    cout<<"\nVowels..: "<<vowels;
    cout<<"\nConsonants..: "<<consonants;
    
    return 0;
}