/*#include<iostream>
using namespace std;

int sum(int a,int b){
    int c=a+b;
    return c;
}
int main(){
    int num1,num2;
    cout<<"Enter 1st no..: ";
    cin>>num1;
    cout<<"Enter 2nd no..:";
    cin>>num2;
    cout<<"\nThe sum is "<<sum(num1,num2);
    return 0;
}*/

//FUNCTION prototype...
#include<iostream>
using namespace std;

int sum(int a,int b);
void g(void);

int main(){
    int num1,num2;
    cout<<"Enter 1st no..: ";
    cin>>num1;
    cout<<"Enter 2nd no..:";
    cin>>num2;
    cout<<"\nThe sum is "<<sum(num1,num2);
    g();

    return 0;
}
int sum(int a,int b){
    int c=a+b;
    return c;
}
 void g(){
    cout<<"\nGood Morning";
}