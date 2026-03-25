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

#### Pseudo Code: [Division Algorithm]
***Play around with Indexes***
```
If you Follow "mergeSort-Divide-Algorthm.png", you can see a pattern.
1) Each Time, the Array gets divided into 2 parts.
2) One Portion follows:
    low = low | high = mid
3) Another Portion follows:
    low = mid+1 | high = high
4) Keep dividing until "low >= high"

=======================================
Pseudo Code:
============
arr[n];

low = 0;
high = n-1;
mid = (low+high)/2;

mergeSort(arr, low, high){
    if(low>=high) return;

    mid = (int)((low+high)/2);
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

=======================================
Dry Run through the "Recursion Code"
    --> Follow: mergeSort-Dry-Run.png
```

#### Pseudo Code: [Merging Algorithm]

```
Follow --> "5-mergeSort-Sorting.png"
====================================
1) Take Input => arr, low, mid, high.
2) Variables => temp[], left, right.
3) left=low, right=mid+1
4) left>=low && left<=mid
5) right>=mid+1 && right<=high
6) if(arr[left] < arr[right]) -> temp.add(arr[left]) -> left++
7) if(arr[right] < arr[left]) -> temp.add(arr[right]) -> right++
8) if(left>mid) -> temp.add(arr[right]) -> right++
9) if(right>high) -> temp.add(arr[left]) -> left++
10) Tranfer the Temp Array (temp[]) elements to the original Array (arr[])

==================
Pseudo Code:
==================
merge(arr, low, mid, high){
    temp[high];
    left=low;
    right=mid+1;
    k=0;

    while(left<=mid || right<=high){
        if(left>mid){
            temp[k] = arr[right];
            right++;
            k++;
        }
        else if(right>high){
            temp[k] = arr[left];
            left++
            k++
        }
        else if(arr[left] < arr[right]){
            temp[k] = arr[left];
            left++;
            k++;
        }
        else{
            temp[k] = arr[right];
            right++;
            k++;
        }
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i-low];
    }
}

```

#### Complexity Analysis:

```
Time Complexity:
================

Division Algorithm:
-------------------
[n] --> [n/2] --> [n/4]
    |         --> [n/4]
    |          
    --> [n/2] --> [n/4]
              --> [n/4]

Each Time "n" is getting divided by "2".

Example:
[16] --> [8] --> [4] --> [2] --> [1]
                             --> [1]
                     --> [2] --> [1]
                             --> [1]

             --> [4] --> [2] --> [1]
                             --> [1]
                     --> [2] --> [1]
                             --> [1]

     --> [8] --> ...................

From "16" to "1", There are "4" steps in Total.
16 = 2^4 = 2^steps
n = 2^steps

So, Steps = log2^n

Time Complexity for Division Algorithm: O(log2^n)


Merging Algorithm:
------------------
Merging takes a minimum of "N" times in each of the Steps.


Finally:
--------
The Time Complexity: => O(n*log2^n)


Space Complexity:
=================
Each Time while Dividing, we used the Indexes. So, for Division, no extra space were used.
But While Merging, we used a "Temp Array". The "Temp Array" was used to store the Array elements.
And the "Temp Array" is the size of "N".

So, Space Complexity => O(N).
```