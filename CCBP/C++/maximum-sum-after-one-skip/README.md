# Maximum Sum After One Skip

> **Difficulty**: 🟢 Easy &nbsp;|&nbsp; **Language**: C++

---

## Problem Statement

You are given profit records for `n` consecutive days. For each day `i`, the value in `elements` denotes the profit on that day. If a value is negative, it means there was a loss on that day. You must remove exactly one day from the record.

Determine the maximum total profit possible from the remaining days after excluding that one day.

**Example 1:**

**Input:**

```
n = 3 
elements = [1, -2, 3]
```

**Output:**

```
4
```

**Explanation:**

* Excluding the first element gives `-2 + 3 = 1`.

* Excluding the second element gives `1 + 3 = 4`.

* Excluding the third element gives `1 + (-2) = -1`.

* The best choice is to exclude the element with value `-2`, which produces `4`.


**Example 2:**

**Input:**

```
n = 3 
elements = [2, -5, 4, 6, -1]
```

**Output:**

```
11
```

**Explanation:**

- Excluding the second day gives `2 + 4 + 6 + (-1)` = `11`.

- Excluding the fifth day gives `2 + (-5) + 4 + 6` = `7`.

- The best choice is to exclude the day with value `-5`, which produces `11`.

**Your Task**

- Complete the provided `maximizeProfit` function that takes `n` and `elements` and returns the maximum total profit after removing exactly one value.

**Constraints**

- `1` ≤ `n` ≤ `10 ^ 4`

- `-100` ≤ `elements[i]` ≤ `100`

- The total of `n` across all test cases does not exceed `10^5`

**Input Format**

- The first line contains an integer `n`, the number of elements.

- The second line contains `n` space-separated integers representing the daily profit values in `elements`.

**Output Format**

- The output is a single integer representing the maximum total profit obtainable after excluding exactly one day.

---

## My Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    int maximizeProfit(int n, vector<int>& elements) {
        // Write your code here...
        
        int smallest = elements[0];
        if (elements.size() < 1) return smallest;
        
        for (int i = 1; i < elements.size(); i++){
            if (elements[i] < smallest){
                smallest = elements[i];
            }
            elements[i] = elements[i] + elements[i - 1];
        }
        
        return elements[n - 1] - smallest;
    }
};
```

---

*Auto-synced by AkiStack on · 13 September 2026*
