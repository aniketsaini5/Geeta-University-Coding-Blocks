// Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions x1,…,xN (0 <= xi <= 1,000,000,000).

// His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall. To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?

// Input Format
// First line contains N and C, separated by a single space, representing the total number of stalls and number of cows respectively. The next line contains N integers containing the indexes of stalls.

// Constraints
// 2 <= N <= 100,000
// 0 <= xi <= 1,000,000,000
// 2 <= C <= N

// Output Format
// Print one integer: the largest minimum distance.

// Sample Input
// 5 3
// 1 2 8 4 9
// Sample Output
// 3
// Explanation
// Problem Credits - (Spoj)[http://www.spoj.com/problems/AGGRCOW/]

#include<bits/stdc++.h>
using namespace std;

bool is_possible(const vector<int>& st, int N, int C, int minDist) {
    int count = 1;
    int lst_p = st[0];

    for (int i = 1; i < N; ++i) {
        if (st[i] - lst_p >= minDist) {
            count++;
            lst_p = st[i];
            if (count == C) {
                return true;
            }
        }
    }
    return false;
}

int largest_min_distance(const vector<int>& st, int N, int C) {
    int lo = 1;
    int hi = st[N - 1] - st[0];

    while (lo < hi) {
        int mid = lo + (hi - lo + 1) / 2;
        if (is_possible(st, N, C, mid)) {
            lo = mid;
        } else {
            hi = mid - 1;
        }
    }
    return lo;
}

int main() {
    int N, C;
    cin >> N >> C;

    vector<int> st(N);
    for (int i = 0; i < N; ++i) {
        cin >> st[i];
    }

    sort(st.begin(), st.end());

    cout  << largest_min_distance(st, N, C) << endl;

    return 0;
}
