// GCD

// Take the following as input.

// A number (N1)
// A number (N2)
// Write a function which returns the GCD of N1 and N2. Print the value returned.

// Input Format
// Two integers seperated by a new line.

// Constraints
// 0 < N1 < 1000000000
// 0 < N2 < 1000000000

// Output Format
// Output a single integer which is the GCD of the given integers.

// Sample Input
// 16 
// 24
// Sample Output
// 8
// Explanation
// The largest number that divides both N1 and N2 is called the GCD of N1 and N2.

// Algorithm:
// 1. Start karo.
// 2. `GCD` naam ka function banao jo do integers `num1` aur `num2` le aur integer return kare:
//     a. Ek integer variable `gcd` declare karo.
//     b. Jab tak `num2` zero nahi ho, loop chalao:
//         i. Ek temporary variable `temp` mein `num2` store karo.
//         ii. `num2` ko `num1 % num2` se replace karo.
//         iii. `num1` ko `temp` se replace karo.
//     c. Jab `num2` zero ho jaye, tab `num1` mein GCD store hoga.
//     d. `gcd` ko `num1` ki value se set karo.
//     e. `gcd` ko return karo.
// 3. `main` function start karo:
//     a. `a` aur `b` naam ke do integer variables declare karo.
//     b. User se `a` aur `b` ka input lo.
//     c. `GCD(a, b)` function ko call karo aur uska result print karo.
// 4. Program end karo.

#include<iostream>
using namespace std;

int GCD(int num1, int num2) {
	int gcd;
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
	gcd = num1;
    return gcd;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << GCD(a, b) << endl;
    return 0;
}
