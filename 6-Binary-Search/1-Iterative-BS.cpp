#include <iostream>
using namespace std;

int binarySearchIter(int arr[], int arrLen, int target){
    int low=0, high=arrLen-1;

    while (low<=high){
        int mid=(low+high)/2;

        if(arr[mid] == target){
            return mid;
        }
        else if(target < arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    return -1;
}

int binarySearchRecursion(int arr[], int low, int high, int target){
    if(low>high){
        return -1;
    }

    int mid = (low+high)/2;

    if(arr[mid] == target){
        return mid;
    }
    else if(target < arr[mid]){
        return binarySearchRecursion(arr, low, mid-1, target);
    }
    else{
        return binarySearchRecursion(arr, mid+1, high, target);
    }
}

int main(){
    int n = 8;
    int arr[n] = {3, 4, 6, 7, 9, 12, 16, 17};
    int target;

    cout << "Number that You want to find out: ";
    cin >> target;

    // Binary Search by Iteration:
    // int targetPosition = binarySearchIter(arr, n, target);
    
    // Binary Search by Recursion:
    int low = 0, high = n-1;
    int targetPosition = binarySearchRecursion(arr, low, high, target);

    if(targetPosition<0){
        cout << "The Target is not Found";
    }else{
        cout << "The Target is Found at:" << targetPosition;
    }

    return 0;
}