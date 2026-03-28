# Binary Search

***[Searching Algorithm]***

#### Basic Searching Algorithm: (Linear Search)
```
# Liner Search:
================
1) Going Through each element of an Array.
2) Matching each of the elements with the "Target".

Example:
--------
[9, 7, 5, 8, 2, 1, 3, 78, 89]
=> (n=9)

=> [Target=2]
i=0 --> arr[0]=9 --> arr[0]=2? --> No
i=1 --> arr[1]=7 --> arr[1]=2? --> No
i=2 --> arr[2]=5 --> arr[2]=2? --> No
i=3 --> arr[3]=8 --> arr[3]=2? --> No
i=4 --> arr[4]=2 --> arr[4]=2? --> Yes => {Position: 4}


=> [Target=13]
i=0 --> arr[0]=9 --> arr[0]=13? --> No
i=1 --> arr[1]=7 --> arr[1]=13? --> No
i=2 --> arr[2]=5 --> arr[2]=13? --> No
i=3 --> arr[3]=8 --> arr[3]=13? --> No
i=4 --> arr[4]=2 --> arr[4]=13? --> No
i=5 --> arr[5]=1 --> arr[4]=13? --> No
i=6 --> arr[6]=3 --> arr[4]=13? --> No
i=7 --> arr[7]=78 --> arr[4]=13? --> No
i=8 --> arr[8]=89 --> arr[4]=13? --> No

{Target "13" Not Found inside of the Array}

Time Complexity:
----------------
Worst Case: O(n)
```

- **Linear Searching** Algorithm has a Time Complexity of O(n). So, to have lesser "Time Complexity", Binary Search Algorithm comes into the picture.
- **Pre requisite of BS:** The Array (data) should stay in a **Sorted Order**.

#### Algorithm:
```
1) The Array must be a Sorted Array.
2) Take a Pointer (low) at 0th Index, another Pointer (high) at "n-1"th Pointer.
3) Find the Middle Index. (midIndx=(low+high)/2)
4) If arr[midInx] = Target --> Position: midIndx
5) If arr[midIndx] != Target
--> 6) If Target < arr[midIndx] --> low=low, high=midIndx-1
        Run the Steps from "2" again
--> 7) If Target > arr[midIndx] --> low=midIndx+1, high=n-1
        Run the Steps from "2" again

Example:
========
               0  1  2  3  4   5  6   7
Sorted Array: [3, 4, 6, 7, 9, 12, 16, 17]
Here, n=8 | Target=13 |

=> low=0 | high=n-1=7
=> low<=high? --> Yes
=> mid=(low+high)/2 = 3.5 ~ 3

    arr[mid]=arr[3]=7
--> arr[mid]=Target? --> No
--> Target < arr[mid] --> No
--> Target > arr[mid] --> Yes --> {low=mid+1=4, high=high=7}

=> low=4 | high=7
=> low<=high? --> Yes
=> mid=(4+7)/2= 5.5 ~5

    arr[mid]=arr[5]=12
--> arr[mid]=Target? --> No
--> Target < arr[mid] --> No
--> Target > arr[mid] --> Yes --> {low=mid+1=6, high=high=7}

=> low=6 | high=7
=> low<=high? --> Yes
=> mid=(6+7)/2= 6.5 ~ 6

    arr[mid]=arr[6]=16
--> arr[mid]=Target? --> No
--> Target < arr[mid] --> Yes --> low=low=6, high=mid-1=5

=> low=6 | high=5
=> low<=high? --> No
--> The "Target Value Not Found"
```

#### Pseudo-Code (Binary Search by Iteration)
```
BINARYSEARCHITER(arr, arrLen, target)

    low ← 0
    high ← arrLen - 1

    WHILE low ≤ high DO
        mid ← (low + high) / 2

        IF arr[mid] = target THEN
            RETURN mid

        ELSE IF target < arr[mid] THEN
            high ← mid - 1

        ELSE
            low ← mid + 1
        END IF
    END WHILE

    RETURN -1

END BINARYSEARCHITER
```

#### Pseudo-Code (Binary Search by Recursion)
```
BINARYSEARCHRECURSION(arr, low, high, target)

    IF low > high
        RETURN -1

    mid ← (low + high) / 2

    IF arr[mid] = target
        RETURN mid

    ELSE IF target < arr[mid]
        RETURN BINARYSEARCHRECURSION(arr, low, mid-1, target)

    ELSE
        RETURN BINARYSEARCHRECURSION(arr, mid+1, high, target)
```

#### Time Complexity:
```
Let's Imagine: We have array of "32" elements.
And Each Time, the existing Array gets divided into "2" portions.
32 --> 16 --> 8 --> 4 --> 2 --> 1 => 5 Steps => Log2^32

Time Complexity => O(log2^N)
```

#### Overflow Issue:
```
Imagine, you have an Array of "10^5 / 10^6 / 10^7" elements.

Now, low=0 | high= 10^7 = IntMax (Let's call it IntMax)
You keep dividing the Array into 2 parts, and by keep doing that there might be a time when,
"Low" might be close to "10^7"
"High" might be "10^7"

Then, int mid = (IntMax + IntMax) / 2
But the "mid" can't hold ("IntMax+IntMax") a number this big.

How to solve it:
----------------
1) using "long long" with "low" and "high".
or,
2) using "mid = low + {(high-low) / 2}"
```


## Lower Bound:

#### Algorithm:

```
Let's say, You have a Target "x".

The "Lower Bound" of the Target ("x") is: The "smallest" index such that "array[indx] >= x".

Example-1:
----------
        0  1  2  3   4
Array: [3, 5, 8, 15, 19]
Targets:
"X=8"  --> LB=2
"X=9"  --> LB=3
"X=16" --> LB=4
"X=20" --> LB=5


Example-2:
----------
        0  1  2  3   4   5   6
Array: [3, 5, 8, 15, 19, 19, 19]
Targets:
"X=19" --> LB=4


Example-3:
----------
        0  1  2  3  4  5  6  7  8  9
Array: [1, 2, 3, 3, 7, 8, 9, 9, 9, 11]

Targets => "X=1"

Now, Let's Imagine, You have a Target for which there is no Lower Bound. In that case, you set "n" as the "Lower Bound".
Basically, "n" is the universal Lower Bound.

So, LB = 10

 0  1  2  3  4  5  6  7  8  9
[1, 2, 3, 3, 7, 8, 9, 9, 9, 11]

LB=10 | low=0 | high=9
mid=(low+high)/2 = 4
arr[mid] = 7 >= 1 ? --> Yes --> (LB=mid=4 | low=0 | high=mid-1=3)

LB=4 | low=0 | high=3
mid=(low+high)/2 = 1
arr[mid] = 2 >= 1 ? --> Yes --> (LB=mid=1 | low=0 | high=mid-1=0)

LB=1 | low=0 | high=0
mid=(low+high)/2 = 0
arr[mid] = 1 >= 1 ? --> Yes --> (LB=mid=0 | low=0 | high=mid-1=-1)

LB=0 | low=0 | high=-1
(low<=high) --> No

Finally, => "Lower Bound=0"


Example-4:
----------
        0  1  2  3  4  5  6  7   8   9
Array: [1, 2, 3, 3, 5, 8, 8, 10, 10, 11]

Targets => "X=9"

LB=10 | low=0 | high=9
mid=(low+high)/2 = 4
arr[mid] = 5 >= 9 ? --> No --> (low=mid+1=5 | high=9)

LB=10 | low=5 | high=9
mid=(low+high)/2 = 7
arr[mid] = 10 >= 9 ? --> Yes --> (LB=7 | low=5 | high=mid-1=6)

LB=7 | low=5 | high=6
mid=(low+high)/2 = 5
arr[mid] = 8 >= 9 ? --> No --> (low=mid+1=6 | high=6)

LB=7 | low=6 | high=6
mid=(low+high)/2 = 6
arr[mid] = 8 >= 9 ? --> No --> (low=mid+1=7 | high=6)

LB=7 | low=7 | high=6
(low<=high) --> No 

Finally, => "Lower Bound=7"
```

#### Pseudo Code:
```
BINARYSEARCHITER(arr, arrLen, target)

    low ← 0
    high ← arrLen - 1
    lb = arrLen

    WHILE low ≤ high DO
        mid ← (low + high) / 2

        IF arr[mid] >= target THEN
            lb ← mid
            high ← mid - 1

        ELSE
            low ← mid + 1
        END IF
    END WHILE

    RETURN lb

END BINARYSEARCHITER
```


#### Complexity and C++ Way of doing it:
```
Time Complexity:
----------------
=> O(log2^n)
=> as it is similar to Binary Search Algorithm

C++ Way:
--------
Use: C++ STL "lower_bound"
```
**Link (C++ STL lower_bound):** [https://www.geeksforgeeks.org/cpp/lower_bound-in-cpp/](https://www.geeksforgeeks.org/cpp/lower_bound-in-cpp/)


## Upper Bound:

#### Algorithm:
```
Let's say, You have a Target "x".

The "Lower Bound" of the Target ("x") is: The "smallest" index such that "array[indx] > x".
{"greater than" not "greater than or equal"}

Example:
---------
        0  1  2  3  4  5  6   7   8   9
Array: [2, 3, 6, 7, 8, 8, 11, 11, 11, 12]

X=6  --> UP=3
X=11 --> UP=9
X=12 --> UP=10
X=13 --> UP=10
X=0  --> UP=0
The Algorithm is same as "Lower Bound"s Algorithm. Just the only difference is the logic of "array[indx] > x".
```

#### Pseudo Code:
```
BINARYSEARCHITER(arr, arrLen, target)

    low ← 0
    high ← arrLen - 1
    lb = arrLen

    WHILE low ≤ high DO
        mid ← (low + high) / 2

        IF arr[mid] > target THEN
            lb ← mid
            high ← mid - 1

        ELSE
            low ← mid + 1
        END IF
    END WHILE

    RETURN lb

END BINARYSEARCHITER
```


#### Complexity and C++ Way of doing it:
```
Time Complexity:
----------------
=> O(log2^n)
=> as it is similar to Binary Search Algorithm

C++ Way:
--------
Use: C++ STL "upper_bound"
```
**Link (C++ STL upper_bound):** [https://www.geeksforgeeks.org/cpp/upper_bound-in-cpp/](https://www.geeksforgeeks.org/cpp/upper_bound-in-cpp/)
