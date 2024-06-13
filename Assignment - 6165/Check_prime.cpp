// Check prime

// Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".

// Input Format
// Constraints
// 2 < N <= 1000000000

// Output Format
// Sample Input
// 3
// Sample Output
// Prime
// Explanation
// The output is case specific

// Algorithm:
// 1. Start karo.
// 2. `main` function start karo:
//     a. `n` aur `count` naam ke integer variables declare karo.
//     b. User se `n` ka input lo.
//     c. Ek `for` loop chalao `i = 2` se `i <= n/2` tak:
//         i. Agar `n` ko `i` se divide karne par remainder zero ho (`n % i == 0`):
//             - `count` ko increment karo (`count++`).
//     d. Agar `count` 0 ke barabar ho (yani `n` sirf 1 aur khud se hi divisible hai):
//         - "Prime" print karo.
//     e. Warna:
//         - "Not Prime" print karo.
// 3. Program end karo.

#include<iostream>
using namespace std;
int main() {
	int n,count=0;
	cin>> n;
	for(int i = 2; i<=n/2;i++){
        if( n%i==0){
            count++;
        }

    }
    if(count == 0){
        cout<<"Prime";
    }else{
        cout<<"Not Prime";
    }

	return 0;
}