// Take as input str, a string. Write a recursive function which returns all the words possible by rearranging the characters of this string which are in dictionary order smaller than the given string. The output strings must be lexicographically sorted.

// Input Format
// Single line input containing a string

// Constraints
// Length of string <= 10

// All characters are unique

// Output Format
// Display all the words which are in dictionary order smaller than the string entered in a new line each. The output strings must be sorted.

// Sample Input
// cab
// Sample Output
// abc
// acb
// bac
// bca
// Explanation
// The possible permutations of string "cab" are "abc" , "acb" ,"bac" , "bca" , "cab" and "cba" . Only four of them are lexicographically less than "cab". We print them in lexicographical order.

#include <bits/stdc++.h>
using namespace std;

string s; 
vector<string> ans;

void larger_order(string a, int l, int r) {
    if (l == r) {
        if (a < s) { 
            ans.push_back(a);
        }
    } else {
        for (int i = l; i <= r; i++) {
            // Swap
            swap(a[l], a[i]);
            larger_order(a, l + 1, r);
            // Backtrack
            swap(a[l], a[i]);
        }
    }
}

int main() {
    cin >> s;
    int n = s.size();
    larger_order(s, 0, n - 1);
    sort(ans.begin(), ans.end());
    for (int i =0; i<ans.size(); i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
