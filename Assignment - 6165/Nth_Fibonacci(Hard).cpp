// Nth Fibonacci (Hard)

// Take N as input. Print Nth Fibonacci Number, given that the first two numbers in the Fibonacci Series are 0 and 1.

// Input Format
// Constraints
// 0 <= N <= 1000

// Output Format
// Sample Input
// 10
// Sample Output
// 55
// Explanation
// The 0th fibonnaci is 0 and 1st fibonnaci is 1.

// Algorithm:
// 1. Start karo.
// 2. `main` function start karo:
//     a. `a`, `b`, `c`, aur `n` naam ke integer variables declare karo aur `a` ko 0 aur `b` ko 1 se initialize karo.
//     b. User se `n` ka input lo.
//     c. Ek `for` loop chalao `i = 1` se `i < n` tak:
//         i. `c` ko `a` aur `b` ka sum set karo (`c = a + b`).
//         ii. `a` ko `b` set karo (`a = b`).
//         iii. `b` ko `c` set karo (`b = c`).
//     d. Loop ke baad `c` ko print karo.
// 3. Program end karo.

#include<iostream>
using namespace std;
int main() {
	int a=0,b=1,c,n;
	cin>>n;
	for(int i = 1 ; i<n; i++){
		c=a+b;
		a=b;
		b=c;
	}
	cout<<c;
	
	return 0;
}