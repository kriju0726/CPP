#include<iostream>
#include<vector>
//Vector is a Dynamic array...
using namespace std;
int main(){
     vector<int> v;

     vector<int> a(5,1);
     cout<<"print a"<<endl;
     for(int i:a){
        cout<<i<<" ";
     }
     //vector<int> a(5,1);
     vector<int> last(a);
     cout<<"\nprint last"<<endl;
     for(int i:last){
        cout<<i<<" ";
     }

 cout<<"\nCapacity-> "<<v.capacity()<<endl;

 v.push_back(1);
 cout<<"Capacity-> "<<v.capacity()<<endl;
 cout<<"Size-> "<<v.size()<<endl;

 v.push_back(2);
 cout<<"Capacity-> "<<v.capacity()<<endl;
 cout<<"Size-> "<<v.size()<<endl;

 v.push_back(3);
 cout<<"Capacity-> "<<v.capacity()<<endl;
 cout<<"Size-> "<<v.size()<<endl;

v.push_back(4);
 cout<<"Capacity-> "<<v.capacity()<<endl;
 cout<<"Size-> "<<v.size()<<endl;

cout<<"Element at 0th index "<<v.at(0)<<endl;
cout<<"Element at 1st index "<<v.at(1)<<endl;
 cout<<"Element at 2nd index "<<v.at(2)<<endl;
 cout<<"Element at 3rd index "<<v.at(3)<<endl;

cout<<"front "<<v.front()<<endl;
cout<<"back "<<v.back()<<endl;

cout<<"before pop"<<endl;
for(int i:v){
    cout<<i<<" ";
}cout<<endl;

v.pop_back();
//pop_back is uaed for remove an element from back side in an array...
cout<<"after pop"<<endl;
for(int i:v){
    cout<<i<<" ";
}cout<<endl;

cout<<"before clear size "<<v.size()<<endl;
v.clear();   //It is used to clear the size of array...
cout<<"after clear size "<<v.size()<<endl;



 
}