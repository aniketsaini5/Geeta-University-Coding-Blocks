// Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t.

// Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.

// Input Format
// The first line contains a single integer x (1 ≤ x ≤ 10^18) — the number that Luke Skywalker gave to Chewbacca.

// Constraints
// x <= 100000000000000000

// Output Format
// Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.

// Sample Input
// 4545
// Sample Output
// 4444
// Explanation
// There are many numbers form after inverting the digit. For minimum number, check if inverting digit is less than or greater than the original digit. If it is less, then invert it otherwise leave it.

// ALGO
// The given program takes an input string x, which is assumed to represent a non-negative integer, and performs an operation to transform each digit into its "inverted" counterpart based on the formula 9 - d, where d is the digit. The transformed digit is updated in the string x.

//  algorithm step by step:

// Start karo.
// main function start karo:
// a. x naam ka string declare karo.
// b. User se x ka input lo.
// c. n ko x.length() se initialize karo, jo x ki length hai.
// d. Ek for loop chalao i = 0 se i < n tak:
// i. d ko calculate karo (d = x[i] - '0'), jo ith character ko integer mein convert karta hai.
// ii. invert_Digit ko calculate karo (9 - d), jo d ka inverted digit hai.
// iii. Agar invert_Digit chhota hai d se:
// - Agar i 0 hai aur invert_Digit 0 hai, toh continue karo (leading zeros avoid karne ke liye).
// - Warna, x[i] ko invert_Digit mein update karo (x[i] = '0' + invert_Digit).
// x ko print karo.
// Program end karo.

// Explanation:

// x[i] - '0' converts the character x[i] to its corresponding integer value (d).
// 9 - d calculates the inverted digit.
// If the inverted digit is less than the original digit (d), it updates the character in x.
// The condition if (i == 0 && invert_Digit == 0) ensures that the leading digit is not converted to zero, which would invalidate the number.
// Finally, the modified string x is printed.


#include <iostream>
#include <string>
using namespace std;
int main()
{
	string x;
	cin >> x;
	int n = x.length();
	for (int i = 0; i < n; ++i)
	{
		int d = x[i] - '0';
		int invert_Digit = 9 - d;
		if (invert_Digit < d)
		{
			if (i == 0 && invert_Digit == 0)
			{
				continue;
			}
			x[i] = '0' + invert_Digit;
		}
	}
	cout << x << endl;
	return 0;
}
