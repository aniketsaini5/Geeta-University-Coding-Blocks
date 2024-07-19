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
