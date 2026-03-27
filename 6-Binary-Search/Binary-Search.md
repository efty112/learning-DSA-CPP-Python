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