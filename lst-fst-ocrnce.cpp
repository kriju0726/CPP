//Programm of binary search....
#include<iostream>
using namespace std;
int firstocc(int arr[], int size, int key){
    int s=0, e=size-1, mid=(s+e)/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e=mid-1;
        }
        else if(key > arr[mid]){
            s=mid+1;
        }
        else if(key < arr[mid]){
            e=mid-1;
        }
        mid = (s+e)/2;
    }
    return ans;
}
int lastocc(int arr[], int size, int key){
    int s=0, e=size-1, mid=(s+e)/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s=mid+1;
        }
        else if(key > arr[mid]){
            s=mid+1;
        }
        else if(key < arr[mid]){
            e=mid-1;
        }
        mid = (s+e)/2;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter n...: ";
    cin>>n;
    int natur[n];
    cout<<"Enter array elements...: ";
    for(int i=0; i<n; i++){
        cin>>natur[i];
    }
    cout<<"The first occurrence of 2 at position is "<<(firstocc(natur, n, 2) + 1);   
    cout<<"\nThe last occurrence of 2 at position is "<<(lastocc(natur, n, 2) + 1);
    cout<<"\nThe total no. of occurrence of 2 is "<<(lastocc(natur, n, 2) - firstocc(natur, n, 2) +1);
      return 0;
}