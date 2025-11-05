//stack
#include<bits/stdc++.h>
using namespace std;

class Stack{
    private:
    vector<int>elements;

    public:
         void push(int value){
            elements.push_back(value);
         }

         void pop(){
            if(!elements.empty()){
                elements.pop_back();
            }
            else{
                cout<<"stack is empty";
            }
         }

         int top() const{
            if(!elements.empty()){
                elements.back();
            }
            else{
                cout<<"\nstack is empty";
                return -1;
            }
         }

         bool isEmpty() const{
            return elements.empty();
         }

         void display() const{
            if(!elements.empty()){
                for( int elm : elements){
                    cout<<elm<<" ";
                }
            }
            else{
                cout<<"\nstack is empty";
            }
         }
};

int main(){
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.display();
    cout<<"\n";
    stack.pop();
    stack.top();
    stack.display();


}