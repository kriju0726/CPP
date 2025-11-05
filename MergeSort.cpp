//Merge sort in C++...
#include<iostream>
using namespace std;

void Merge(int arr[], int lb, int mid, int ub){
    int i=lb, j=mid+1, k=lb;
    int arr2[ub + 1];
    while((i <= mid)  &&  (j <= ub)){
        if(arr[i] <= arr[j]){
            arr2[k] = arr[i];
            i++;
        }
        else{
            arr2[k] = arr[j];
            j++;
        }
        k++;
    }
    if(i > mid){
        while(j <= ub){
            arr2[k] = arr[j];
            j++;
            k++;
        }
    }
    else{
        while(i <= mid){
            arr2[k] = arr[i];
            i++;
            k++;
        }
    }
    for(int k = lb; k <= ub; k++){
        arr[k] = arr2[k];
    }
 }
void mergesort(int arr[], int lb, int ub){
    if(lb < ub){
        int mid = (lb + ub)/2;
        mergesort(arr, lb, mid);
        mergesort(arr, mid+1, ub);
        Merge(arr,lb,mid,ub);
    }
 }
 
int main(){
    int n;
    cout<<"Enter total elements...:";
    cin>>n;
    int arr[n];
    
    cout<<"\nEnter array elements....: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int lb=0, ub=n-1;
    mergesort(arr, lb, ub);
    cout<<"\nSorted array...: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
    
}