#include <iostream>
using namespace std;

void swapData(int& val1, int& val2){
    int temp;
    temp = val1;
    val1 = val2;
    val2 = temp;
}

void selection_sort(int arr[], int arrLen){
    for (int i=0; i<=arrLen-2; i++){
        int min = i;
        for(int j=i+1; j<=arrLen-1; j++){
            if(arr[j] < arr[min]) min = j;
        }
        swapData(arr[i], arr[min]);
    }
}

void bubble_sort(int arr[], int arrLen){
    for (int i=arrLen-1; i>=1; i--){
        bool didSwap = false;
        for (int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                swapData(arr[j], arr[j+1]);
                didSwap = true;
            }
        }
        if(!didSwap){
            break;
        }
    }
}

void insertion_sort(int arr[], int arrLen){
    for(int i=1; i<arrLen; i++){
        for(int j=i; j>0 && arr[j-1] > arr[j]; j--){
            swapData(arr[j-1], arr[j]);
        }
    }
}

int main(){
    int n;
    cout << "Size of the Array: ";
    cin >> n;

    int arr[n];
    cout << "Input Array Elements: ";
    for (int i=0; i<n; i++) cin >> arr[i];

    // selection_sort(arr, n);
    // cout << "Selection Sorted Array: ";
    // for (int j = 0; j < n; j++){
    //     cout << arr[j] << " ";
    // }

    // bubble_sort(arr, n);
    // cout << "Bubble Sorted Array: ";
    // for (int j = 0; j < n; j++){
    //     cout << arr[j] << " ";
    // }

    insertion_sort(arr, n);
    cout << "Insertion Sorted Array: ";
    for (int j = 0; j < n; j++){
        cout << arr[j] << " ";
    }
    
    return 0;
}