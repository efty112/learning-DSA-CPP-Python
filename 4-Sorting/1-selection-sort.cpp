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

int main(){
    int n;
    cout << "Size of the Array: ";
    cin >> n;

    int arr[n];
    cout << "Input Array Elements: ";
    for (int i=0; i<n; i++) cin >> arr[i];

    selection_sort(arr, n);

    cout << "Sorted Array: ";
    for (int j = 0; j < n; j++){
        cout << arr[j] << " ";
    }
    
    return 0;
}