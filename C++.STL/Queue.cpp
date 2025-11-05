#include<iostream>
#include<queue>
using namespace std;
int main(){
   /*queue<string> q;
   //In Queue., FIFO concept is applied...First in first out...
   q.push("Aabhash");
   q.push("Singh");
   q.push("Oobroy");

   cout<<"Size before POP--> "<<q.size()<<endl;

   cout<<"First element..: "<<q.front()<<endl;
   
   q.pop();
   cout<<"After pop...\n"<<endl;
   cout<<"First element..: "<<q.front()<<endl;
   cout<<"Last element..: "<<q.back()<<endl;

   cout<<"Size after POP..: "<<q.size()<<endl;*/

   //max heap...
   priority_queue<int> maxi;
   maxi.push(1);
   maxi.push(3);
   maxi.push(2);
   maxi.push(0);

   cout<<"Size-> "<<maxi.size()<<endl;
   int n = maxi.size();
   for(int i=0; i<n; i++){
      cout<<maxi.top()<<" ";
      maxi.pop();
   }
   cout<<"\nKhali hai kya bhai..? "<<maxi.empty();
   cout<<endl<<endl;

   //min heap...
   priority_queue<int,vector<int>, greater<int> > mini;
   mini.push(5);
   mini.push(1);
   mini.push(0);
   mini.push(4);
   mini.push(3);
   
   cout<<"Size-> "<<mini.size()<<endl;
   int m = mini.size();
   for(int i=0; i<m; i++){
      cout<<mini.top()<<" ";
      mini.pop();
   }
   cout<<"\nKhali hai kya bhai..? "<<mini.empty();
   cout<<endl;
   


}