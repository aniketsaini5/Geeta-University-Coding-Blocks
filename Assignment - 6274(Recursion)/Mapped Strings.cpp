// We are given a hashmap which maps all the letters with number. Given 1 is mapped with A, 2 is mapped with B…..26 is mapped with Z. Given a number, you have to print all the possible strings.

// Input Format
// A single line contains a number.

// Constraints
// Number is less than 10^6

// Output Format
// Print all the possible strings in sorted order in different lines.

// Sample Input
// 123
// Sample Output
// ABC
// AW
// LC
// Explanation
// '1' '2' '3' = ABC
// '1' '23' = AW
// '12' '3' = LC

#include <bits/stdc++.h>
using namespace std;

char alpha[27] = {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

void subsequence(string s, int i, string output) {
    int n = s.size();
    // base case
    if (i == n) {
        cout << output << endl;
        return;
    }

    // Single digit number
    if (s[i] != '0') {
        int num1 = s[i] - '0';
        subsequence(s, i + 1, output + alpha[num1]);
    }

    // Two digit number
    if (i + 1 < n) {
        int num2 = (s[i] - '0') * 10 + (s[i + 1] - '0');
        if (num2 <= 26) {
            subsequence(s, i + 2, output + alpha[num2]);
        }
    }
}

int main() {
    string s;
    cin >> s;
    string output = "";
    subsequence(s, 0, output);

    return 0;
}
