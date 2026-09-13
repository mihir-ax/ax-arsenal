# Scoreboard After Each Round

> **Difficulty**: 🟢 Easy &nbsp;|&nbsp; **Language**: C++

---

## Problem Statement

You are given an integer `n` representing the number of rounds and an array arr of size `n`, where `arr[i]` represents the points gained by the player in the `i`-th round.

After each round, the scoreboard displays the player’s total points so far.

Return an array scoreboard of size `n`, where `scoreboard[i]` is the total points after completing round `i`.

**Example 1**

**Input:**

```
n = 4
arr = [1, 2, 3, 4]
```

**Output:**

```
1 3 6 10
```

**Explanation:**

* After round 1: total = `1`

* After round 2: total = `1 + 2 = 3`

* After round 3: total = `1 + 2 + 3 = 6`

* After round 4: total = `1 + 2 + 3 + 4 = 10`

So, the scoreboard values are `1, 3, 6, 10`.

**Example 2**

**Input:**

```
n = 5
arr = [5, 0, 2, 1, 3]
```

**Output:**

```
5 5 7 8 11
```

**Explanation:**

* After round 1: total = `5`

* After round 2: total = `5 + 0 = 5`

* After round 3: total = `5 + 0 + 2 = 7`

* After round 4: total = `5 + 0 + 2 + 1 = 8`

* After round 5: total = `5 + 0 + 2 + 1 + 3 = 11`

So, the scoreboard values are `5, 5, 7, 8, 11`.


**Your Task**

* Complete the provided `scoreboardAfterRounds` function, which takes `2` parameters: an integer `n` , and the array `arr` of size `n`.

* Return an array where each element represents the total score after each round.


**Constraints**

* `1` <= `n` <= `10^3`

* `0` <= `arr[i]` <= `10^3`


**Input Format**

* The first line contains an integer `n` representing number of rounds.

* The second line contains `n` integers representing the array `arr`.


**Output Format**

* Returns an integer array of size `n`, where the `i`-th element represents the total score after the `i`-th round.

---

## My Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<int> scoreboardAfterRounds(int n, vector<int>& arr) {
        
        if (arr.size() < 2) return arr;
        for (int i = 1; i < arr.size(); i++){
            arr[i] = arr[i-1] + arr[i];
        }
        
        return arr;
    }
};
```

---

*Auto-synced by AkiStack on · 13 September 2026*
