//Default Arguments...
#include<iostream>
using namespace std;
float money_received(int current_money,float factor=1.04)
{
    return current_money*factor;
}
int main(){
    int a,b;
    int money = 1000;
    cout<<"If you have "<<money<<" Rs. in your hand, you will receive "<<money_received(money)<<" Rs. after one year";//in this, default factor is used..i.e.,1.04
                                                                      //<<money_received(money,1.1)//but,in this new factor(1.1) mentioned
    return 0;
}