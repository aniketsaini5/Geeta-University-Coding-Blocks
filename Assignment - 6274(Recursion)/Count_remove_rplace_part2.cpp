// Take as input str, a string.

// a.) Write a recursive function which counts the number of times ‘hi’ appears in the string – but skip all such ‘hi’ which are followed by ‘t’ to form ‘hit’. Print the value returned.

// b.) Write a recursive function which removes all ‘hi’ in the string – but skip all such ‘hi’ which are followed by ‘t’ to form ‘hit’. Print the value returned.

// c.) Write a recursive function which replaces all ‘hi’ in the string with ‘bye’ – but skip all such ‘hi’ which are followed by ‘t’ to form ‘hit’. Print the value returned.

// Input Format
// Enter the String

// Constraints
// None

// Output Format
// Display the total no.of ''hi'' (''hi'' should not be followed by a 't'), string in which all ''hi'' are removes(''hi'' should not be followed by a 't'), string in which all ''hi'' are replace by ''bye''(''hi'' should not be followed by a 't')

// Sample Input
// abchihitfhi
// Sample Output
// 2
// abchitf
// abcbyehitfbye

#include <bits/stdc++.h>
using namespace std;

int c = 0;

void counter(string s, int i, int n) {
    if (i >= n - 1) {
        cout << c << endl;
        return;
    }

    if (s[i] == 'h' && s[i + 1] == 'i' && s[i + 2] != 't') {
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

    if (s[i] == 'h' && s[i + 1] == 'i' && s[i + 2] != 't') {
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

    if (s[i] == 'h' && s[i + 1] == 'i' && s[i + 2] != 't') {
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
