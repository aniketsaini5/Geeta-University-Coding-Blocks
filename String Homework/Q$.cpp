// Write a program to print all substrings of a
// given string

#include <bits/stdc++.h>
using namespace std;

void printAllSubstrings(string s) {
    int n = s.length();
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            cout << s.substr(i, j - i + 1) << endl;
        }
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    printAllSubstrings(str);

    return 0;
}
