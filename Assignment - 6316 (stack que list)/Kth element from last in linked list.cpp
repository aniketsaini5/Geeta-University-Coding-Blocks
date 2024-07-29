// Given a linked list with n nodes. Find the kth element from last without computing the length of the linked list.

// Input Format
// First line contains space separated integers representing the node values of the linked list. The list ends when the input comes as '-1'. The next line contains a single integer k.

// Constraints
// n < 10^5

// Output Format
// Output a single line containing the node value at the kth element from last.

// Sample Input
// 1 2 3 4 5 6 -1
// 3
// Sample Output
// 4
// Explanation
// The linked list is 1 2 3 4 5 6. -1 is not included in the list. So the third element from the last is 4

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr;
    int x;
    cin >> x;
    while (x != -1) {
        arr.push_back(x);
        cin >> x; // Read the next value
    }
    int t;
    cin >> t;

    int n = arr.size();
    int newsize = n - t;

    cout << arr[newsize] << endl;
 
    return 0;
}
