// The Game is as follows You have given a binary array, where 1 denotes push operation and 0 denotes a pop operation in a queue. The task is to check if the possible set of operations are valid or not.
// Print Valid if the set of Operations are Valid Otherwise Print Invalid.

// Input Format
// The First Line contains an Integer T, as the number of Test cases.
// The Next Line contains an Integer N, as the Size of the Array.
// The Next Line contains N Binary numbers separated by space.

// Constraints
// Output Format
// Print Valid If the set of operations are valid Otherwise Print Invalid for each Test Case separated by a new Line.

// Sample Input
// 2
// 5
// 1 1 0 0 1
// 5
// 1 1 0 0 0 
// Sample Output
// Valid
// Invalid

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> arr) {
    queue<int> qu; 
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) {
            qu.push(1);  // Simulate push operation
        } else if (arr[i] == 0) {
            if (qu.empty()) {
                cout << "Invalid" << endl;
                return;
            }
            qu.pop();  // Simulate pop operation
        }
    }
    cout << "Valid" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        solve(arr);
    }
    return 0;
}
