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