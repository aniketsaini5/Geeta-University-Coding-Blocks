// You are provided an array of numbers. You need to arrange them in a way that yields the largest value.

// Input Format
// First line contains integer t which is number of test case.
// For each test case, you are given a single integer n in the first line which is the size of array A[] and next line contains n space separated integers denoting the elements of the array A .

// Constraints
// 1<=t<=100

// 1<=m<=100

// 1<=A[i]<=10^5

// Output Format
// Print the largest value.

// Sample Input
// 1
// 4
// 54 546 548 60
// Sample Output
// 6054854654
// Explanation
// Upon rearranging the elements of the array , 6054854654 is the largest possible number that can be generated.

/////////////////////////////////////////////////////////////////////////////////////

//                 //

#include <bits/stdc++.h>
using namespace std;

bool compare(const string &X, const string &Y) {
    return X + Y > Y + X;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        string s[n];
        for (int i = 0; i < n; i++) {
            s[i] = to_string(arr[i]);
        }

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (!compare(s[j], s[j + 1])) {
                    swap(s[j], s[j + 1]);
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << s[i];
        }
        cout << endl;
    }

    return 0;
}
