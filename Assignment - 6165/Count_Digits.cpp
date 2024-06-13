// Count Digits

// Take the following as input.
// A number
// A digit
// Write a function that returns the number of times digit is found in the number. Print the value returned.

// Input Format
// Integer (A number) Integer (A digit)

// Constraints
// 0 <= N <= 1000000000 0 <= Digit <= 9

// Output Format
// Integer (count of times digit occurs in the number)

// Sample Input
// 5433231 
// 3
// Sample Output
// 3
// Explanation
// The digit can be from 0 to 9. Assume decimal numbers.In the given case digit 3 is occurring 3 times in the given number.

// Algorithm:
// 1. Start karo.
// 2. `no_of_Digits` naam ka ek function banao jo `int digit` aur `int num` parameters le aur `int` return kare:
//     a. Ek integer variable `ld` aur `count` ko 0 se initialize karo.
//     b. Jab tak `digit` greater than 0 ho, loop chalao:
//         i. `ld` mein `digit` ka last digit store karo (`digit % 10`).
//         ii. Agar `ld` `num` ke equal ho (`ld == num`):
//             - `count` ko increment karo (`count++`).
//         iii. `digit` ko 10 se divide karke update karo (`digit /= 10`).
//     c. `count` return karo.
// 3. `main` function start karo:
//     a. `d` aur `n` naam ke do integer variables declare karo.
//     b. User se `d` ka input lo.
//     c. User se `n` ka input lo.
//     d. `no_of_Digits(d, n)` function ko call karo aur uska result print karo.
// 4. Program end karo.

#include <iostream>
using namespace std;
int no_of_Digits(int digit, int num)
{
	int ld, count = 0;
	while (digit > 0)
	{
		ld = digit % 10;
		if (ld == num)
		{
			count++;
		}
		digit /= 10;
	}
	return count;
}

int main()
{
	int d, n;
	cin >> d;
	cin >> n;
	cout << no_of_Digits(d, n) << endl;

	return 0;
}