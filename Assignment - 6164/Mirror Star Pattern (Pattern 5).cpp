// Take N (number of rows - only odd numbers allowed), print the following pattern (for N = 5).

//       *
//    *  *  *  
// *  *  *  *  *  
//    *  *  *
//       *
// Input Format
// Constraints
// 0 < N < 10 (only odd numbers allowed)

// Output Format
// Sample Input
// 5
// Sample Output
//       *
//     * * *
//   * * * * *
//     * * *
//       *
// Explanation
// Each '*' is separated from other by a tab.


// Ye code ek pattern generate karta hai jo n lines ka hai, jisme har line me stars (*) aur spaces ( ) hote hain. Pattern ka structure is tarah hai:

// 1. Pehle loop me, 1 se (n/2 + 1) tak chalate hain.
// 2. Har line me n columns hote hain.
// 3. Har column ke liye check karte hain:
//    - Agar column index (j) uss line ke liye specified range me hai, toh usme '*' print karte hain.
//    - Warna, usme space print karte hain.
// 4. Fir ek newline print karte hain.

// Uske baad dusre loop me, (n/2) se lekar 1 tak reverse order me chalate hain. Is loop me bhi wahi logic apply hota hai jo pehle loop me tha, lekin yaha i values decrease hoti jaati hain.

// Yaha, n ko input se liya jata hai jo lines ka count define karta hai. Har line ka length n hota hai.

// Is pattern ko generate karne ke liye yeh logic use hota hai.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= (n / 2) + 1; i++)
    {
        for (int j = 1; j <= n; j++) {
            if (j <= (n / 2) + i && j >= (n / 2) + 2 - i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (int i = (n / 2); i >= 1; i--)
    {
        for (int j = 1; j <= n; j++) {
            if (j <= (n / 2) + i && j >= (n / 2) + 2 - i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
