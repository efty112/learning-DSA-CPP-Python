# Sorting - 3:

### Quick Sort:

#### Method:
```
1) Pick up a "Pivot" and Place it to it's correct place where it should be in the Sorted Array.
2) Put all the Elements that are Smaller than the Pivot to the Left Side of the Pivot.
3) Put all the Elements that are Greater than the Pivot to the Right Side of the Pivot.

What to choose as a Pivot?
=> Any of the Elements of the Array.

Refer to: "1-QS-Algo-High-Level.png"
```

#### Algorithm:
```
Refer to: "2-QS-Algo-indepth.png"
```

#### Pseudo-Code:
```
SWAP(val1, val2)
    temp ← val1
    val1 ← val2
    val2 ← temp
END SWAP


QUICKSORT(arr, low, high)

    IF low < high THEN

        i ← low
        j ← high
        pivot ← arr[low]

        WHILE i < j DO

            WHILE arr[i] <= pivot AND i < high DO
                i ← i + 1
            END WHILE

            WHILE arr[j] > pivot AND j > low DO
                j ← j - 1
            END WHILE

            IF i < j THEN
                SWAP(arr[i], arr[j])
            END IF

        END WHILE

        SWAP(arr[low], arr[j])

        partition ← j

        QUICKSORT(arr, low, partition - 1)
        QUICKSORT(arr, partition + 1, high)

    END IF

END QUICKSORT
```

#### Complexity Analysis:
```
Every Time, the Array gets divided into two part and they are not equal parts.
And Partition happens for "N" times.

So, Time Complexity = O(N*logN)

The Program doesn't use any extra space.
So, Space Complexity = O(1)
```