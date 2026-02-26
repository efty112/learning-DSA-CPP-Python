#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter N:";
    cin >> n;

    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    // Hashing Algorithm (Pre-Compute)
    int hashArr[13] = {0};
    for (int i=0; i<13; i++){
        if (arr[i] >= 0 && arr[i] < 13){
            hashArr[arr[i]]++;
        }
    }

    int q;
    cout << "How many Numbers:";
    cin >> q;

    while (q--){
        int num;
        cin >> num;
        cout << "The Number appears " << hashArr[num] << " times" << endl;
    }
    

    return 0;
}