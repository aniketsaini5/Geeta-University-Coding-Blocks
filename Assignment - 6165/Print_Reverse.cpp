// Print Reverse

// Take N as input, Calculate it's reverse also Print the reverse.

// Input Format
// Constraints
// 0 <= N <= 1000000000

// Output Format
// Sample Input
// 123456789
// Sample Output
// 987654321
// Explanation
// You've to calculate the reverse in a number, not just print the reverse.

// Algorithm:
// 1. Start karo.
// 2. `main` function start karo:
//     a. Ek integer variable `n`, `sum`, aur `rem` ko declare karo aur initialize karo (`sum = 0`).
//     b. User se `n` ka input lo.
//     c. Jab tak `n` greater than 0 ho, loop chalao:
//         i. `rem` mein `n` ka last digit store karo (`n % 10`).
//         ii. `sum` ko update karo (`sum = sum * 10 + rem`).
//         iii. `n` ko 10 se divide karke update karo (`n /= 10`).
//     d. `sum` ko print karo.
// 3. Program end karo.

#include<iostream>
using namespace std;
int main() {
	int n,sum=0,rem;
	cin>>n;
	while(n>0){
		rem = n%10;
		sum =sum * 10 +rem;
		n/=10;
	}
	cout<<sum;
	return 0;
}