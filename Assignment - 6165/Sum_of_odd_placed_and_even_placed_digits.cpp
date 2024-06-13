// Sum of odd placed and even placed digits

// Input Format
// Constraints
// 0 < N <= 1000000000

// Output Format
// Sample Input
// 2635
// Sample Output
// 11
// 5
// Explanation
// 5 is present at 1st position, 3 is present at 2nd position, 6 is present at 3rd position and 2 is present at 4th position.
// Sum of odd placed digits on first line. 5 and 6 are placed at odd position. Hence odd place sum is 5+6=11
// Sum of even placed digits on second line. 3 and 2 are placed at even position. Hence even place sum is 3+2=5

// Algorithm:
// 1. Start karo.
// 2. Ek integer variable `n` ko declare karo.
// 3. User se `n` ka input lo.
// 4. `rem`, `evensum`, aur `oddsum` ko 0 se initialize karo.
// 5. Ek `count` variable ko 1 se initialize karo.
// 6. Jab tak `n` greater than 0 ho, loop chalao:
//     a. `rem` mein `n` ka last digit store karo (`n % 10`).
//     b. Agar `count` even ho (`count % 2 == 0`):
//         i. `evensum` mein `rem` add karo.
//     c. Agar `count` odd ho:
//         i. `oddsum` mein `rem` add karo.
//     d. `n` ko 10 se divide karke update karo (`n /= 10`).
//     e. `count` ko increment karo (`count++`).
// 7. `oddsum` ko print karo.
// 8. `evensum` ko print karo.
// 9. End karo.


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int rem, evensum = 0, oddsum = 0;
    int count = 1;

    while (n > 0) {
        rem = n % 10;
        if (count % 2 == 0) {
            evensum += rem;
        } else {
            oddsum += rem;
        }
        n /= 10;
        count++;
    }
    cout << oddsum << endl;
	cout << evensum << endl;

    return 0;
}
