#include<iostream>
#include<list>

using namespace std;
int main(){
    list<int> l;

    list<int> n(5,100);
    cout<<"Printing n"<<endl;
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Size of list...: "<<n.size()<<endl;

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    //cout<<"Print First Index Element-> "<<l.at(0)<<endl;
    //It doesn't support jumping at Random element by using(l.at.(0))...
    cout<<"Front "<<l.front()<<endl;
    cout<<"Back "<<l.back()<<endl;
    cout<<"\nSize of list...: "<<l.size()<<endl;
    l.erase(l.begin());
    cout<<"After erase"<<endl;

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<"\nSize of list...: "<<l.size()<<endl;
}