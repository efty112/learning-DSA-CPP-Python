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