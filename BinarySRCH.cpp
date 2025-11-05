// PROGRAMM OF BINARY SEARCH....
#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
     int start=0;
     int end=(size-1);
     int mid = (start+end)/2;

     while(start <= end){
        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid+1;
        }
        else
            end = mid-1;

            mid = (start + end)/2;
     }
     return -1;
}
int main()
{
    int even[6] = {2,4,6,8,10,12};
    int odd[8] = {1,3,5,7,9,11,13,15};
    int evenIndex = binarySearch(even, 6, 18);
    cout<<"Index of 18 is "<<evenIndex;
    int oddIndex = binarySearch(odd, 8, 11);
    cout<<"\nIndex of 11 is "<<oddIndex;
      return 0;
}