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