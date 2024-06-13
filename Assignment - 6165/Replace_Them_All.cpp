// Replace Them All
// Given a integer as a input and replace all the '0' with '5' in the integer

// Input Format
// Enter an integer n

// Constraints
// 0<=n<=1000000000000

// Output Format
// All zeroes are replaced with 5

// Sample Input
// 102
// Sample Output
// 152
// Explanation
// Check each digit , if it is nonzero, then no change required but if it is zero then replace it by 5.

// Algorithm for the  program:
// 1. Start karo.
// 2. `main` function start karo:
//     a. `c` naam ka character array (string) declare karo jiski length 15 characters hai.
//     b. User se input lo aur `c` mein store karo.
//     c. `c` ki length ko `strlen(c)` se calculate karo aur `length` mein store karo.
//     d. Ek `for` loop chalao `i = 0` se `i < length` tak:
//         i. Agar `c[i]` '0' ke equal hai:
//             - `c[i]` ko '5' se replace karo.
//     e. `c` ko print karo.
// 3. Program end karo.

// Explanation:
// - `char c[15];` declares a character array `c` capable of holding up to 15 characters.
// - `cin >> c;` takes input from the user and stores it in `c`.
// - `strlen(c)` computes the length of the string `c`.
// - The `for` loop iterates through each character of `c`.
// - Inside the loop, `if (c[i] == '0')` checks if the current character is '0'.
// - If true, `c[i] = '5';` replaces '0' with '5'.
// - Finally, `cout << c << endl;` prints the modified string `c`.


#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char c[15];
    cin >> c;
    
    int length = strlen(c);
    for (int i = 0; i < length; ++i) {
        if (c[i] == '0') {
            c[i] = '5';
        }
    }
    
    cout << c << endl;
    return 0;
}
