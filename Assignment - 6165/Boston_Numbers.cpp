// Boston Numbers
// A Boston number is a composite number, the sum of whose digits is the sum of the digits of its prime factors obtained as a result of prime factorization (excluding 1 ). The first few such numbers are 4,22 ,27 ,58 ,85 ,94 and 121 . For example, 378 = 2 × 3 × 3 × 3 × 7 is a Boston number since 3 + 7 + 8 = 2 + 3 + 3 + 3 + 7. Write a program to check whether a given integer is a Boston number.

// Input Format
// There will be only one line of input:N , the number which needs to be checked.

// Constraints
// 1 < N < 2,147,483,647 (max value of an integer of the size of 4 bytes)

// Output Format
// 1 if the number is a Boston number. 0 if the number is a not Boston number.

// Sample Input
// 378
// Sample Output
// 1
// Explanation
// Self Explanatory


// ### Algorithm Explanation:

// 1. **sum_of_digit Function:**
//    - **Input:** `num` (an integer)
//    - **Output:** Returns the sum of digits of `num`.
//    - Initialize `sum` to 0.
//    - While `num` is greater than 0:
//      - Calculate the last digit (`ld`) of `num` using `num % 10`.
//      - Add `ld` to `sum`.
//      - Update `num` by dividing it by 10 (`num /= 10`).
//    - Return `sum`.

// 2. **sum_of_primeFactor Function:**
//    - **Input:** `num` (an integer)
//    - **Output:** Returns the sum of digits of all prime factors of `num`.
//    - Initialize `sum` to 0.
//    - **Step 1:** Handle all factors of 2:
//      - While `num` is divisible by 2:
//        - Add 2 to `sum`.
//        - Divide `num` by 2.
//    - **Step 2:** Handle odd factors from 3 upwards:
//      - Loop through odd integers `i` from 3 up to the square root of `num`.
//      - While `num` is divisible by `i`:
//        - Add the sum of digits of `i` (`sum_of_digit(i)`) to `sum`.
//        - Divide `num` by `i`.
//    - **Step 3:** If `num` is still greater than 2 after above steps:
//      - Add the sum of digits of `num` to `sum`.
//    - Return `sum`.

// 3. **is_boston Function:**
//    - **Input:** `num` (an integer)
//    - **Output:** Returns true if `num` is a Boston number, otherwise false.
//    - Calculate `sumPrimeFactors` using `sum_of_primeFactor(num)`.
//    - Calculate `sumDigits` using `sum_of_digit(num)`.
//    - Return true if `sumDigits` equals `sumPrimeFactors`, otherwise false.

// 4. **Main Function:**
//    - **Input:** Reads an integer `num` from input.
//    - Calls `is_boston(num)` to check if `num` is a Boston number.
//    - Prints "1" if `num` is a Boston number, otherwise prints "0".

// ### Example:
// - **Input:** `num = 12`
//   - **sum_of_digit(12):** 1 + 2 = 3
//   - **sum_of_primeFactor(12):**
//     - Prime factors: 2, 2, 3
//     - Sum of digits: 2 (from 2) + 2 (from 2) + 3 (from 3) = 7
//   - **is_boston(12):** 3 != 7 => Returns false

// ### Explanation of the Program:
// - The program first defines utility functions `sum_of_digit` and `sum_of_primeFactor` to compute the necessary sums.
// - The `is_boston` function compares the sum of digits of `num` with the sum of digits of its prime factors.
// - In `main`, it reads `num`, checks if it's a Boston number using `is_boston`, and prints "1" for true or "0" for false.



#include <iostream>
#include <cmath>
using namespace std;

int sum_of_digit(int num) {
    int ld, sum = 0;
    while (num > 0) {
        ld = num % 10;
        sum += ld;
        num /= 10;
    }
    return sum;
}

int sum_of_primeFactor(int num) {
    int sum = 0;
    
    while (num % 2 == 0) {
        sum += 2;
        num /= 2;
    }

    for (int i = 3; i <= sqrt(num); i += 2) {
        while (num % i == 0) {
            sum += sum_of_digit(i);
            num /= i;
        }
    }

    if (num > 2) {
        sum += sum_of_digit(num);
    }

    return sum;
}

bool is_boston(int num) {
    int sumPrimeFactors = sum_of_primeFactor(num);
    int sumDigits = sum_of_digit(num);
    return (sumDigits == sumPrimeFactors);
}

int main() {
    int num;
    cin >> num;
    if (is_boston(num)) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
    return 0;
}
