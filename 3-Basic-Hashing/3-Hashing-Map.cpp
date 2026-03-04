#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Number of Element in Array: ",
    cin >> n;

    int arr[n];
    cout << "Insert Array Elements:" << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    // Pre-Compute
    map<int, int> hashArray;
    for(int i=0; i<n; i++){
        hashArray[arr[i]]++;
    }

    // Iterate the Map Array:
    // for(auto it: hashArray){
    //     cout << it.first << "-->" << it.second << endl;
    // }


    int q;
    cout << "How many Numbers you want to find out: ";
    cin >> q;

    cout << "Input Numbers: ";
    while (q--){
        int num;
        cin >> num;
        cout << hashArray[num] << endl;
    }

    return 0;
}