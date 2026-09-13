# Book Title Prefixes

> **Difficulty**: 🟢 Easy &nbsp;|&nbsp; **Language**: C++

---

## Problem Statement

In a bustling library, a librarian is tasked with organizing books by their titles. To simplify the process, the librarian decides to generate all possible prefixes of each book title. A prefix is defined as the starting portion of a string, ranging from the first character up to the entire string. Your task is to help the librarian by writing a program that generates all prefixes of a given book title.

**Example 1:**

**Input:**

```
title = "b"
```

**Output:**

```
b
```

**Explanation:**

The book title is `"b"`, which has a length of `1`. Therefore, there is only one prefix:

- Prefix of length `1` → `b`

**Example 2:**

**Input:**

```
title = "read"
```

**Output:**

```
r
re
rea
read
```

**Explanation:**

The book title is `"read"`, which has a length of `4`. The prefixes are:

- Prefix of length `1` → `r`

- Prefix of length `2` → `re`

- Prefix of length `3` → `rea`

- Prefix of length `4` → `read`

**Your Task**

- Complete the function `generateTitlePrefixes` that takes a string `title` as input and returns a list of all its prefixes.

**Constraints**

- `1 <= title.length <= 1000`

- `title` consists of lowercase English letters.

**Input Format**

- A single string `title` representing the book title.

**Output Format**

The output is printed as multiple lines:

- Each line contains one prefix of the string, starting from the shortest prefix (length `1`) to the longest prefix (length equal to the length of the string).

---

## My Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<string> generateTitlePrefixes(string title) {
        vector<string> v;
        
        if (title.empty()) return v;
        
        v.push_back(string (1, title[0]));
        
        for (int i = 1; i < title.size(); i++){
           v.push_back(v[i-1] + title[i]);
        }
        
        return v;
        
    }
};
```

---

*Auto-synced by AkiStack on · 13 September 2026*
