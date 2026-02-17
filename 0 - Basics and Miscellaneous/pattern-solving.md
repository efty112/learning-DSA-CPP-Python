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

----------------------
### Pattern-5:

```
***********
 *********
  *******
   *****
    ***
     *
6 Rows and 11 Columns.
=> Number of Row = n = 6
=> Number of Column = nc = 2*n-1 = 11

1st Row = 0 Spaces | 11 Star | 0 Spaces
2nd Row = 1 Spaces | 9 Stars | 1 Spaces
3rd Row = 2 Spaces | 7 Stars | 2 Spaces
4th Row = 3 Spaces | 5 Stars | 3 Spaces
5th Row = 4 Spaces | 3 Stars | 4 Spaces
6th Row = 5 Spaces | 1 Stars | 5 Spaces

=> (row-1) space | 2*(n-row)+1 Stars
```
**Pseudo Code:**
```
n=6;
for (row=0; row<n; row++)
   // Space
   for (space=0; space<row; space++) print (" ")

   // Star
   for (star=0; star<2*(n-row)-1; star++) print(*)

   // Space
   for (space=0; space<row; space++) print (" ")

   print (\n)
```
-----------
### Pattern-6:
```
     *  
    ***
   *****
  *******
 *********
***********
***********
 *********
  *******
   *****
    ***
     *
```

**Pseudo Code:**
```
First Print => Pattern 4
Then Print => Pattern 5
```

---------
### Pattern-7:
```
* 
* * 
* * * 
* * * *
* * * * *
* * * *
* * *
* *
*

Number of Rows => n=9;
Middle = (n+1) / 2;

1st Row = 1 Star
2nd Row = 2 Stars
3rd Row = 3 Stars
4th Row = 4 Stars
5th Row = 5 Stars
[1st Row to 5th Row (Mid Row) --> Row Number = Star Number]

6th Row = 4 Stars
7th Row = 3 Stars
8th Row = 2 Stars
9th Row = 1 Stars

[6th Row to 9th Row --> (MidRow*2) - row = Star Number]
```

**Pseudo Code:**
```
n;
midRow = (n+1)/2;

for (row=0; row<n row++)
   if (row < midRow)
      for (s=0; s<=row; s++)
          print(*)
      print (\n)
   else
      for (s=0; s<((midRow*2) - row - 1); s++)
          print(*)
      print(\n)
```

---------
### Pattern-8:
```
1 
0 1 
1 0 1 
0 1 0 1
1 0 1 0 1

Follow "Pattern 2"
```

**Pseudo Code:**
```
start = 1;
for (row=0; row<5; row++)
   if(row%2 == 0) start = 1;
   else start = 0;

   for (col=0; col<=row; col++)
      print(start)
      start = 1 - start;
   print(/n)
```
---------
### Pattern-9:
```
1             1
1 2         2 1
1 2 3     3 2 1
1 2 3 4 4 3 2 1

Number of Rows => n = 4
Number of Columns => n*2 = 8

Number Amount => 2*row
Space Amount => col - 2*row

1st Row = 1 Number | 6 Spaces | 1 Number
2nd Row = 2 Numbers| 4 Spaces | 2 Numbers
3rd Row = 3 Numbers| 2 Spaces | 3 Numbers
4th Row = 4 Numbers| 0 Spaces | 4 Numbers
      (1 to Row Number)      (Row Number to 1)
```

**Pseudo Code:**
```
n;
for (row=1; row<=n; row++)
   for (num=1; num<=row; num++)
       print(num);

   for (space=1; space<= (2*(n-row)); space++)
       print(" ");

   for (num=row; num > 0; num--)
       print(num);
   print(\n)
``` 
