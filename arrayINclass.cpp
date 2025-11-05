//Using arrays in Classes...
#include<bits/stdc++.h>
using namespace std;

class shop{
    int itemid[10];
    int itemprice[10];
    int counter;

 public:
    void setprice();
    void display();
    void intcounter(){
        counter = 0;
    }
};

void shop :: setprice(){
    cout<<"\nEnter item ID. of item["<<counter+1<<"]...: ";
    cin>>itemid[counter];
    cout<<"\nEnter price of item["<<counter+1<<"]...: ";
    cin>>itemprice[counter];
    counter++;
}

void shop :: display(){
    for(int i=0; i<counter; i++){
        cout<<"\nThe price of item["<<itemid[i]<<"] is "<<itemprice[i];
    }
}

int main(){
    shop dukan;
    dukan.intcounter();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.display();
    return 0;

}