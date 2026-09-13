# Prefix Sum Array

> **Difficulty**: 🟢 Easy &nbsp;|&nbsp; **Language**: C++

---

## Problem Statement

You are provided with a sequence of integers `values` of length `n`.

Construct its prefix-total sequence `prefix`, where the entry at index `i` stores the cumulative total of all elements from index `0` through index `i`, inclusive.

Thus, `prefix[0] = values[0]`.

For every `1 ≤ i < n`, `prefix[i] = prefix[i - 1] + values[i]`.

Determine the resulting prefix sequence.

**Example 1:**

**Input:**

```
n = 5
values = [3, 1, 7, 0, 4]
```

**Output:**

```
3 4 11 11 15
```

**Explanation:**

- `prefix[0]` is `3`.

- As you move from left to right, the cumulative totals become `4`, `11`, `11`, and `15`.

**Example 2:**

**Input:**

```
n = 6
values = [-2, 5, -1, 6, -3, 2]
```

**Output:**

```
-2 3 2 8 5 7
```

**Explanation:**

- Each position stores the total of all values up to that index.

- Beginning with `-2`, the next running totals are `3`, `2`, `8`, `5`, and `7`.

**Your Task**

- Complete the provided `buildPrefixTotals` function that takes `values` and `n` and returns the required prefix sequence.

**Constraints**

- `1` ≤ `n` ≤ `10^4`

- `-10^4` ≤ `values[i]` ≤ `10^4`

**Input Format**

- The first line contains an integer `n`, the number of elements in the sequence.

- The second line contains `n` space-separated integers representing `values`.

**Output Format**

- Output consists of `n` space-separated integers on a single line, representing the prefix totals in left-to-right order.

---

## My Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    vector<int> buildPrefixTotals(vector<int>& values, int n) {
        
        vector<int> v(n, 0);
        
        v[0] = values[0];
        
        for (int i = 1; i < n; i++){
            v[i] = values[i] + v[i - 1];
        }
        return v;
    }
};
```

---

*Auto-synced by AkiStack on · 13 September 2026*
