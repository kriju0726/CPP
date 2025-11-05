//Using Arrays in class...
#include<iostream>
using namespace std;

class shop{
    int itemId[100];
    int itemprice[100];
    int counter;
    public:
    void intcounter(void) {counter = 0;}
    void setprice(void);
    void displayprice(void);
};

void shop :: setprice(void){
    cout<<"Enter ID of your item no..: "<<counter+1;
    cin>>itemId[counter];
    cout<<"\nEnter price of your item..: ";
    cin>>itemprice[counter];
    counter++;
}
void shop :: displayprice(void){
    for(int i=0; i<counter; i++)
    {
        cout<<"\nThe price of item with ID "<<itemId[i]<<" is "<<itemprice[i];
    }
}
int main(){
    shop dukan;
    dukan.intcounter();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.displayprice();
    return 0;
}