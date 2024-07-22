// Given two numbers represented by two linked lists, write a program that prints the sum list. The sum list is linked list representation of addition of two input numbers in linked lists. It is not allowed to modify the lists. Also, not allowed to use explicit extra space (Use Recursion).

// Input Format
// First line contains N,M, number of nodes in the 1st and 2nd list.
// Next line contains N nodes of 1st list.
// Next line contains M nodes of 2nd list.

// Constraints
// 0<N<10^6

// Output Format
// Print the sum list after adding the two linked lists.

// Sample Input
// 3 3
// 5 6 3
// 8 4 2
// Sample Output
// 1 4 0 5
// Explanation
// After adding the two numbers represented by linked lists i.e. 563 + 842 =1405 is represented as sum list. Sum list =1 -> 4 -> 0 -> 5.

#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node *next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

class linklist {
public:
    node *head;
    node *tail;

    linklist() {
        head = NULL;
        tail = NULL;
    }

    void insert(int val) {
        node *newnode = new node(val);
        if (head == NULL) {
            head = newnode;
            tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    void print(node *head) {
        node *temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    node* reverse(node *head) {
        node *prev = NULL;
        node *curr = head;
        node *next = NULL;

        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    node* sum(node *h1, node *h2) {
        int carry = 0;
        node *dummy = new node(-1);
        node *current = dummy;

        while (h1 != NULL || h2 != NULL || carry != 0) {
            int sum = carry;
            if (h1 != NULL) {
                sum += h1->data;
                h1 = h1->next;
            }
            if (h2 != NULL) {
                sum += h2->data;
                h2 = h2->next;
            }

            carry = sum / 10;
            current->next = new node(sum % 10);
            current = current->next;
        }

        return dummy->next;
    }
};

int main() {
    linklist l1, l2;

    int n, m;
    cin >> n;
    cin >> m;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        l1.insert(val);
    }


    for (int i = 0; i < m; i++) {
        int val;
        cin >> val;
        l2.insert(val);
    }

    node *h1 = l1.reverse(l1.head);
    node *h2 = l2.reverse(l2.head);

    linklist l3;
    node *ans = l3.sum(h1, h2);
    ans = l3.reverse(ans);
    l3.print(ans);

    return 0;
}
