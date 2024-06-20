#include <bits/stdc++.h>
using namespace std;

string reverse_str(string s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        swap(s[i], s[n - i - 1]);
    }
    return s;
}

int main() {
    string str;
    getline(cin, str);

    string rev = reverse_str(str);
    cout << rev;

    return 0;
}
