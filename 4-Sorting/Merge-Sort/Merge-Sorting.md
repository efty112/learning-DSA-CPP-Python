
# Sorting - 2:

### Merge Sort:
*[Prerequisite: Recursion]*

*(Method: Divide and Merge)*

#### Why Merge Sort?
```
Selection Sort, Bubble Sort, Insertion Sort used to take:
--> "n^2" time-complexity for "Worst" or "Average" Case
--> "n" time-complexity for "Best" Case

But, "Merge Sort" provides much more better Complexity.
```

#### Algorithm:
```
Divide:
=======
1) Divide the Array into 2 Portions.
- 2 Equal Portions (if even number of elements)
- 1 longer and 1 shorter Portion (if Odd number of elements)
2) Keep following "Step 1" (Keep Dividing) until there is only one element left in each Portion.

Example:
- Follow "mergeSort-Divide.png"
- Follow "mergeSort-Divide-Algorthm.png"
--------------------------------------

Merge:
======
1) Place a "pointer" (p1) on the "first element" of one portion and another "pointer" (p2) on the "first element" of another portion.

2) Compare them and sort them into a new Array.
- if (p1=p2) --> p1 element goes to the Array.
  Pointer (p1) moves to the next element of the portion.

- if (p1 < p2) --> p1 element goes to the Array.
  Pointer (p1) moves to the next element of the portion.

- if (p1 > p2) --> p2 element goes to the Array.
  Pointer (p2) moves to the next element of the portion.

3) Whenever, there is no element left in each portion, we can assume that all the elements from both of the portions are sorted in an array.

4) If there is another portion with the sorted array, follow the steps again from "Step1".

Example: Follow "mergeSort-Merge.png"
--------------------------------------
```

#### Pseudo Code:
***Play around with Indexes***
```
If you Follow "mergeSort-Divide-Algorthm.png", you can see a pattern.
1) Each Time, the Array gets divided into 2 parts.
2) One Portion follows:
    low = low | high = mid
3) Another Portion follows:
    low = mid+1 | high = high

```