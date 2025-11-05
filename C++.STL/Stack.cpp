#include<iostream>
#include<stack>

using namespace std;
int main(){
   stack<string> s;
    //In stack., LIFO concept is applied...last in first out...
    s.push("aabhash");
    s.push("singh");
    s.push("Oobroy");

    cout<<"Top element-> "<<s.top()<<endl;

    s.pop();
    cout<<"After POP..."<<endl;
    cout<<"Top element-> "<<s.top()<<endl;
    cout<<"Size of stack-> "<<s.size()<<endl;
    cout<<"Empty or not..: "<<s.empty()<<endl;

   /*stack<int> s;
    //In stack., LIFO concept is applied...last in first out...
    s.push(3);
    s.push(2);
    s.push(1);

    cout<<"Top element-> "<<s.top()<<endl;

    s.pop();
    //Not support pop_front or pop_back;
    cout<<"After POP..."<<endl;
    cout<<"Top element-> "<<s.top()<<endl;
    cout<<"Size of stack-> "<<s.size()<<endl;
    cout<<"Empty or not..: "<<s.empty()<<endl;*/

}