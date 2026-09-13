# Maximum Sum Fixed Window

> **Difficulty**: 🟢 Easy &nbsp;|&nbsp; **Language**: C++

---

## Problem Statement

You are provided with a sequence of integers `values` of length `n` and an integer `k`.

Only contiguous subarrays containing exactly `k` elements are considered.

Determine the largest total among all such subarrays.

**Example 1:**

**Input:**

```
n = 7
values = [4, 2, 7, 1, 8, 3, 6]
k = 3
```

**Output:**

```
17
```

**Explanation:**

- The subarray `[8, 3, 6]` has a total of `17`, and no other contiguous subarray of length `3` has a greater total.

**Example 2:**

**Input:**

```
n = 6
values = [-5, 4, 2, -1, 3, 1]
k = 2
```

**Output:**

```
6
```

**Explanation:**

- The subarray `[4, 2]` produces `6`, which is the maximum total among all contiguous subarrays of size `2`.

**Your Task**

- Complete the provided `bestFixedWindowSum` function that takes `values` and `k` and returns the maximum total of any contiguous subarray of size `k`.

**Constraints**

- `1` ≤ `k` ≤ `n` ≤ `10^3`

- `-100` ≤ `values[i]` ≤ `100`

**Input Format**

- The first line contains an integer `n`, the number of elements in `values`.

- The second line contains `n` space-separated integers representing `values`.

- The third line contains an integer `k`, the exact size of the contiguous subarray.

**Output Format**

- The output is a single integer representing the maximum total among all contiguous subarrays of length `k`.

---

## My Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    int bestFixedWindowSum(vector<int>& values, int k) {
        int totalSum = 0;
        for (int i = 0; i < k; i++){
            totalSum += values[i];
        }
        
        int maxSum = totalSum;
        
        for (int i = k; i < values.size(); i++){
            totalSum += values[i] - values[i - k];
            maxSum = max(totalSum, maxSum);
        }
        
        return maxSum;
        
    }
};  
```

---

*Auto-synced by AkiStack on · 13 September 2026*
