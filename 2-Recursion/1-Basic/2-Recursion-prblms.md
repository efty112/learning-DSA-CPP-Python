# Recursion Problems:

#### Problem1: Print Your Name 'N' times
```
problem1(i,n){
    if(i>n) return;
    print("Efty");
    i++;
    problem1(i, n);
}

main(){
    n;
    input(n);
    problem1(1,n);
}
```

***Recursion Tree:***
```
n = 3;

 Efty       Efty       Efty     Base Cond
f(1,3) --> f(2,3) --> f(3,3) --> f(4,3)X
  |<----------|<---------|<---------|
```
***Complexity:***
```
Time Complexity: O(n)
Space Complexity: O(n) --> Uses the "Stack Space"
```

------------
#### Problem2: Print '1' to 'N' Numbers
```
problem2(i,n){
    if(i>n) return;
    print(i);
    i++;
    problem2(i, n);
}

main(){
    n;
    input(n);
    problem2(1,n);
}
```
------------
#### Problem3: Print 'N' to '1' Numbers
```
problem3(n){
    if(n<1) return;
    print(n);
    n--;
    problem3(n);
}

main(){
    n;
    input(n);
    problem3(n);
}
```
-------------
#### Problem4: Print '1' to 'N' Numbers [Using "BackTracking"]

```
problem4(i,n){
    if (i < 1) return;
    problem4(i-1,n);
    print(i);
}

main(){
    n;
    input(n);
    problem4(n,n);
}
```
--------------
#### Problem5: Print 'N' to '1' Numbers [Using "BackTracking"]

```
problem5(i,n){
    if(i>n) return;
    problem5(i+1,n);
    print(i);
}

main(){
    n;
    input(n);
    problem5(1,n);
}
```