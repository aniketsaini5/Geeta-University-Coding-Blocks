// Print Armstrong Numbers

// Take the following as input.

// A number (N1)
// A number (N2)
// Write a function which prints all armstrong numbers between N1 and N2 (inclusive).

// 371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3

// Input Format
// Constraints
// 0 < N1 < 100 N1 < N2 < 10000

// Output Format
// Sample Input
// 400
// 1000
// Sample Output
// 407
// Explanation
// Each number in output is in separate line.

// Algorithm for the given program:
// 1. Start karo.
// 2. `no_digits` naam ka function banao jo ek integer `n` le aur integer return kare:
//     a. Agar `n` zero hai, toh 1 return karo.
//     b. Ek integer variable `d` ko 0 se initialize karo.
//     c. Jab tak `n` greater than 0 ho, loop chalao:
//         i. `n` ko 10 se divide karo (`n /= 10`).
//         ii. `d` ko increment karo (`d++`).
//     d. `d` ko return karo.
// 3. `is_armstrong` naam ka function banao jo ek integer `num` le aur bool return kare:
//     a. `d` ko `no_digits(num)` se calculate karo.
//     b. Ek integer variables `n`, `ld`, aur `result` ko initialize karo, jahan `n = num` aur `result = 0`.
//     c. Jab tak `n` greater than 0 ho, loop chalao:
//         i. `ld` mein `n` ka last digit store karo (`n % 10`).
//         ii. `result` mein `ld` ka `d`th power add karo (`result += pow(ld, d)`).
//         iii. `n` ko 10 se divide karo (`n /= 10`).
//     d. Agar `num` equal ho `result` ke, toh true return karo, warna false.
// 4. `main` function start karo:
//     a. `n1` aur `n2` naam ke do integers declare karo.
//     b. User se `n1` aur `n2` ka input lo.
//     c. Ek `for` loop chalao `i = n1` se `i` ko `n2` tak:
//         i. Agar `is_armstrong(i)` true hai:
//             - `i` ko print karo.
// 5. Program end karo.

// Explanation:
// - `no_digits` function calculates the number of digits in a given integer `n`.
// - `is_armstrong` function checks if a number `num` is an Armstrong number:
//   - It calculates the sum of digits raised to the power of the number of digits (`d`).
//   - If the sum equals the original number `num`, it returns true; otherwise, false.
// - In the `main` function, it reads two integers `n1` and `n2`.
// - It iterates through each integer from `n1` to `n2`.
// - For each integer, it checks if it is an Armstrong number using the `is_armstrong` function.
// - If true, it prints the integer.

// This program effectively finds and prints all Armstrong numbers between `n1` and `n2` based on the Armstrong number criteria.



#include <iostream>
#include <cmath>
using namespace std;

int no_digits(int n) {
    if (n == 0) return 1; 
    int d = 0;
    while (n > 0) {
        n /= 10;
        d++;
    }
    return d;
}

bool is_armstrong(int num) {
    int d = no_digits(num);
    int n = num, ld, result = 0;

    while (n > 0) {
        ld = n % 10;
        result += pow(ld, d);
        n /= 10;
    }

    return (num == result);
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    for (int i = n1; i <= n2; i++) {
        if (is_armstrong(i)) {
            cout << i <<endl;
        }
    }

    return 0;
}

