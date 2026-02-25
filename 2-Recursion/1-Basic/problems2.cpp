#include <iostream>
using namespace std;

// Sum of First "N" numbers: 
//Way-1: [Parameterized]
void sum(int n, int s){
    if(n<1){
        cout << "Sum is: " << s;
        return;
    }
    s = s+n;
    sum(n-1, s);
}

//Way-2: [Functional]
int sum2(int n){
    if(n==0) return 0;

    return n + sum2(n-1);
}


// Factorial of "N" Numbers:
//Way-1: [Parameterized]
void fact(int n, int t){
    if(n<=1){
        cout << "Sum is: " << t;
        return;
    }
    t = t*(n-1);
    fact(n-1, t);
}

//Way-2: [Functional]
int fact2(int n){
    if(n<=1) return 1;

    return n * fact2(n-1);
}

int main(){
    int n;
    cout << "Enter N:";
    cin >> n;
    cout << fact2(n);

    return 0;
}