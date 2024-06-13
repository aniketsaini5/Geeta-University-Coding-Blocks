// Print Series

// Take the following as input.

// A number (N1)
// A number (N2)
// Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2.

// Input Format
// Constraints
// 0 < N1 < 100 0 < N2 < 100

// Output Format
// Sample Input
// 10 
// 4
// Sample Output
// 5 
// 11 
// 14 
// 17 
// 23 
// 26 
// 29 
// 35 
// 38 
// 41
// Explanation
// The output will've N1 terms which are not divisible by N2.

// Algorithm:
// 1. Start karo.
// 2. `main` function start karo:
//     a. `N1`, `N2`, `count`, aur `n` naam ke integer variables declare karo aur initialize karo (`count = 0` aur `n = 1`).
//     b. User se `N1` aur `N2` ka input lo.
//     c. Jab tak `count` less than `N1` ho, loop chalao:
//         i. `term` variable ko calculate karo (`term = 3 * n + 2`).
//         ii. Agar `term` `N2` se divisible na ho (`term % N2 != 0`):
//             - `term` ko print karo.
//             - `count` ko increment karo (`count++`).
//         iii. `n` ko increment karo (`n++`).
// 3. Program end karo.

#include <iostream>
using namespace std;

int main() {
    int N1, N2,count=0,n=1;
    cin >> N1 >> N2;
    while (count < N1) {
        int term = 3 * n + 2;
        if (term % N2 != 0) {
            cout << term << endl;
            count++;
        }
        n++;
    }
    return 0;
}
