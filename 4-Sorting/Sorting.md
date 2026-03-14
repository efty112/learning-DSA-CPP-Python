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

Time Complexity of Selection Sort: n^2
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
```

