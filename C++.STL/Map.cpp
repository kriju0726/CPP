#include<iostream>
#include<map>

using namespace std;
int main(){
    map<int,string> m;
    //Data is stored in KEY value...
    m[1] = "Aabhash";
    m[13] = "Oobroy";
    m[2] = "Singh";
    m.insert({5,"Shahi"});

    cout<<"Before erase...\n";
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding -13...: "<<m.count(-13)<<endl;

    m.erase(5);
    cout<<"After erase...\n";
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl<<endl;

auto it = m.find(1);
for(auto i=it; i!=m.end(); i++){
cout<<(*i).first<<endl;
}
}