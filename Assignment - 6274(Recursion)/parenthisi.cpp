// Given an integer 'n'. Print all the possible pairs of 'n' balanced parentheses.
// The output strings should be printed in the sorted order considering '(' has higher value than ')'.

// Input Format
// Single line containing an integral value 'n'.

// Constraints
// 1<=n<=11

// Output Format
// Print the balanced parentheses strings with every possible solution on new line.

// Sample Input
// 2
// Sample Output
// ()() 
// (()) 

#include <bits/stdc++.h>

using namespace std;

void generateParentheses(int open, int close, string current, vector<string>& result) {
    if (open == 0 && close == 0) {
        result.push_back(current);
        return;
    }

    if (close > open) {
        generateParentheses(open, close - 1, current + ")", result);
    }

    if (open > 0) {
        generateParentheses(open - 1, close, current + "(", result);
    }
}

int main() {
    int n;
    cin >> n;
    vector<string> result;
    sort(result.begin(), result.end());
    generateParentheses(n, n, "", result);

    for (const string& s : result) {
        cout << s << endl;
    }

    return 0;
}
