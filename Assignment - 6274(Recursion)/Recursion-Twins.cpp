// Take an input str, a string. A “twin” is defined as two instances of a char separated by a char. E.g. "AxA" the A's make a “twin”. “twins” can overlap, so "AxAxA" contains 3 “twins” - 2 for A and 1 for x. Write a function which recursively counts number of “twins” in a string. Print the value returned.

// Input Format
// Enter the string

// Constraints
// None

// Output Format
// Display the number of twins

// Sample Input
// AXAXA
// Sample Output
// 3

#include <bits/stdc++.h>
using namespace std;

int twins(string &s, int i) {
    int n = s.size();

    if (i >= n ) { 
        return 0;
    }

    int ans;
    if (s[i] == s[i + 2]) {
        ans = 1 + twins(s, i + 1);
    } else {
        ans = twins(s, i + 1);
    }
    return ans;
}

int main() {
    string s;
    cin >> s;
    cout << twins(s, 0);
    return 0;
}
