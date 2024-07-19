// Given a linked list of length N and an integer K , append the last K elements of a linked list to the front. Note that K can be greater than N.

// Input Format
// First line contains a single integer N denoting the size of the linked list.
// Second line contains N space separated integers denoting the elements of the linked list.
// Third line contains a single integer K denoting the number of elements that are to be appended.

// Constraints
// 1 <= N <= 10^4
// 1 <= K <= 10^4

// Output Format
// Display all the elements in the modified linked list.

// Sample Input
// 7
// 1 2 2 1 8 5 6
// 3
// Sample Output
// 8 5 6 1 2 2 1
// Explanation
// Initially the linked list is
// 1→ 2→ 3 → 4 → 5 → 6→ null
// and k = 2. After appending the last two elements to the front , the new linked list looks like
// 5→ 6→ 1→ 2→ 3 → 4 → null

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

class linkedlist {
private:
    node* head;
    node* tail;
    int size;

public:
    linkedlist() {
        head = NULL;
        tail = NULL;
        size = 0;
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
        size++;
    }

    void k_append(int k) {
        k = k % size;
		
        if (size == 0 || k == 0) return;

        int sp = size - k;
        node* newTail = head;
        for (int i = 1; i < sp; i++) {
            newTail = newTail->next;
        }

        node* newHead = newTail->next;
        newTail->next = NULL;
        tail->next = head;
        head = newHead;
        tail = newTail;
    }

    void printList() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    int n, k;
    cin >> n;  // n input liya hai

    // Object banaya hai linkedlist class ka
    linkedlist list;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        list.insert(val); // list mai values insert ki hai
    }

    cin >> k;

    list.k_append(k); // k elements ko aage move kiya

    list.printList(); // final list print ki

    return 0;
}
