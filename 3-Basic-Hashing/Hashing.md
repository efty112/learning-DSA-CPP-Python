# Hashing:

#### Why Hashing is needed?

*(Problem Statement)*
```
Let's think of an Array:
|-------------|
|1, 2, 1, 3, 2|
|-------------|

Now, If I tell you to find how many times a Number appears in the Array!
1) You will iterate through the Array from the beginning to the end.
2) Match each element with the given number.
3) If the Number matches, the count is increased by one each time.

Pseudo Code:
------------
func(findNum, arr[]){
     count = 0;
     
     for (i=0; i<n; i++){
         if(arr[i] == findNum) count++;
     }
     return count;
}

Example:
--------
1 -> 2
2 -> 2
3 -> 1
4 -> 0
5 -> 0

Now, Time Complexity of the Code: O(n)
O(n) --> for finding how many time one single Number appears.

If there are multiple numbers like if I am told to find out how many times (1 to 5 or m), all these numbers appear
The Time Complexity: O(m*n)

Imagine (Problem):
--------
Now, I have an Array of 10^5 elements (n) and I have another 10^5 numbers (m) to count how many times they appear.

So, Time Complexity: O(10^5 * 10^5) = O(10^10)

"10^8 instructions" take apprx "1 sec" to execute.
so, "10^10 instr" would take "100 sec".

This is Where:
------------
Hashing comes into the Picture. Hashing will do it much faster.
```

### Number Hashing
```
Hashing is like "Pre-storing" or "Fetching".

First, You will make an array of maximum number you want to find number of elements.
Second, Assign each element as Zero.

Example:
--------
Lets say, you want to find how many times "12" appears in an Array ([1, 2, 1, 3, 2, 5, 4, 3]).

1) Make an Array of 12+1 = 13 elements.
2) Assign each element to be Zero.
3) Start iterating through the given Array.
4) Increase the value of the Hashing Array's index that matches with the value by one.

Given Array:
==========================
| 1, 2, 1, 3, 2, 5, 4, 3 |
==========================

Hashing Array (first)
 ========================================
| 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0,  0|
 ========================================
  0  1  2  3  4  5  6  7  8  9  10  11  12 -> Index

Hashing Array (Final)
 ========================================
| 0, 2, 2, 2, 1, 1, 0, 0, 0, 0, 0,  0,  0|
 ========================================
  0  1  2  3  4  5  6  7  8  9  10  11  12 -> Index

Now:
-----
We already have an Array that is pre-loaded.
If anyone asks to find out how many times a number appears, you can simply find out from the Hashing Array.
-> hashArray[number]

Question is:
------------
How long should the Hash Array be?
-> It should be as long as the question setter wants a number count to be found out.
If the question setter asks to find out the number count till 10^5, the Hash Array length should be 10^5.
```

#### Pseudo Code (Hashing Algorithm)

```
maxVal;
givenArray[n];

hashArray[maxVal+1] = {0};

for (i=0; i<maxVal; i++){
    if(givenArray[i] >= 0 && givenArray[i] < 13){
        hashArray[givenArray[i]]++;
    }
}
```

***What is the Maximum Number of Element you can fit in the HashArray?***

```
In C++,

Inside Main Function --> 10^6 elements --> HashArr[10^6]
Globally --> 10^7 elements --> HashArray[10^7]
```

-----------
### Character Hashing

***Algorithm:***
```
Remember:
---------
1) There are "26" lower-case characters.
2) There are "26" upper-case characters.
3) Need ASCII values of the characters.

Algorithm:
----------
1) Make a "Hashing Array" of 256 elemets.
2) Assign each element to be Zero.
3) Go through each element (character) of the given string.
4) Convert each character into "ASCII"
Thus, you will find a value in between "0" and "255".
5) Now, simply insert the values accordingly.
```
**ASCII Table:** [https://www.ascii-code.com/](https://www.ascii-code.com/)

***Pseudo Code:***
```
givenStr;
input(givenStr);

hashArray[256] = {0};

for (i=0; i<givenStr.length; i++){
    charVal = givenStr[i];  //Convert into ASCII
    hashArray[charVal]++;
}

ch;
input(ch);
chVal = ch; //Convert into ASCII
print(hashArray[chVal])
```

----------
### Back to Number Hashing Problem:

```
Problem: A Hashing Array can't take more that 10^7 elements even if you declare the array Globally.

Solution:
---------
Use STL (in C++) --> Map, Unordered Map.
Use Collection (Java) --> HashMap.
```

#### Example:
```
arr = [1, 2, 3, 1, 2, 3, 12]

To store, we will use --> Map --> Ordered --> Sorted
We can also use --> unordered_map --> unordered --> Unsorted

   (int)  (int)
     |      |
map<key, value>
     |      |
 (Number) (Frequency)

Now (How Map Works):
---------------------

=======================
| 1, 2, 3, 1, 2, 3, 12|
==^====================

|      |
|1 -> 1|
|------|

=======================
| 1, 2, 3, 1, 2, 3, 12|
=====^=================

|2 -> 1|
|1 -> 1|
|------|

=======================
| 1, 2, 3, 1, 2, 3, 12|
========^==============

|3 -> 1|
|2 -> 1|
|1 -> 1|
|------|

=======================
| 1, 2, 3, 1, 2, 3, 12|
===========^===========

|3 -> 1|
|2 -> 1|
|1 -> 2|
|------|

=======================
| 1, 2, 3, 1, 2, 3, 12|
==============^========

|3 -> 1|
|2 -> 2|
|1 -> 2|
|------|

=======================
| 1, 2, 3, 1, 2, 3, 12|
=================^=====

|3 -> 2|
|2 -> 2|
|1 -> 2|
|------|

=======================
| 1, 2, 3, 1, 2, 3, 12|
=====================^=

|12-> 1|
|3 -> 2|
|2 -> 2|
|1 -> 2|
|------|

Map takes way less elements than a Hashing Array. How?
-> In Hashing Array, you would have to make an Array of 12 elements to store the frequency of 12 Numbers.
-> While in Map, you only have to store the frequency of the required and existing numbers.
```

***Learn More (Map):*** [https://www.geeksforgeeks.org/cpp/map-associative-containers-the-c-standard-template-library-stl/](https://www.geeksforgeeks.org/cpp/map-associative-containers-the-c-standard-template-library-stl/)

***Time Complexity: [MAP]***
```
Storing  | --> (Best, Average, Worst all Case) --> (logN) 
Fetching |
```

***Time Complexity: [Unordered-MAP]***
```
Storing  | --> (Best, Average Case)= (1) | --> (Worst Case)= (N)
Fetching |

BigO(N) => N -> Number of Elements in the Map
And, In Unordered Map, worst case rarely happen.
But if the Worst Case happens anyway, the Time Complexity of the whole Code becomes: O(N^2)

So, Remember:
-------------
First --> Use Unordered_Map
(If it shows "Time Limit Exceeded" Error,)
Then --> Use Map

For Unordered_map:
-------------------
Worst Case happens very rarely. And it happens when there is an internal Collision.

** But what do you mean by Collision? ** --> Will Understand Later.
```

### Internal Working of Map:
*(Explain Collision)*

```
Map is implemented in a very complex way. You don't need to know it. But in the interviews sometimes they ask about the "Division Method".

Map might be using any of these Hashing Methods:
1) Division Method --> Needed --> (Linear Chaining)
2) Folding Method --> Not needed
3) Mid Square Method --> Not needed
```

#### Division Method:
```
Let's Imagine:
--------------
You have the following Array and You can not have more than "10" elements in the "Hashing Array".

Array:
------
===================
|2, 5, 16, 28, 139|
===================

Hash Array:
-----------
===============================
|  |  |  |  |  |  |  |  |  |  |
===============================
 0  1  2  3  4   5  6  7  8  9

Here:
-----
1) Find the modulus (%) for each of the elements in Array dividing by "10". (2%10 = 2 | 139%10 = 9)
2) In the HashArray, set the value of the index that matches the modulus value to be 1. (hashArray[modulusValue])

2%10 = 2
5%10 = 5
16%10 = 6
28%10 = 8
139%10 = 9

===============================
|  |  |1 |  |  |1 |1 |  |1 |1 |
===============================
 0  1  2  3  4   5  6  7  8  9

If asked, How many times "139" appears, you first need to find the Modulus of 139 and then find the index in the HashArray.

Now (What if multiple elements have same modulus value):
--------------------------------------------------------
Array:
------
===================================
|2, 5, 16, 28, 139, 38, 48, 28, 18|
===================================

0 -> 
1 -> 
2 -> 2
3 -> 
4 -> 
5 -> 5
6 -> 16
7 -> 
8 -> 18 -> 28 -> 28 -> 38 -> 48  [Liner Chaining] [Sorted]
9 -> 139

If asked to find out how many times "28" appears,
first find the modulus of "28" which is "8", then find from the "8"th index using a searching Algorithm.

Now Imagine an Array where all the elements have the same Modulus value:
---------------------------------------
=====================================
|8, 18, 28, 38, 48, 58, 68, 78, 1008|
=====================================

0 -> 
1 -> 
2 -> 
3 -> 
4 -> 
5 -> 
6 -> 
7 -> 
8 -> 18 -> 28 -> 38 -> 48 -------> 1008
9 -> 

If the Array has many more elements like 10^10 or 10^18 elements and all have the same Modulus value --> Collision happens.
And in that Case, The Time Complexity of the Unordered_Map becomes BigO(N).
```