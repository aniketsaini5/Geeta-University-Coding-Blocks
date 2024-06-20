// Write a function to check if two strings are
// permutations of each other.

#include <bits/stdc++.h>
using namespace std;

bool arePermutations(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return s1 == s2;
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    if (arePermutations(str1, str2)) {
        cout << "The strings are permutations of each other." << endl;
    } else {
        cout << "The strings are not permutations of each other." << endl;
    }

    return 0;
}
