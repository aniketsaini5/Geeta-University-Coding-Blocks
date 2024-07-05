// Take as input str, a string. a.Write a recursive function which counts the number of times ‘hi’ appears in the string. Print the value returned. b.Write a recursive function which removes all ‘hi’ in the string. Print the value returned. c.Write a recursive function which replaces all ‘hi’ in the string with ‘bye’. Print the value returned.

// Input Format
// Enter a string

// Constraints
// None

// Output Format
// Display the no. of 'hi', string without 'hi' , string in which 'hi' is replaced with 'bye'

// Sample Input
// abchibi
// Sample Output
// 1
// abcbi
// abcbyebi

#include <bits/stdc++.h>
using namespace std;

int c = 0;

void counter(string s, int i, int n) {
    if (i >= n - 1) {
        cout << c << endl;
        return;
    }

    if (s[i] == 'h' && s[i + 1] == 'i') {
        c++;
        counter(s, i + 2, n); 
    } else {
        counter(s, i + 1, n);
    }
}

void removehi(string s, int i, int n) {
    if (i >= n - 1) {
        cout << s << endl;
        return;
    }

    if (s[i] == 'h' && s[i + 1] == 'i') {
        s.erase(i, 2);
        removehi(s, i, n - 2); 
    } else {
        removehi(s, i + 1, n);
    }
}

void replacehi(string s, int i, int n) {
    if (i >= n - 1) {
        cout << s << endl;
        return;
    }

    if (s[i] == 'h' && s[i + 1] == 'i') {
        s.replace(i, 2, "bye");
        replacehi(s, i + 3, n + 1); 
    } else {
        replacehi(s, i + 1, n);
    }
}

int main() {
    string s;
    cin >> s;
    int n = s.size();

    counter(s, 0, n);
    removehi(s, 0, n);
    replacehi(s, 0, n);

    return 0;
}
