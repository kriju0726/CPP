 //Array of objects...
 #include<bits/stdc++.h>
 using namespace std;

 class employee{
   
    private:
        int id, salary;
        static int count;

    public:
        void setdata(){
            count++;
            cout<<"\nEnter id of employee["<<count<<"]...: ";
            cin>>id;
            cout<<"Enter salary of employee...: ";
            cin>>salary;
            
        }
        void getdata(){
            cout<<"The salary of employee["<<id<<"]....: "<<salary;
            cout<<"\n";
        }
 };

 int employee::count=0;

 int main(){
    employee TP[4];
    for(int i=0; i<4; i++){
        TP[i].setdata();
        TP[i].getdata();
    }
 }