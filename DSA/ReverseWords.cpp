#include<bits/stdc++.h>
using namespace std;

int main(){
    string ip = "this is an program";
  
    stack<string> store;
    int i = 0, first = 0;
    
    while(i < ip.size()){
        if(ip[i] == ' '){
            store.push(ip.substr(first, i-first));
            first = i+1;
        }
        i++;
    }
    
    store.push(ip.substr(first, i-first));
    
    while(!store.empty()){
        cout<<store.top();
        store.pop();
        if(!store.empty()) cout<<" ";
    }
   
    
    return 0;
}


