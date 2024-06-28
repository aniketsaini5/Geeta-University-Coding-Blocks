// Take N (number of rows), print the following pattern (for N = 5).

//      * * * * *
//      * *   * *
//      *       *
//      * *   * *
//      * * * * *
// Input Format
// Constraints
// 0 < N < 10 (where N is an odd number)

// Output Format
// Sample Input
// 5
// Sample Output
// *	*	*       *      *		  
// *	*	        *      *
// * 	                       *
// * 	*               *      *
// * 	*	*       *      *	
// Explanation
// Each '*' is separated from other by a tab.

// Code mein humne ek pattern print kiya hai jo n rows ka hai, jaha pe har row mein 'n' columns hain. Pattern ek rhombus ko represent karta hai jismein stars ('*') aur spaces hain.

// **Algorithm:**

// 1. **Input lena**: Humne user se ek integer input liya hai `n`, jo pattern ki number of rows ko represent karta hai.

// 2. **Pattern Generate karna**:
//    - Pehle half (upper part) ke liye loop chalaya hai, jismein `i` 1 se shuru hokar `(n / 2) + 1` tak badhta hai.
//    - Har row ke liye, hum `j` ko 1 se lekar `n` tak badhate hain:
//      - Agar `j` less than or equal to `((n / 2) + i) - 1` hai aur `j` greater than or equal to `(n / 2) + 3 - i` hai, tab hum double spaces print karte hain (`"  "`).
//      - Otherwise, hum ek star print karte hain (`"* "`).
//    - Har row ke baad ek newline (`endl`) print kiya jata hai.

// 3. **Lower part generate karna**:
//    - Dusra half (lower part) ke liye loop chalaya hai, jismein `i` `(n / 2)` se lekar 1 tak ghata hai.
//    - Yeh loop upper part ke loop ke jaisa hi kaam karta hai, lekin reverse order mein rows print karta hai.

// 4. **Output**:
//    - Code ke output mein har row ke baad newline (`endl`) aata hai, jisse pattern properly format mein print hota hai.

// Yeh pattern code ke dwara sahi tareeke se generate hota hai jo ki `n` ke according adjust ho sakta hai, jaise ki input value ke hisab se.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= (n / 2) + 1; i++)
    {
        for (int j = 1; j <= n; j++) {
            if (j <= ((n / 2) + i)-1 && j >= (n / 2) + 3 - i) {
                cout << "  ";
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }
    for (int i = (n / 2); i >= 1; i--)
    {
        for (int j = 1; j <= n; j++) {
            if (j <= ((n / 2) + i)-1 && j >= (n / 2) + 3 - i) {
                cout << "  ";
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }

    return 0;
}
