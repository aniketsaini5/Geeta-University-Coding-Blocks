// Is Armstrong Number
// Take the following as input.

// A number
// Write a function which returns true if the number is an armstrong number and false otherwise, where Armstrong number is defined as follows.

// A positive integer of n digits is called an Armstrong number of order n (order is number of digits) if.

// abcd… = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + ….

// 1634 is an Armstrong number as 1634 = 1^4 + 6^4 + 3^4 + 4^4

// 371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3

// Input Format
// Single line input containing an integer

// Constraints
// 0 < N < 1000000000

// Output Format
// Print boolean output for each testcase.
// "true" if the given number is an Armstrong Number, else print "false".

// Sample Input
// 371
// Sample Output
// true
// Explanation
// Use functions. Write a function to get check if the number is armstrong number or not. Numbers are armstrong if it is equal to sum of each digit raised to the power of number of digits.

// Algorithm Explanation:
// The provided code checks if a number is an Armstrong number. Let's break down the algorithm step-by-step:

// Input Reading:

// Read an integer n from input, which is the number to be checked.
// Function no_digits:

// Input: n (an integer)
// Output: Returns the number of digits in n.
// Initialize d to 0.
// While n is greater than 0:
// Divide n by 10 (n /= 10) to remove the last digit.
// Increment d by 1.
// Return d, which represents the number of digits in n.
// Function is_armstrong:

// Input: num (an integer)
// Output: Returns true if num is an Armstrong number, otherwise false.
// Calculate the number of digits in num using no_digits(num) and store it in d.
// Initialize variables:
// n to num (to preserve the original number for later comparison).
// result to 0, which will store the sum of each digit raised to the power of d.
// While n is greater than 0:
// Extract the last digit of n (ld = n % 10).
// Add ld raised to the power of d (pow(ld, d)) to result.
// Divide n by 10 to remove the last digit (n /= 10).
// After the loop, compare num with result.
// If they are equal, return true (indicating num is an Armstrong number).
// Otherwise, return false.
// Main Function (main):

// Reads an integer n from input.
// Calls the is_armstrong(n) function to check if n is an Armstrong number.
// Prints "true" if n is an Armstrong number, otherwise prints "false".
// Logic Behind Armstrong Number:
// An Armstrong number (also known as Narcissistic number or plenary number) for a given number of digits d is a number that is equal to the sum of its own digits each raised to the power of d.



#include <iostream>
#include <cmath>
using namespace std;

int no_digits(int n) {
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
    int n;
    cin >> n;

    if (is_armstrong(n)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
