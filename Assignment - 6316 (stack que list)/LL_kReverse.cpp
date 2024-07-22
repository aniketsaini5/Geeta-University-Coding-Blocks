// Given a head to Linked List L, write a function to reverse the list taking k elements at a time. Assume k is a factor of the size of List.

// You need not have to create a new list. Just reverse the old one using head.

// Input Format
// The first line contains 2 space separated integers N and K

// The next line contains N space separated integral elements of the list.

// Constraints
// 0 <= N <= 10^6 0 <= K <= 10^6

// Output Format
// Display the linkedlist after reversing every k elements

// Sample Input
// 9 3
// 9 4 1 7 8 3 2 6 5
// Sample Output
// 1 4 9 3 8 7 5 6 2
// Explanation
// N = 9 & K = 3

// Original LL is : 9 -> 4 -> 1 -> 7 -> 8 -> 3 -> 2 -> 6 -> 5

// After k Reverse : 1 -> 4 -> 9 -> 3 -> 8 -> 7 -> 5 -> 6 -> 2

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

class LinkedList {  
public:  
    node* head;  
    node* tail;  

    LinkedList() {  
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

    void print(node* head) {  
        node* temp = head;  
        while (temp != NULL) {  
            cout << temp->data << " ";  
            temp = temp->next;  
        }  
        cout << endl;  
    }  

    // Function to reverse k nodes  
    node* reverseK(node* head, int k) {  
        if (head == NULL) return NULL;  

        node* curr = head;  
        node* prev = NULL;  
        node* next = NULL;  
        int count = 0;  

        while (curr != NULL && count < k) {  
            next = curr->next;  
            curr->next = prev;  
            prev = curr;  
            curr = next;  
            count++;  
        }  

        // next is now pointing to (k+1)th node  
        if (next != NULL) {  
            // Recursively call for the list after the k nodes  
            head->next = reverseK(next, k);  
        }  

        // prev is new head of the reversed list  
        return prev;  
    }  
};  

int main() {  
    LinkedList lst;  
    int n, k;  
    cin >> n >> k;  

    for (int i = 0; i < n; i++) {  
        int val;  
        cin >> val;  
        lst.insert(val);  
    }  

    node* ans = lst.reverseK(lst.head, k);  
    lst.print(ans);  


    return 0;  
}