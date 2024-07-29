// Implement a Queue using two stacks Make it Dequeue efficient.

// Input Format
// Enter the size of the queue N add 0 - N-1 numbers in the queue

// Constraints
// Output Format
// Display the numbers in the order they are dequeued and in a space separated manner

// Sample Input
// 5
// Sample Output
// 0 1 2 3 4

#include <bits/stdc++.h>
using namespace std;

class Queue {
public:
    stack<int> s1, s2;

    void enqueue(int val) {
        s1.push(val);
    }

    int dequeue() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if (s2.empty()) {
            return INT_MIN;
        }
        int front = s2.top();
        s2.pop();
        return front;
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main() {
    Queue q;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        q.enqueue(i);
    }

    while (!q.empty()) {
        cout << q.dequeue() << " ";
    }

    return 0;
}
