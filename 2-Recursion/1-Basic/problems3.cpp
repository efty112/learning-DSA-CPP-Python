#include <iostream>
#include <algorithm>
using namespace std;

//Problem1: [Reverse an Array]
//Way-1 (2 Pointer)
void func(int l, int r, int arr[]){
    if(l>=r) return;
    swap(arr[l],arr[r]);
    func(l+1,r-1,arr);
}

// Way-2 (1 Pointer)
void func2(int i, int n, int arr[]){
    if(i>=(n/2)) return;
    swap(arr[i], arr[n-i-1]);
    func2(i+1, n, arr);
}

int main(){
    int n;
    cout << "Enter Number of Element in Array:";
    cin >> n;
    int arr[n];

    cout << "Input Elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    func2(0,n,arr);

    cout << "Swapped Array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}