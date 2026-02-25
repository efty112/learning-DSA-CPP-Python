# Recursion Problems 3:

### Problem1: [Reverse an Array]

**Concept:**
```
Array:
 -------------------
| 5 | 4 | 3 | 2 | 1 |
 -------------------

Swap-1 (0th index, last index)
 -------------------
| 1 | 4 | 3 | 2 | 5 |
 -------------------

Swap-2 (1st index, 2nd last index)
 -------------------
| 1 | 2 | 3 | 4 | 5 |
 -------------------

Swap-3 (2nd index, 3rd last index)
 -------------------
| 1 | 2 | 3 | 4 | 5 |
 -------------------
```

**Pseudo Code:**

***Way-1 (2 Pointer)***
```
func(l,arr[],r){
    if(l>=r) return;
    swap(arr[l], arr[r]);
    func(l+1,arr,r-1);
}

main(){
    arr[n];
    func(0,arr,n-1)
    print(arr)
}
```

***Way-2 (1 Pointer)***
```
func(i, n, arr[]){
    if(i>=(n/2)) return;
    swap(arr[i], arr[n-i-1]);
    func(i+1, n, arr);
}

main(){
    arr[n];
    func(0,n,arr);
    print(arr)
}
```

---------------
### Problem2: [Check If a String is "Palindrome" or Not]

**Concept:**
```
If a string is reversed and it matches exactly with the previous string, is called Palindrome.

Example:
--------
"MADAM" --reversed--> "MADAM" ["MADAM" is a Palindrome]
"EFTY" --reversed--> "YTFE" ["EFTY" is not a Palindrome]
```
**Pseudo Code:**
```
func(i,&s){
    n = s.size();
    if(i >= n/2) return true;
    if( s[i] != s[n-i-1]) return false;
    return func(i+1, s);
}
main(){
    string a;
    print(func3(0,s));
}
```

### Problem3: [Fibonacci Number]

**Concept:**
```
First couple of Fibonacci Numbers are "0" and "1".
And the following Fibonacci Numbers would be the Addition of the previous 2 Numbers.

Example:
---------
0 1 (0+1)
0 1 1 (1+1)
0 1 1 2 (1+2)
0 1 1 2 3 (2+3)
0 1 1 2 3 5 8 13 .....N

f(n) -> Nth Fibonacci Number.
-----------------------------
f(0) -> 0th Fibonacci Number = 0.
f(1) -> 1st Fibonacci Number = 1.
f(2) -> 2nd Fibonacci Number = 1 = f(1) + f(0)
f(3) -> 3rd Fibonacci Number = 2 = f(2) + f(1)
f(4) -> 4th Fibonacci Number = 3 = f(3) + f(2)

```

**Pseudo Code:**
```
func(n){
    if(n==1) return 1;
    if(n==0) return 0;
    t = func(n-1) + func(n-2);
    return t;
}
main(){
    n;
    print(func4(n));
}
-------------------
Keep In Mind:
If total = f(4) + f(3), f(4) gets executed first.
```
***Time Complexity:***
```
Nearly: BigO(2^n) --> Exponential
```