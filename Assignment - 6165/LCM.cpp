// LCM

// Take the following as input.

// A number (N1)
// A number (N2)
// Write a function which returns the LCM of N1 and N2. Print the value returned.

// Input Format
// Constraints
// 0 < N1 < 1000000000
// 0 < N2 < 1000000000

// Output Format
// Sample Input
// 4 
// 6
// Sample Output
// 12
// Explanation
// The smallest number that is divisible by both N1 and N2 is called the LCM of N1 and N2.

// Algorithm:
// 1. Start karo.
// 2. `LCM` naam ka function banao jo do integers `num1` aur `num2` le aur integer return kare:
//     a. Ek integer variable `i` ko 1 se initialize karo aur ek integer variable `lcm` declare karo.
//     b. Infinite loop start karo:
//         i. Agar `i` `num1` aur `num2` dono se divisible ho (`i % num1 == 0 && i % num2 == 0`):
//             - `lcm` ko `i` set karo.
//             - `lcm` return karo.
//         ii. `i` ko increment karo (`i++`).
// 3. `main` function start karo:
//     a. `a` aur `b` naam ke do integer variables declare karo.
//     b. User se `a` aur `b` ka input lo.
//     c. `LCM(a, b)` function ko call karo aur uska result print karo.
// 4. Program end karo.

#include<iostream>
using namespace std;

int LCM(int num1, int num2) {
    int i = 1,lcm;

    while (true) {
        if (i % num1 == 0 && i % num2 == 0) {
			lcm= i;

            return lcm;
        }
        i++;
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << LCM(a, b) << endl;
    return 0;
}
