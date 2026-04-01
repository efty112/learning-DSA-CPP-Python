# Stack and Queue (Theory)

### Stack
```
Stack is a Data Structure that holds a certain kind of data and follows the "LIFO" mechanism.

LIFO=> Last In Fast Out => Element that enters Last, exits Fast.

Stack provides you with 4 different functions:
1) push(x)
2) pop()
3) top() -> get the top most element of the data structure.
4) size() -> get the size.

Simply:
=======
[<--] <-- Elements enter this way
[-->] --> Elements exit this way

While Pushing (e1),(e2),(e3) --> [e1, e2, e3]
While Poping --> [e1, e2] then [e1] then []

Example:
========

Empty Stack: |       |

Commands: push(1), push(2), push(3), push(4), pop(), pop(), top(), push(5), top(), size()

push(1), push(2), push(3), push(4)
--> |1, 2, 3, 4|

pop(), pop()
--> |1, 2|

top() --> 2

push(5)
-->  |1, 2, 5|

top() --> 5
size() --> 3
```

### Queue
```
Queue is a Data Structure that holds a certain kind of data and follows the "FIFO" mechanism.

FIFO=> Fast In Fast Out => Element that enters Fast, exits Fast.

Queue provides you with 4 different functions:
1) push(x)
2) pop()
3) top() -> get the top most element of the data structure.
4) size() -> get the size.


Simply:
=======
[<--] <-- Elements enter this way
[<--] <-- Elements exit this way

While Pushing (e1),(e2),(e3),(e4) --> [e1, e2, e3, e4]
While Poping --> [e2, e3, e4] then [e3, e4] then [e4] then []

Example:
========

Empty Stack: |       |

Commands: push(1), push(2), push(3), push(4), pop(), pop(), top(), push(5), top(), size()

push(1), push(2), push(3), push(4)
--> |1, 2, 3, 4|

pop(), pop()
--> |3, 4|

top() --> 3

push(5)
-->  |3, 4, 5|

top() --> 3
size() --> 3
```

### Implementation:
```
Implement using Arrays:
=======================
In almost every languages, there is a Built-In a library for Stack and for Queue.

In C++:
--------
1) Stack: stack<int> st --> Here, st--> variable name
2) Queue: queue<int> qe --> Here, qe --> variable name

Usage:
------
st.push(x), st.pop(), st.top(), st.size()
qe.push(x), qe.pop(), qe.top(), qe.size()
```

#### Inside of the library, how are the Stacks and Queues implemented? [Internal Working]

```
Stack Using Array:
==================
We will have to assume a size of the Array in the Beginning.
Let's say, the Array Size is: 10.

int arr[10];

 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
[                            ]

First, you take a variable --> "top = -1"
When, push(x) --> top++ --> arr[top] = x
When, pop() --> top--
When, top() --> arr[top]
When, size --> top+1

Example:
========

 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
[                            ]

"top = -1"
=> push(4) --> top++ --> top=0 --> arr[0] = 4
=> push(9) --> top++ --> top=1 --> arr[1] = 9
=> push(1) --> top++ --> top=2 --> arr[2] = 1

 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
[4  9  1                     ]
       ^
      Top

"top = 2"
=> pop() --> top-- --> top=1
=> top() --> arr[top] = arr[1] --> 9

 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
[4  9  1                     ]
    ^
   Top

"top = 1"
=> size() --> top+1 = 1+1 = 2


Code: (Stack Implementation Under The Hood)
===========================================
Follow => "1-stack-uTheHood.cpp"

Complexity:
===========
Each of the Operations has a Time Complexity of => O(1)
So, Entire Time Complexity => O(1)

Space Complexity => O(sizeOfArray)

=========================================
=========================================

Queue Using Array:
==================
Let's say, the Array Size is: 4.
int arr[4];

 0 1 2 3
[ , , , ]

{currentSize=0 | start=-1 | end=-1}
Push(3) --> {currentSize <= size?} --> Yes --> start=end=-1? --> yes ==> start++ | end++ --> arr[end] = 3 | currentSize++

 0 1 2 3
[3, , , ]

{currentSize=1 | start=0 | end=0}
Push(2) --> {currentSize <= size?} --> Yes ==> end++ --> arr[end] = 2 --> currentSize++

 0 1 2 3
[3,2, , ]

{currentSize=2 | start=0 | end=1}
Push(4) --> {currentSize <= size?} --> Yes ==> end++ --> arr[end] = 4 --> currentSize++

 0 1 2 3
[3,2,4, ]

{currentSize=3 | start=0 | end=2}
top() --> arr[start] = arr[0] = 3
pop() --> currentSize>0? --> Yes --> start++ --> currentSize--

{currentSize=2 | start=1 | end=2}
pop() --> currentSize>0? --> Yes --> start++ --> currentSize--

{currentSize=1 | start=2 | end=2}
Push(2) --> {currentSize <= size?} --> Yes ==> end++ --> arr[end] = 2 | currentSize++

 0 1 2 3
[3,2,4,2]
     ^ ^
 Start End

{currentSize=2 | start=2 | end=3}
Push(4) --> {currentSize <= size?} --> Yes
=> end++ --> {end<size? --> No} --> end= (end+1)%size = 0
=> arr[end] = arr[0] = 4
=> currentSize++

 0 1 2 3
[4,2,4,2]
 ^   ^
End  Start

{currentSize=3 | start=2 | end=0}
pop() --> currentSize>0? --> Yes --> start++ --> currentSize--

 0 1 2 3
[4,2,4,2]
 ^     ^
End    Start

{currentSize=2 | start=3 | end=0}
pop() --> currentSize>0? --> Yes --> start++ --> currentSize--

 0 1 2 3
[4,2,4,2]
 ^        ^
End      Start

{currentSize=1 | start=4 | end=0}
=> {start<size? --> No} --> start= start%size = 0


{currentSize=1 | start=0 | end=0}

 0 1 2 3
[4,2,4,2]
^^       

pop() --> currentSize>0? --> yes --> currentSize=1? --> yes --> start=end=-1 --> currentSize--

{currentSize=0 | start=-1 | end=-1}

```