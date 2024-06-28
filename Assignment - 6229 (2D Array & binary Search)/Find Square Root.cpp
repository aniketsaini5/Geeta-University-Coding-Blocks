// Implement squareroot(x).

// Compute and return the square root of x.

// If x is not a perfect square, return floor(sqrt(x)).
// Note: DO NOT USE SQRT FUNCTION FROM STANDARD LIBRARY

// Input Format
// An integer A .

// Constraints
// 0 <= A <10000000000

// Output Format
// Squareroot of A.

// Sample Input
// 25
// Sample Output
// 5

#include<bits/stdc++.h>
using namespace std;
long long squareRoot(int A) {
        if(A== 0 || A== 1) return A;
        
        long long lo =1;
        long long hi = A;
        while(lo<=hi){
                long long mid = (lo+hi)/2;
                if(mid *mid == A){
                        return mid;
                }else if(mid*mid > A){
                        hi = mid-1;
                }else {
                        lo = mid +1;
                }

        }
        return hi;
}
int main () {
        long long A;
        cin >> A; 
        cout << squareRoot(A);
	return 0;
}