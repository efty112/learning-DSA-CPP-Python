# Recursion Problems 2:

### Problem1: [Sum of First "N" numbers]

***Way-1: [Parameterized]***
```
void sum(n,s){
    if(n<1){
       print(s)
       return;
    }
    s = s+n;
    sum(n-1,s)
}

main(){
   input(n);
   sum(n, 0)
}

----------------
Recursion Tree: (n=3)
                                 [Print: 6]
f(3,0) --> f(2,3) --> f(1,5) --> X f(0,6) X
   |<--------|<---------|<-----------|
```

***Way-2: [Functional]***
```
Let's say, N=4.
And a Function "f(N)" calculates the sum of first N Numbers.

Sum = f(4)
Then,f(4) = 4 + f(3)
     f(3) = 3 + f(2)
     f(2) = 2 + f(1)
     f(1) = 1 + f(0)
So, Sum = f(N) + f(N-1)
```
```
void sum(n){
    if(n==0) return 0;
    return n + f(n-1);
}

main(){
   input(n);
   s = sum(n);
   print(s)
}
```

------------
### Problem2: [Factorial of "N" Numbers]
***Way-1: [Parameterized]***
```
void fact(n,t){
    if(n<=1){
       print(t)
       return;
    }
    t = t*(n-1);
    sum(n-1,t)
}

main(){
   input(n);
   fact(n, n)
}
```

***Way-2: [Functional]***
```
Let's say, N=4.
And a Function "f(N)" calculates the Factorial of first N Numbers.

Sum = f(4)
Then,f(4) = 4 * f(3)
     f(3) = 3 * f(2)
     f(2) = 2 * f(1)
     f(1) = 1 * f(0)
So, Total = f(N) * f(N-1)
```
```
void fact(n){
    if(n<=1) return;
    return n * fact(n-1);
}

main(){
   input(n);
   fact = fact(n);
   print(fact)
}
```