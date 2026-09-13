# Add Two Numbers

> **Difficulty**: 🟡 Medium &nbsp;|&nbsp; **Language**: C++

---

## Problem Statement

You are given two non-negative numbers, `a` and `b`, each represented as a linked list. Your task is to calculate the sum of these two numbers and return the `head` of the linked list representing the sum.

**Note:** The linked lists store digits in reverse order, with each node containing a single digit, from the least significant digit to the most significant digit.

**Example 1:**

- Given two linked lists:

  ![Linked List Before Addition](https://new-assets.ccbp.in/frontend/content/dsa/Add2LLCQE1Input.png)

- After addition, the sum linked list is:

  ![Modified Linked List After Addition](https://new-assets.ccbp.in/frontend/content/dsa/Add2LLCQE1Output.png)

**Example 2:**

- Given two linked lists:

  ![Linked List Before Addition](https://new-assets.ccbp.in/frontend/content/dsa/Add2LLCQE2Input.png)

- After addition, the sum linked list is:

  ![Modified Linked List After Addition](https://new-assets.ccbp.in/frontend/content/dsa/Add2LLCQE2Output.png)

**Your Task:**

- Complete the provided `addTwoNumbers` function to return the `head` of the linked list representing the sum.
- The `addTwoNumbers` function takes two parameters:
    - `head1`, a pointer to the head of the first linked list.
    - `head2`, a pointer to the head of the second linked list.

**Constraints**:

- `1` ≤ `m`,`n` ≤ `3000`

- `0` ≤ `data` ≤ `9`

**Input Format:**

- The first line contains two integers, `m` and `n`, representing the number of nodes in the first and second linked lists, respectively.

- The second line consists of `m` space-separated integers representing the digits of the first linked list.

- The third line consists of `n` space-separated integers representing the digits of the second linked list.

**Output Format:**

- The output is a single line containing the elements of the resulting linked list after adding the two numbers, space-separated.

---

## My Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

/*
class Node {
    public:
        int data;
        Node* next;
    public:
        Node(int value, Node* address){
            data = value;
            next = address;
        }
    public:
        Node(int value){
            data = value;
            next = NULL;
        }
    public:
        Node(){
            data = 0;
            next = NULL;
        }
};
*/

class solution {
  public:
    Node *addTwoNumbers(Node *head1, Node *head2) {

        if (!head1)
            return head2;
        if (!head2)
            return head1;

        Node *current1 = head1;
        Node *current2 = head2;
        Node *fake = new Node(0);
        Node *fakeCurrent = fake;
        int carry = 0;

        while (current1 != nullptr && current2 != nullptr) {
            int data = carry + current1->data + current2->data;
            carry = 0;

            current1 = current1->next;
            current2 = current2->next;

            if (data >= 10) {
                int digit = data % 10;
                carry = data / 10;

                Node *temp = new Node(digit);
                fakeCurrent->next = temp;
                fakeCurrent = temp;
            } else {
                Node *temp = new Node(data);

                fakeCurrent->next = temp;
                fakeCurrent = temp;
            }
        }

        if (current1 != nullptr) {
            while (current1 != nullptr) {
                int data = current1->data + carry;
                carry = 0;
                if (data >= 10) {
                    int digit = data % 10;
                    carry = data / 10;
                    Node *temp = new Node(digit);
                    fakeCurrent->next = temp;
                    fakeCurrent = temp;
                } else {
                    Node *temp = new Node(data);
                    fakeCurrent->next = temp;
                    fakeCurrent = temp;
                }
                current1 = current1->next;
            }
        }

        if (current2 != nullptr) {
            while (current2 != nullptr) {
                int data = current2->data + carry;
                carry = 0;
                if (data >= 10) {
                    int digit = data % 10;
                    carry = data / 10;
                    Node *temp = new Node(digit);
                    fakeCurrent->next = temp;
                    fakeCurrent = temp;
                } else {
                    Node *temp = new Node(data);
                    fakeCurrent->next = temp;
                    fakeCurrent = temp;
                }
                current2 = current2->next;
            }
        }

        if (current1 == nullptr && current2 == nullptr && carry > 0) {
            Node *temp = new Node(carry);
            fakeCurrent->next = temp;
            fakeCurrent = temp;
        }

        return fake->next;
    }
};

```

---

*Auto-synced by AkiStack on · 13 September 2026*
