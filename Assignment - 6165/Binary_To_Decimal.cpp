// Binary To __DECIMAL_BID_FORMAT__

// Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.

// Input Format
// Constraints
// 0 < N <= 1000000000

// Output Format
// Sample Input
// 101010
// Sample Output
// 42
// Explanation
// For binary number fedcba , Decimal number = f * 25 + e * 24 + d * 23 + …..+ a * 20.

// Algorithm:
// 1. Start karo.
// 2. `main` function start karo:
//     a. `n`, `ld`, `B` aur `D` naam ke integer variables declare karo aur initialize karo (`B = 1` aur `D = 0`).
//     b. User se `n` ka input lo.
//     c. Jab tak `n` greater than 0 ho, loop chalao:
//         i. `ld` mein `n` ka last digit store karo (`n % 10`).
//         ii. `D` ko update karo (`D += ld * B`).
//         iii. `n` ko 10 se divide karke update karo (`n /= 10`).
//         iv. `B` ko 2 se multiply karke update karo (`B *= 2`).
//     d. `D` ko print karo.
// 3. Program end karo.

#include<iostream>
using namespace std;

int main() {
    int n,ld,B=1,D=0;
	cin>>n;
	while(n>0){
		ld=n%10;
	    D+=ld*B;
		n/=10;
		B*=2;
	}
	cout<<D;

	return 0;
}