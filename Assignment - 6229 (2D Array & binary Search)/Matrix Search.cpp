// Given an n x m matrix, where every row and column is sorted in increasing order, and a number x . Find if element x is present in the matrix or not.

// Input Format
// First line consists of two space separated integers N and M, denoting the number of element in a row and column respectively. Second line of each test case consists of N*M space separated integers denoting the elements in the matrix in row major order. Third line of each test case contains a single integer x, the element to be searched.

// Constraints
// 1 <= N,M <= 30 0 <= A[i] <= 100

// Output Format
// Print 1 if the element is present in the matrix, else 0.

// Sample Input
// 3 3
// 3 30 38
// 44 52 54
// 57 60 69
// 62
// Sample Output
// 0
// Explanation
// Search the element in the sorted matrix. If the element is present print 1 otherwise print 0. In the sample input,in first case 62 is not present in the matrix so 0 is printed. Similarly, for second case 55 is present in the matrix so 1 is printed.


// 1. **Input lena:** `n` aur `m` ki values input lo (rows aur columns).
// 2. **2D array banana:** `arr[n][m]` ko declare karo.
// 3. **Array fill karna:**
//    - Har row ke liye (0 se n-1 tak):
//      - Har column ke liye (0 se m-1 tak):
//        - `arr[i][j]` ko input se fill karo.
// 4. **Element search karna:**
//    - Ek function `search` define karo jo binary search ka use kare:
//      - Parameters hai: `arr[]` (array), `n` (size of array), aur `x` (search element).
//      - `lo` ko 0 aur `hi` ko `n-1` initialize karo.
//      - Jab tak `lo` `hi` se chota ya equal hai:
//        - `mid` ko calculate karo as `(lo + hi) / 2`.
//        - Agar `arr[mid]` equal hai `x` ke saath:
//          - Return karo `1` (indicating element found).
//        - Agar `arr[mid]` chota hai `x` se:
//          - `lo` ko update karo as `mid + 1`.
//        - Otherwise:
//          - `hi` ko update karo as `mid - 1`.
//      - Agar element nahi mila toh `0` return karo.
// 5. **Main function mein search karna:**
//    - `ans` ko initialize karo as `0`.
//    - Matrix ke har row ko iterate karo:
//      - `search` function se check karo kya `x` element present hai current row mein.
//      - Agar mil jata hai (`ans` becomes `1`), toh loop ko break karo.
// 6. **Output karna:** `ans` ko print karo, indicating whether the element `x` exists in the matrix (`1` for true, `0` for false).

// Yeh steps follow karke code matrix mein diye gaye element `x` ko search karta hai aur uska presence status output karta hai.

#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int x) {
    int lo = 0;
    int hi = n - 1;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (arr[mid] == x) {
            return 1;
        } else if (arr[mid] < x) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return 0;
}

int main() {
    int n, m;
    cin >> n >> m;
    int ans = 0;
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int x;
    cin >> x;
    for (int i = 0; i < n; i++) {
        ans = search(arr[i], m, x);
        if (ans == 1) {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
