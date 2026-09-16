# Balanced Parenthesis

> **Difficulty**: 🟢 Easy &nbsp;|&nbsp; **Language**: C++

---

## Problem Statement

Given a string `s` consisting solely of the characters `(`, `)`, `{`, `}`, `[` and `]`, check if the string forms a valid sequence of brackets.

A sequence is considered valid if:

- Every opening bracket has a matching closing bracket of the same type.
- Brackets are closed in the correct order.
- Each closing bracket has a corresponding opening bracket of the same type.


**Example 1:**

**Input:**

```
s = “{}()[]”
```
**Output:**

```
true
```

**Explanation:**

- All brackets are correctly matched and nested in the proper order.


**Example 2:**

**Input:**

```
s = “(){[{}])”
```
**Output:**

```
false
```
**Explanation:**

- The brackets `{` and `)` are not a matching pair.


**Your Task**

- Complete the provided function `balancedParenthesis` that takes one argument:

    - `s`: String

**Constraints:**
 
-  `1` <= `s.length`  <= `1000`

- The string `s` contains only the characters `(`, `)`, `[`, `]`, `{`, and `}`.


**Input Format:**

- A single line consists of string `s` consisting of characters `(`, `)`, `{`, `}`, `[` and `]`.

**Output Format:**

- A single line containing `true` if the string has balanced parentheses, otherwise `false`.

---

## My Solution

```cpp
#include<bits/stdc++.h>
using namespace std;


class solution {
public:
    bool balancedParentheses(string s) {
        stack <char> stk;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '(' || s[i] == '{' || s[i] == '['){
                stk.push(s[i]);
            } else if (stk.empty()){
                return false;
            } else {
                if (s[i] == ')' || s[i] == '}' || s[i] == ']'){
                    
                    if ((stk.top() == '(' && s[i] == ')') || (stk.top() == '{' && s[i] == '}') || (stk.top() == '[' && s[i] == ']') ) {
                        stk.pop();
                        continue;
                    } 
                    
                } else if (stk.empty()){
                    return true;
                }
            }
        }
        if (stk.empty()){
            return true;
        } else {
            return false;
        }
    }
};
```

---

*Auto-synced by AkiStack on · 16 September 2026*
