// Find all the non-repeating elements in an array
#include<bits/stdc++.h>
using namespace std;



int main(){
    vector<int> nums = {1,2,-1,1,3,1};
    
    int n = nums.size();
    unordered_map<int, int> freq;

    for(int i=0; i<n; i++){
        freq[nums[i]]++;
    }

    cout << "Non-repeating elements are: ";
    for(int n : nums){
        if(freq[n] == 1){
            cout << n << " ";
            freq[n] = 0; // Print only once
        }
    }
}

