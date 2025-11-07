#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> k;

    // Linear Search
    for(int i = 0; i < n; i++){
        if(arr[i] == k){
            cout << "Element found at index: " << i << endl;
            return 0; // end the program once found
        }
    }

    cout << "Element not found in the array." << endl;
    return 0;
}
