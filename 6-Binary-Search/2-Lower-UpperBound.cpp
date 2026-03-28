#include <iostream>
using namespace std;

int lowerBound(int arr[], int arrLen, int target){
    int low= 0;
    int high= arrLen - 1;
    int lb = arrLen;

    while (low<=high){
        int mid=(low+high)/2;

        if(arr[mid] >= target){
            lb = mid;
            high = mid-1;
        }
        else{
            low=mid+1;
        }
    }

    return lb;
}

int upperBound(int arr[], int arrLen, int target){
    int low= 0;
    int high= arrLen - 1;
    int lb = arrLen;

    while (low<=high){
        int mid=(low+high)/2;

        if(arr[mid] > target){
            lb = mid;
            high = mid-1;
        }
        else{
            low=mid+1;
        }
    }

    return lb;
}

int main(){
    int n = 10;
    int arr[n] = {1, 2, 3, 3, 5, 8, 8, 10, 10, 11};

    int targetVal;
    cout << "Input the Target Value: ";
    cin >> targetVal;

    int lb = lowerBound(arr, n, targetVal);
    int ub = upperBound(arr, n, targetVal);

    cout << "The Lower Bound is: " << lb << endl;
    cout << "The Upper Bound is: " << ub << endl;

    return 0;
}