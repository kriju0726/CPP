#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b = temp;
}

    int main(){
        int x=4,y=5;
        cout<<"The value of x is "<<x<<" and the value of y is "<<y;
        swap(&x,&y);
        cout<<"\nThe value of x is "<<x<<" and the value of y is "<<y;
        return 0;
    }
