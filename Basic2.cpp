#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    char ab,cd;
    cout<<"Enter the value num1...: ";     // '<<' is called INSERTION operator.
    cin>>num1;                             // '>>' is called EXTRACTION operator.
   // cout<<".\n";
    cout<<"Enter tne value num2...: ";
    cin>>num2;
    cout<<"Enter char1 and char2...: ";
    cin>>ab>>cd;

    cout<<"The value of num1 and num2...: "<<num1<<" "<<num2;
    cout<<".\nThe SUM is "<<(num1 + num2);
    cout<<".\nThe mul. is "<<(num1*num2)<<".\n";
    cout<<"The value of char1 is "<<ab<<".\n";
    cout<<"The value of char2 is "<<cd<<".\n";
    cout<<"The value of char1 and char2 is "<<ab<<" "<<cd;
    return 0;
}