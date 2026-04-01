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

int floor(int arr[], int arrLen, int target){
    int low= 0;
    int high= arrLen - 1;
    int floor = -1;

    while (low<=high){
        int mid=(low+high)/2;

        if(arr[mid] <= target){
            floor = arr[mid];
            low = mid+1;
        }
        else{
            high = mid - 1;
        }
    }

    return floor;
}

int ceil(int arr[], int arrLen, int target){
    int low= 0;
    int high= arrLen - 1;
    int ceil = -1;

    while (low<=high){
        int mid=(low+high)/2;

        if(arr[mid] >= target){
            ceil = arr[mid];
            high = mid-1;
        }
        else{
            low=mid+1;
        }
    }

    return ceil;
}

int main(){
    int n = 10;
    int arr[n] = {1, 2, 3, 3, 5, 8, 8, 10, 10, 11};

    int targetVal;
    cout << "Input the Target Value: ";
    cin >> targetVal;

    int lb = lowerBound(arr, n, targetVal);
    int ub = upperBound(arr, n, targetVal);
    int flr = floor(arr, n, targetVal);
    int cl = ceil(arr, n, targetVal);

    cout << "The Lower Bound is: " << lb << endl;
    cout << "The Upper Bound is: " << ub << endl;
    cout << "The Floor is: " << flr << endl;
    cout << "The ceil is: " << cl << endl;

    return 0;
}