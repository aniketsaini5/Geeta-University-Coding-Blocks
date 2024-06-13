// Simple Input

// Given a list of numbers, stop processing input after the cumulative sum of all the input becomes negative.

// Input Format
// A list of integers to be processed

// Constraints
// All numbers input are integers between -1000 and 1000.

// Output Format
// Print all the numbers before the cumulative sum become negative.

// Sample Input
// 1
// 2
// 88
// -100
// 49
// Sample Output
// 1
// 2
// 88

// Algorithm for the program:
// 1. Start karo.
// 2. `main` function start karo:
//     a. `numbers` naam ka integer array declare karo jiska size `MAX_SIZE` hai (yani 1000).
//     b. `n`, `c_sum`, `count` naam ke integers declare karo, jahan `c_sum` initial value 0 hai aur `count` ko 0 se initialize karo.
//     c. Jab tak `cin >> n` se input lete waqt input available hai:
//         i. `c_sum` mein `n` ko add karo (`c_sum += n`).
//         ii. Agar `c_sum` negative ho jaye toh break karo loop se.
//         iii. `numbers` array mein `n` ko store karo (`numbers[count] = n`).
//         iv. `count` ko increment karo (`count++`).
//     d. Ek `for` loop chalao `i = 0` se `i < count` tak:
//         i. `numbers[i]` ko print karo.
// 3. Program end karo.

// Explanation:
// - `#define MAX_SIZE 1000` defines a constant `MAX_SIZE` with a value of 1000.
// - `int numbers[MAX_SIZE];` declares an integer array `numbers` with a capacity of 1000 elements.
// - `cin >> n` inside the `while` loop continuously reads integers from input until no more input is available.
// - `c_sum += n;` accumulates the sum of all integers read.
// - If `c_sum` becomes negative (`if (c_sum < 0)`), the `break;` statement exits the loop.
// - Each integer `n` read is stored in the `numbers` array at index `count`, and then `count` is incremented.
// - After the loop ends, a `for` loop prints each element of the `numbers` array that was stored during input.
// - This program effectively reads integers until their cumulative sum becomes negative, then outputs all the integers read up to that point.

#include <iostream>
#define MAX_SIZE 1000
using namespace std;

int main() {
    int numbers[MAX_SIZE];
    int n, c_sum = 0;
    int count = 0; 
    while (cin >> n) {
        c_sum += n;
        if (c_sum < 0) {
            break;
        }
        numbers[count] = n;
        count++;
    }
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << endl;
    }

    return 0;
}
