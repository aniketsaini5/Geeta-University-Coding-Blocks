// Given K painters to paint N boards where each painter takes 1 unit of time to paint 1 unit of boards i.e. if the length of a particular board is 5, it will take 5 units of time to paint the board. Compute the minimum amount of time to paint all the boards.

// Note that:

// Every painter can paint only contiguous segments of boards.
// A board can only be painted by 1 painter at maximum.
// Input Format
// First line contains K which is the number of painters. Second line contains N which indicates the number of boards. Third line contains N space separated integers representing the length of each board.

// Constraints
// 1 <= K <= 10
// 1 <= N <= 10
// 1<= Length of each Board <= 10^8

// Output Format
// Output the minimum time required to paint the board.

// Sample Input
// 2
// 2
// 1 10
// Sample Output
// 10


#include<bits/stdc++.h>  

using namespace std;

bool is_possible(const vector<int>& l, int k, int tl) {
    int no_p = 1;
    int ct = 0;

    for (int i = 0; i < l.size(); i++) {
        if (ct + l[i] > tl) {
            no_p++;
            ct = l[i];
            if (no_p > k) {
                return false;
            }
        } else {
            ct += l[i];
        }
    }

    return true;
}

int min_time(int k, int n, const vector<int>& l) {
    int lo = *max_element(l.begin(), l.end());
    int hi = accumulate(l.begin(), l.end(), 0);

    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        if (is_possible(l, k, mid)) {
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }

    return lo;
}

int main() {
    int k, n;
    cin >> k;
    cin >> n;

    vector<int> l(n);
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }

    cout << min_time(k, n, l) << endl;

    return 0;
}
