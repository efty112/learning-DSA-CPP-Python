# Recursion:

```
Recursion: When a Function Calls itself until a specified condition is met.

Base Condition: The Condition that forces the Recursion process to be stopped, is called the Base Condition.
```

## Infinite Recursion 

**Example:** (No base Condition)
```bash
void function(){
    print(1);
    function()
}

main()
{
   function();
}
```

**Here:**
```
calling the function inside "main" function [function()]
|
| --> print(1) --> then calls the "function" itself
|
| --> print(1) --> calls the "function" itself again

(And it keeps going.......)
```
It keeps on going until it **runs out of memory** and throw a **Segmentation Error** --> **Stack Overflow**

#### Inside of the Memory:
```
    (Memory)
|             |
|   f() -> 1  |
|   f() -> 1  |
|   f() -> 1  |
|   f() -> 1  |
|   f() -> 1  |
|=============|
```
------------
## Finite Recursion 

**Example:** (Has Base Condition)
```bash
count = 0;

void function(){
    if(count == 3) return;
    print(count);
    count++;
    function()
}

main()
{
   function();
}
```

**Here:**
```
calling the function inside "main" function [function()]
|
| -->Check Condition --False--> print(0) --> count=1 --> Calls itself [function()]
|
| --> Check Condition --False--> print(1) --> count=2 --> Calls itself [function()]
|
| --> Check Condition --False--> print(2) --> count=3 --> Calls itself [function()]
|
| --> Check Condition --True--> Return from the Function

[The Function Breaks!]
```

#### Inside of the Memory:
```
    (Memory)
    (Staking)
|             |
|             |
|   f() -> 2  |
|   f() -> 1  |
|   f() -> 0  |
|=============|

(After returning last function)
|             |
|             |
|             |
|   f() -> 1  |
|   f() -> 0  |
|=============|

(After returning 2nd last function)
|             |
|             |
|             |
|             |
|   f() -> 0  |
|=============|

(After returning 3rd last function)
|             |
|             |
|             |
|             |
|             |
|=============|
```

### Recursion Tree:
```
For the Finite Recursion:

f() --> f() --> f() --> f()
 |<------|<-------|<-----| 
```