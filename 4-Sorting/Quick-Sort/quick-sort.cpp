#include <iostream>
using namespace std;

void swap(int& val1, int& val2){
    int temp = val1;
    val1 = val2;
    val2 = temp;
}

void quickSort(int arr[], int low, int high){
    if(low < high){
        int i = low;
        int j = high;
        int pivot = arr[low];

        while(i < j){
            while(arr[i] <= pivot && i < high){
                i++;
            }

            while(arr[j] > pivot && j > low){
                j--;
            }

            if(i < j){
                swap(arr[i], arr[j]);
            }
        }

        swap(arr[low], arr[j]);
        int partition = j;

        quickSort(arr, low, partition - 1);
        quickSort(arr, partition + 1, high);
    }
}

int main(){
    int n;
    cout << "Number of elements in the Array: ";
    cin >> n;

    int arr[1000];
    cout << "Input the Elements: ";

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}