# Data Structure and Algorithm 

#### Inclusions:
1. Theoretical Understanding of the Data Structures and Algorithms.
2. Pseudo Code Implementation.
3. Implementation using C++.
4. Extra reading material resources. (if needed).

### Core Resources:

***Strives A2Z DSA Course:*** [https://takeuforward.org/dsa/strivers-a2z-sheet-learn-dsa-a-to-z](https://takeuforward.org/dsa/strivers-a2z-sheet-learn-dsa-a-to-z)


# Summary:

## Hashing

Hashing is a technique to **pre-store or quickly fetch information**.  
It is widely used to count frequencies, check presence, or implement fast lookup for numbers and characters.


| Type | Method | Time Complexity | Space Complexity | Notes |
|------|--------|----------------|-----------------|-------|
| **Number Hashing (Array)** | Pre-store counts in an array indexed by the number | Build: O(n) Fetch: O(1) | O(maxVal) | Limited by array size; works for small ranges |
| **Character Hashing** | Use ASCII value as index in a fixed array of 256 | Build: O(n) Fetch: O(1) | O(256) ≈ O(1) | For strings; handles all ASCII characters |
| **Map (Ordered)** | Store key-frequency pairs in a map | Insert/Fetch: O(log n) | O(n) | Maintains sorted order of keys |
| **Unordered Map (Hash Map)** | Store key-frequency pairs in a hash table | Avg: O(1), Worst: O(n) | O(n) | Fastest in practice; worst-case collision rare |


#### 📝 Notes

- **Number Hashing Array:**  
  - Use when numbers are small (≤10^7).  
  - Index represents the number, value represents frequency.
- **Character Hashing:**  
  - Use an array of size 256.  
  - Convert each char to ASCII and increment frequency in the array.
- **Map vs Unordered Map:**  
  - `Map` → Sorted keys, log(n) insert/find.  
  - `Unordered Map` → Unsorted keys, avg O(1) insert/find. Rare worst-case O(n).
- **Collision:**  
  - Happens when multiple keys hash to same index.  
  - Resolved via **Linear Chaining** or other hashing techniques.
- **Division Method Example:**  
  - Hash index = key % array_size.  
  - If multiple elements map to same index, store them in a list (chaining).

#### 🔹 When to Use

- **Array Hashing:** Small, bounded numbers.  
- **Character Hashing:** Strings and ASCII chars.  
- **Map/Unordered Map:** Large numbers, unknown range, or when you need key-value mapping.  
- **Unordered Map:** Use first; switch to Map only if worst-case collision is a concern.

#### 📌 Key Takeaways

- Hashing reduces repeated computation from O(n*m) → O(n) or O(1) fetch.  
- Arrays are fastest for small ranges; Maps handle large or sparse data efficiently.  
- Collision is rare with good hash functions but must be understood for interview questions.


## Sorting Algorithms


| Name | Method | Time Complexity | Space Complexity |
|------|--------|----------------|------------------|
| **Selection Sort** | Find the smallest element and swap it to the front | **Best:** O(n²)   **Average:** O(n²)   **Worst:** O(n²) | **O(1)** |
| **Bubble Sort** | Swap adjacent elements to push the largest element to the end | **Best:** O(n) *(optimized)*   **Average:** O(n²)   **Worst:** O(n²) | **O(1)** |
| **Insertion Sort** | Take one element at a time and insert it into its correct position | **Best:** O(n)   **Average:** O(n²)   **Worst:** O(n²) | **O(1)** |
| **Merge Sort** | Divide the array into halves, sort them, and merge them back | **Best:** O(n log n)   **Average:** O(n log n)   **Worst:** O(n log n) | **O(n)** |
| **Quick Sort** | Pick a pivot, place it correctly, and partition smaller/larger elements around it | **Best:** O(n log n)   **Average:** O(n log n)   **Worst:** O(n²) | **Best/Average:** O(log n)   **Worst:** O(n) |

---

#### 📝 Quick Notes

- **Selection Sort** is simple but always takes **O(n²)** time.
- **Bubble Sort** is easy to understand and can be optimized for already sorted arrays.
- **Insertion Sort** is efficient for **small** or **nearly sorted** arrays.
- **Merge Sort** is fast and consistent, but needs **extra memory**.
- **Quick Sort** is usually very fast in practice, but its **worst case is O(n²)** if the pivot is poor.


#### 📌 Best Use Cases

- **Selection Sort** → When simplicity matters more than speed
- **Bubble Sort** → For learning sorting basics
- **Insertion Sort** → Small datasets / nearly sorted arrays
- **Merge Sort** → Stable and guaranteed fast sorting
- **Quick Sort** → Fast practical sorting for many real-world cases

