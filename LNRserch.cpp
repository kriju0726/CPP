// PROGRAM OF LINEAR search...
#include<iostream>
using namespace std;
int linearSearch(int arr[],int size, int key){
    int i;
    for(i=0; i<size; i++){
        if(arr[i] == key){
            return i;
        }
        
    }
    }

int main()
{
    int key;
    int num[8] = {12,15,10,2,45,8,29,80};
   
   // cout<<"Enter your key...: ";
    //cin>>key;
  
    int Index = linearSearch(num, 8, 45);
    cout<<"The index of 45 in array is..: "<<Index;
      return 0;
}