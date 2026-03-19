#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    int temp[1000];
    int left=low;
    int right=mid+1;
    int k=0;

    while(left<=mid || right<=high){
        if(left>mid){
            temp[k] = arr[right];
            right++;
            k++;
        }
        else if(right>high){
            temp[k] = arr[left];
            left++;
            k++;
        }
        else if(arr[left] < arr[right]){
            temp[k] = arr[left];
            left++;
            k++;
        }
        else {
            temp[k] = arr[right];
            right++;
            k++;
        }
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i-low];
    }

}

void mergeSort(int arr[], int low, int high){
    if(low>=high) return;

    int mid = (int)((low+high)/2);

    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main(){
    int n;
    cout << "Enter the Input Amount: ";
    cin >> n;

    int arr[n];
    cout << "Enter Array Elements: ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    int low = 0;
    int high = n-1;

    mergeSort(arr, low, high);

    cout << "Sorted Elements of the Array:";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}