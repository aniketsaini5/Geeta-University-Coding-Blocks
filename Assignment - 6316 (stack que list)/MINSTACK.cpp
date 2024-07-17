#include<bits/stdc++.h>
using namespace std;

class MinStack {
private:
    vector<int> stack;
    vector<int> minStack;
public:
    MinStack() {}
    void push(int val) {
        stack.push_back(val);
        if (minStack.empty() || val <= minStack.back()) {
            minStack.push_back(val);
        }
    }
    void pop() {
        if (stack.empty()) {
            return;
        }
        if (stack.back() == minStack.back()) {
            minStack.pop_back();
        }
        stack.pop_back();
    }
    int top() {
        if (stack.empty()) {
            throw out_of_range("Stack is empty");
        }
        return stack.back();
    }
    int getMin() {
        if (minStack.empty()) {
            throw out_of_range("Stack is empty");
        }
        return minStack.back();
    }
};

int main() {
    int n;
    cin >> n;
    vector<string> operations(n);
    for (int i = 0; i < n; ++i) {
        cin >> operations[i];
    }
    MinStack minStack;
    vector<int> pushValues;
    for (int i = 0; i < n; ++i) {
        if (operations[i] == "push") {
            int value;
            cin >> value;
            pushValues.push_back(value);
        }
    }
    int pushIndex = 0;
    for (const string& op : operations) {
        if (op == "push") {
            minStack.push(pushValues[pushIndex++]);
        } else if (op == "pop") {
            minStack.pop();
        } else if (op == "top") {
            cout << minStack.top() << " ";
        } else if (op == "getMin") {
            cout << minStack.getMin() << " ";
        }
    }
    cout << endl;
    return 0;
}
