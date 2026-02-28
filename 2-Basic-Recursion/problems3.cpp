#include <iostream>
#include <algorithm>
#include <string>
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


// Problem2: [Check If a String is "Palindrome" or Not]
bool func3(int i, string &s){
    int n = s.size();
    if(i >= n/2) return true;
    if( s[i] != s[n-i-1]) return false;
    return func3(i+1, s);
}


//Problem3: [Find the "N"th Fibonacci Number]
int func4(int n){
    if(n==1) return 1;
    if(n==0) return 0;
    int t = func4(n-1) + func4(n-2);
    return t;
}

int main(){
    int n;
    cout << "Enter N:";
    cin >> n;
    
    cout << func4(n);

    return 0;
}