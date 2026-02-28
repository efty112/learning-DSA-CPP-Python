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