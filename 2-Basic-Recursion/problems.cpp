#include <iostream>
using namespace std;

// Print Your Name "N" Times:
void problem1(int i, int n){
    if(i>n) return;
    cout << "Efty";
    i++;
    problem1(i, n);
}

// Print "1" to "N" Numbers:
void problem2(int i, int n){
    if(i>n) return;
    cout << i;
    i++;
    problem2(i, n);
}

// Print "N" to "1" Numbers:
void problem3(int n){
    if(n<1) return;
    cout << n;
    n--;
    problem3(n);
}

// Print "1" to "N" Numbers (BackTracking):
void problem4(int i, int n){
    if(i<1) return;
    problem4(i-1,n);
    cout << i;
}

// Print "N" to "1" Numbers (BackTracking):
void problem5(int i,int n){
    if(i>n) return;
    problem5(i+1,n);
    cout << i;
}

int main(){
    int n;
    cin >> n;
    problem5(1,n);
}