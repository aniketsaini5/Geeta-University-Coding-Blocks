// Given 2 sorted linked lists , merge the two given sorted linked list and print the final Linked List.

// Input Format
// First Line contains T the number of test cases.
// For each test case :
// Line 1 : N1 the size of list 1
// Line 2 : N1 elements for list 1
// Line 3 : N2 the size of list 2
// Line 4 : N2 elements for list 2

// Constraints
// 1 <= T <= 1000
// 0<= N1, N2 <= 10^6
// -10^7 <= Ai <= 10^7

// Output Format
// For each testcase , print the node data of merged linked list.

// Sample Input
// 1
// 4
// 1 3 5 7
// 3
// 2 4 6
// Sample Output
// 1 2 3 4 5 6 7 
// Explanation
// The two lists after merging give the sorted output as [1,2,3,4,5,6,7] .



#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

class linklist {
public:
    node* head;
    node* tail;

    linklist() {
        head = NULL;
        tail = NULL;
    }

    void insert(int val) {
        node* newnode = new node(val);

        if (head == NULL) {
            head = newnode;
            tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    void merge_sorted(linklist& l2) {
        head = merge(head, l2.head);
    }

    node* merge(node* l1, node* l2) {
        if (!l1) return l2;
        if (!l2) return l1;

        if (l1->data < l2->data) {
            l1->next = merge(l1->next, l2);
            return l1;
        } else {
            l2->next = merge(l1, l2->next);
            return l2;
        }
    }

    void print() {
        node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n1, n2;
        cin >> n1;

        linklist ls1;
        for (int i = 0; i < n1; i++) {
            int val;
            cin >> val;
            ls1.insert(val);
        }

        cin >> n2;
        linklist ls2;
        for (int i = 0; i < n2; i++) {
            int val;
            cin >> val;
            ls2.insert(val);
        }

        ls1.merge_sorted(ls2);
        ls1.print();
    }

    return 0;
}
