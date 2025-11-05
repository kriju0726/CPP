//Recursive function....     1.factorial...    2.Fibonacci series...----->> 1 1 2 3 5 8 13 21 34......
#include<iostream>
using namespace std;
/*int factorial(int n){
    if(n<=1)
    {return 1;}
    return n*factorial(n-1);
}
    int main() {
        int a;
        cout<<"Enter a..: ";
        cin>>a;
        cout<<"The factorial value of "<<a<<" is "<<factorial(a);
        return 0;
    }*/
int fibo(int n){
    if(n<2){
        return n;
    }
    return fibo(n-2)+fibo(n-1);
}


int main()
{
    int a;
    cout<<"Enter a no...: ";
    cin>>a;
    cout<<"The term is fibonacci sequence at posn. "<<a<<" is "<<fibo(a);

    return 0; 
}

//OVERLOADING function is not a big deal....just go through Definition....and some Example


   

