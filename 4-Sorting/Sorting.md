# Sorting:

### Selection Sort:
*(Method: Select the Lowest and Swap)*

#### Algorithm:
```
1) Start from the 0th element of the Array and Find out the Lowest element.
2) Swap the element with array[0].
[Now the 1st element of the Array is sorted.]

3) Start from the 1st element of the Array and Find out the Lowest element.
4) Swap the element with array[1].
[Now the 1st and 2nd element of the Array is sorted.]

Go On untill there is only one element left to be sorted.

--------------------------------
Example:
--------
Array:
============================
|13 | 46 | 24 | 52 | 20 | 9|
============================

Step-1:
============================
|9 | 46 | 24 | 52 | 20 | 13|
============================

Step-2:
============================
|9 | 13 | 24 | 52 | 20 | 46|
============================

Step-3:
============================
|9 | 13 | 20 | 52 | 24 | 46|
============================

Step-4:
============================
|9 | 13 | 20 | 24 | 52 | 46|
============================

Step-5:
============================
|9 | 13 | 20 | 24 | 46 | 52|
============================

So Basically:
-------------
1) Swap -> arr[0] and min(arr[0] to arr[n-1])
2) Swap -> arr[1] and min(arr[1] to arr[n-1])
3) Swap -> arr[2] and min(arr[2] to arr[n-1])
.
.
 Swap -> arr[n-2] and min(arr[n-2] to arr[n-1])
```

#### Pseudo Code:

```
Start
  swap(val1, val2){
    temp = val1
    val1 = val2
    val2 = temp
  }

  n; // Array Length

  for (i=0; i<=n-2; i++)
    min = i
    for(j=i+1; j<=n-1; j++)
      if(arr[j] < arr[min]) min = j;

    swap (arr[i], arr[min])
```

#### Time Complexity:
```
i=0 --> j=1 to n-1 --> n-1 times
i=1 --> j=2 to n-1 --> n-2 times
i=2 --> j=3 to n-1 --> n-3 times
.
.
i=n-2 --> j=n-1 to n-1 --> 1 times

So, Total= n + n-1 + n-2 + n-3 + n-4 + ........ + 3 + 2 + 1
(Summation of first "n" numbers)

Total = n*(n+1) / 2 = (n^2 + n)/2
(Ignore "n" and "/2")

Time Complexity of Selection Sort: BigO(n^2)
```

------------------

### Bubble Sort:
*(Method: Push the Maximum to the last by Adjacent Swap)*

#### Algorithm:
```
1) Starting from the beginning of the Array to the last.
2) Each time you consider 2 elements from the Array.
3) From the 2 elements, whatever is the Maximum put it to the 2nd Position. So, if the 1st element is the Maximum, swap the elements. Otherwise, no need to swap.

This way, after every round, you will get one sorted element in the end of the array.

-------------------------
Example:
--------
Array:
============================
|13 | 46 | 24 | 52 | 20 | 9|
============================

-------
Step-1:
-------
============================
|13 | 46 |  |  |     |    |
|========|==================

(Swap 24 and 46 - as 46 is Max)
============================
| 13 | 24 | 46 |  |    |   |
=====|=========|============

============================
| 13 | 24 | 46 | 52 |  |   |
==========|=========|=======

(Swap 20 and 52 - as 52 is Max)
============================
| 13 | 24 | 46 | 20 | 52 | |
===============|=========|==

(Swap 9 and 52 - as 52 is Max)
============================
| 13 | 24 | 46 | 20 | 9 |52|
====================|======|

Now: [52 (the last element) is sorted]

-------
Step-2:
-------
============================
| 13 | 24 |   |   |   | 52 |
============================

============================
| 13 | 24 | 46  |   |   | 52 |
============================

(Swap 46 and 20 - as 46 is Max)
============================
| 13 | 24 | 20 | 46 |  | 52 |
============================

============================
| 13 | 24 | 20 | 9 | 46 |52|
============================

Now: [46 , 52 (the last 2 elements) are sorted]

-------
Step-3:
-------
============================
| 13 | 24 |   |   | 46 | 52|
============================

(Swap 24 and 20 - as 24 is Max)
============================
| 13 | 20 | 24 |  | 46 | 52|
============================

(Swap 24 and 9 - as 24 is Max)
============================
| 13 | 20 | 9 | 24 | 46 | 52|
============================

Now: [24,46,52 (the last 3 elements) are sorted]

-------
Step-4:
-------
============================
| 13 | 20 |  | 24 | 46 | 52|
============================

(Swap 20 and 9 - as 20 is Max)
============================
| 13 | 9 | 20 | 24 | 46 |52|
============================

Now: [20,24,46,52 (the last 4 elements) are sorted]

-------
Step-5:
-------

(Swap 13 and 9 - as 13 is Max)
============================
| 9 | 13 | 20 | 24 | 46 |52|
============================

Now: [13,20,24,46,52 (the last 5 elements) are sorted]

-------
Step-6:
-------
============================
| 9 | 13 | 20 | 24 | 46 |52|
============================

Now, Only One element is left. So, Now the Array is Sorted.

Observation:
-------------
[n = Array element count]
1st Time --> 0 to n-1
2nd Time --> 0 to n-2
3rd Time --> 0 to n-3
.
.
last Time --> 0 to 1

Also, In each step, 1 element gets sorted. And we continue the process untill we reach the 2nd element (Index=1).
So, the Total Steps = "n-1" times
```

#### Pseudo Code:
```
arr[n];
n;    //Array Length 

for (i=n-1; i>=1; i--){
    for (j=0; j<=i-1; j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }
}
```

#### Time Complexity:
```
i = n-1 --> j = 0 to n-2 => "n-1" times
i = n-2 --> j = 0 to n-3 => "n-2" times
i = n-3 --> j = 0 to n-4 => "n-3" times
i = n-4 --> j = 0 to n-5 => "n-4" times
.
.
.
i = 2 --> j = 0 to 1 => "2 times"
i = 1 --> j = 0 to 0 => "1 times"

So, Total = n-1 + n-2 + n-3 + n-4 + ...... + 3 + 2 + 1
(Summation of first "n" numbers)

Total = n*(n+1) / 2 = (n^2 + n)/2
(Ignore "n" and "/2")

Time Complexity of Selection Sort: BigO(n^2)
[Worst Case Complexity + Average Case Complexity]
```

#### Optimization (Bubble Sort):
```
Now, lets Imagine an already a Sorted Array:
=========================
| 9 | 13 | 20 | 24 | 46 |
=========================

--> This is the "Best Case"
--> If you use the Previous Code, the Time Complexity here would be: BigO(n^2)
--> Which is same as the Worst or Average Case.
--> If we can tweak the code a little bit, we can find a better Complexity for the "Best Case".

--> If no swap happens in the first iteration, it means the Array is Sorted.

Better Code:
-------------
arr[n];
n;    //Array Length 

for (i=n-1; i>=1; i--){
    didSwap = false;

    for (j=0; j<=i-1; j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
            didSwap = true;
        }
    }

    if(!didSwap){
        break;
    }
}

-------------------------
Time Complexity:
--> Best Case for this Code: BigO(n)
--> Worst Case and Average Case: BigO(n^2)
```

----------------------
### Insertion Sort:
*(Method: Takes an Element & Places it in it's correct Position)*

#### Algorithm:
```
1) Starting from the beginning of the Array to the last.
2) We iterate through each element one by one and we put each of the elements to its correct position.

--------------------
Example:
--------

Array:
============================
|13 | 46 | 24 | 52 | 20 | 9|
============================

-------
Step-1: [Consider the 1st element]
-------
============================
|13 |    |    |    |    |  |
============================

-------
Step-2: [Consider the the 1st 2 elements]
-------
(46 is greater than 13. So, it's in correct order.)
============================
|13 | 46 |    |    |    |  |
============================

-------
Step-3: [Consider the the 1st 3 elements]
-------
(46 is greater than 24. So, right shift 46 by 1 place. And left shift 24 by one.)
============================
|13 | 46 | 24 |    |    |  |
============================

(Now, 24 is greater than 13. So, it's in correct order)
============================
|13 | 24 | 46 |    |    |  |
============================

-------
Step-4: [Consider the the 1st 4 elements]
-------
(52 is greater than 46 -> Correct Order.)
============================
|13 | 24 | 46 | 52 |    |  |
============================

-------
Step-5: [Consider the the 1st 5 elements]
-------
(52 is greater than 20 --> Right Shift 52 by 1 place.)
============================
|13 | 24 | 46 | 52 | 20 |  |
============================

(46 is greater than 20 --> Right Shift 46 by 1 place.)
============================
|13 | 24 | 46 | 20 | 52 |  |
============================

(24 is greater than 20 --> Right Shift 24 by 1 place.)
============================
|13 | 24 | 20 | 46 | 52 |  |
============================

============================
|13 | 20 | 24 | 46 | 52 |  |
============================

-------
Step-6: [Consider the the 1st 6 (all) elements]
-------
(52 is greater than 9 --> Right Shift 52 by 1 place.)
=============================
|13 | 20 | 24 | 46 | 52 | 9 |
=============================

(46 is greater than 9 --> Right Shift 46 by 1 place.)
=============================
|13 | 20 | 24 | 46 | 9 | 52 |
=============================

(24 is greater than 9 --> Right Shift 24 by 1 place.)
=============================
|13 | 20 | 24 | 9 | 46 | 52 |
=============================

(20 is greater than 9 --> Right Shift 20 by 1 place.)
=============================
|13 | 20 | 9 | 24 | 46 | 52 |
=============================

(13 is greater than 9 --> Right Shift 13 by 1 place.)
=============================
|13 | 9 | 20 | 24 | 46 | 52 |
=============================

=============================
|9 | 13 | 20 | 24 | 46 | 52 |
=============================

i=0 --> X
i=1 --> if(arr[0] > arr[1]) swap(arr[0], arr[1])

i=2 --> if(arr[1] > arr[2]) swap(arr[1], arr[2])
    --> if(arr[0] > arr[1]) swap(arr[0], arr[1])

i=3 --> if(arr[2] > arr[3]) swap(arr[2], arr[3])
    --> if(arr[1] > arr[2]) swap(arr[1], arr[2])
    --> if(arr[0] > arr[1]) swap(arr[0], arr[1])

Also, In the first Place, if no Swap happens (Like- Step-4), we don't need to proceed furthur with swapping as it is already in the sorted order.
```

#### Pseudo Code:
```
n;  // Array Length
arr[n];

for(i=1; i<n; i++){
    for(j=i; j>0; j--){
        if(arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
        }
    }
}


More Optimized Code:
====================
(If in the first place no swap happens, we don't need to proceed furthur.)

n;  // Array Length
arr[n];

for(i=1; i<n; i++){
    for(j=i; j>0 && arr[j-1] > arr[j]; j--){
        swap(arr[j-1], arr[j]);
    }
}
```

#### Time Complexity:
```
i=0 --> 0 times
i=1 --> 1 times
i=2 --> 2 times
i=3 --> 3 times
.
i=n --> n times

Total= 0+1+2+3+4+....+n = (n*(n+1))/2 ~ n^2

Worst Case: BigO(n^2)
Average Case: n^2

Best Case --> All the elements are in Sorted Order --> (n)
```