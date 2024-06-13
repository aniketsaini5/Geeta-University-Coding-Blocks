// Inverse of number

// Take the following as input.
// A number
// Assume that for a number of n digits, the value of each digit is from 1 to n and is unique. E.g. 32145 is a valid input number.

// Write a function that returns its inverse, where inverse is defined as follows

// Inverse of 32145 is 12543. In 32145, “5” is at 1st place, therefore in 12543, “1” is at 5th place; in 32145, “4” is at 2nd place, therefore in 12543, “2” is at 4th place.

// Print the value returned.

// Input Format
// Integer

// Constraints
// 0 < N < 1000000000

// Output Format
// Integer

// Sample Input
// 32145
// Sample Output
// 12543
// Explanation
// Assume that for a number of n digits, the value of each digit is from 1 to n and is unique. E.g. 32145 is a valid input number. Inverse of 32145 is 12543. In 32145, “5” is at 1st place, therefore in 12543, “1” is at 5th place; in 32145, “4” is at 2nd place, therefore in 12543, “2” is at 4th place.

// ### Explanation:

// - **`inverse` function:**
//   - Initialize `inverse_num` to 0 to store the reversed number.
//   - While `n` is greater than 0:
//     - Calculate `last_digit` as `n % 10`.
//     - Append `last_digit` to `inverse_num` by multiplying `inverse_num` by 10 and adding `last_digit`.
//     - Divide `n` by 10 (`n /= 10`) to remove the last digit and move to the next digit.
//   - Once the loop completes, `inverse_num` contains the number `n` with its digits reversed.

// - **`main` function:**
//   - Reads an integer `n` from input.
//   - Calls `inverse(n)` to compute the reversed number.
//   - Prints the reversed number.


#include <iostream>
using namespace std;
int inverse(int n){
	int p = 1;
    int inverseN[10];
    while (n > 0) {
        int d = n % 10;
        inverseN[d] = p;
        n /= 10;
        p++;
    }
    int inverse_num = 0;
    int ml = 1;
    for (int i = 1; i < p; ++i) {
        inverse_num += inverseN[i] * ml;
        ml *= 10;
    }
    return inverse_num;
}
int main(){
	
	int n;
	cin>>n;
	cout<<inverse(n);

	return 0;
}