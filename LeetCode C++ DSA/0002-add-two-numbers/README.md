# 0002. Add Two Numbers

> **Difficulty**: 🟡 Medium &nbsp;|&nbsp; **Language**: C++
>
> **Topics**: `Linked List` · `Math` · `Recursion`

---

## Problem Statement

You are given two **non-empty** linked lists representing two non-negative integers. The digits are stored in **reverse order**, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 

**Example 1:**

![](https://assets.leetcode.com/uploads/2020/10/02/addtwonumber1.jpg)

```
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
```

**Example 2:**

```
Input: l1 = [0], l2 = [0]
Output: [0]
```

**Example 3:**

```
Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
```

 

**Constraints:**

	- The number of nodes in each linked list is in the range `[1, 100]`.

	- `0 <= Node.val <= 9`

	- It is guaranteed that the list represents a number that does not have leading zeros.

---

## Example Test Cases

```
[2,4,3]
[5,6,4]
[0]
[0]
[9,9,9,9,9,9,9]
[9,9,9,9]
```

---

## My Solution

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) { 
        
        // if (!l1) return l2;
        // if (!l2) return l1;
        // if (!l1 && !l2) return nullptr; 
        
        ListNode * l1Current = l1;
        ListNode * l2Current = l2;

        ListNode * sumList = new ListNode(0);
        ListNode * sumCurrent = sumList;

        int carry = 0;

        while (l1Current || l2Current || carry){
            int summ = carry;
            carry = 0;

            if (l1Current){
                summ += l1Current -> val;
                l1Current = l1Current -> next;
            }

            if (l2Current) {
                summ += l2Current -> val;
                l2Current = l2Current -> next;
            }

            if (summ >= 10){
                carry = summ / 10;
                summ = summ % 10;
            }

            ListNode * temp = new ListNode(summ);
            sumCurrent -> next = temp;
            sumCurrent = sumCurrent -> next;
        }

        return sumList -> next;
    }
};
```

---

*Auto-synced by AkiStack on · 14 September 2026*
