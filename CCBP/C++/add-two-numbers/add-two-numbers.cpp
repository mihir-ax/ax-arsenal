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
