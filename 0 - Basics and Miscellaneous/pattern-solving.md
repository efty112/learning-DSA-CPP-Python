# Pattern Solving
#### (Use Nested Loop to solve patterns.)

#### What is a pattern?
```
*******
*******
*******
*******


*******
******
*****
****
***
**
*

These are patterns. We will have to solve (create) these patterns by writing programs.
```

***Steps to Keep in mind:***

1. For the Outer Loops, Count the number of Rows / Lines.
2. For the Inner Loops, Focus on the Columns and connect them to the Rows (somehow).
3. Whatever you are printing, print them inside the inner Loop.
4. Observe Symmetry [Optional]

------

### Pattern-1:
```
* * * *
* * * *
* * * *
* * * *

4 Rows and 4 Columns. And each "Row" has 4 Elements.
```

**Pseudo Code:**
```
for (row=0; row<4; row++)
   for (col=0; col<4; col++)
      print(*)
   print(/n)
```

----
### Pattern-2:
```
* 
* * 
* * * 
* * * *
* * * * *

5 Rows and 5 Columns.
For;
1st Row = 1 column would hold element
2nd Row = 2 columns would hold elements
3rd Row = 3 columns would hold elements
4th Row = 4 columns would hold elements
5th Row = 5 columns would hold elements

Number of Columns that would be containing elements for each row is the position of the Row.
```

**Pseudo Code:**
```
for (row=0; row<5; row++)
   for (col=0; col<=row; col++)
      print(*)
   print(/n)
```

#### Now Solve These: [Do it Yourself]

```
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
```

------
### Pattern-3:

```
* * * * * *
* * * * *
* * * *
* * *
* *
*

6 Rows and 6 Columns. => Number of Row = n = 6

1st Row = 6 Columns contain elements = n-1+1
2nd Row = 5 Columns contain elements = n-2+1
3rd Row = 4 Columns contain elements = n-3+1
4th Row = 3 Columns contain elements = n-4+1
5th Row = 2 Columns contain elements = n-5+1
6th Row = 1 Columns contain elements = n-6+1


```

**Pseudo Code:**
```
for (row=0; row<6; row++)
   for (col=6; col>row; col--)
      print(*)
   print(\n)

Alternative:
------------
n = 6;
for (row=1; row<=n; row++)
   for (col=0; col<n-row+1; col++)
      print(*)
   print(/n)

```

#### Now Solve These: [Do it Yourself]

```
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
```
--------
### Pattern-4:

```
     *  
    ***
   *****
  *******
 *********
***********
6 Rows and 11 Columns.
=> Number of Row = n = 6
=> Number of Column = 2*n-1 = 11

1st Row = 5 Spaces | 1 Star  | 5 Spaces
2nd Row = 4 Spaces | 3 Stars | 4 Spaces
3rd Row = 3 Spaces | 5 Stars | 3 Spaces
4th Row = 2 Spaces | 7 Stars | 2 Spaces
5th Row = 1 Spaces | 9 Stars | 1 Spaces
6th Row = 0 Spaces | 11 Stars| 0 Spaces

=> (n-row) Space | (2*row-1) Stars
```

**Pseudo Code:**
```
n=6;
for (row=0; row<n; row++)
   // Space
   for (space=0; space<n-row-1; space++) print (" ")

   // Star
   for (star=0; star<2*row+1; star++) print(*)

   // Space
   for (space=0; space<n-row-1; space++) print (" ")

   print (\n)
```