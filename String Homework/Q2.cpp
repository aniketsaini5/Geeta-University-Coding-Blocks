// Given a string rotate it by n characters. e.g if
// the string is CodingBlocks and n =3 then the
// output should be cksCodingBlo
#include <bits/stdc++.h>
using namespace std;

string rotate_str(string s, int n) {
    return s.substr(n) + s.substr(0, n);
}

int main() {
    string str;
    cout << "Enter String: ";
    getline(cin, str);
    cout << "Enter n: ";
    int n;
    cin >> n;

    string rotated = rotate_str(str, n);
    cout << rotated;

    return 0;
}
