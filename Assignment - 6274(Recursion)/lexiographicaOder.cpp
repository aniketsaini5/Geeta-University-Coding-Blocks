#include <bits/stdc++.h>
using namespace std;

void printLexicographicalOrder(int current, int n) {
    // Base case:
    if (current > n) {
        return;
    }

    cout << current << " ";

    // Recursively call for next lexicographical numbers
    for (int i = 0; i < 10; i++) {
        if (current * 10 + i > n) {
            return;
        }
        printLexicographicalOrder(current * 10 + i, n);
    }
}

void lexicographicalOrder(int n) {
    cout << 0 << " "; 
    for (int i = 1; i < 10; i++) {
        if (i > n) {
            return;
        }
        printLexicographicalOrder(i, n);
    }
}

int main() {
    int n;
    cin >> n;

    lexicographicalOrder(n);

    return 0;
}
