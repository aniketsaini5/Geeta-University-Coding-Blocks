// You are given an input array whose each element represents the height of a line towers. The width of every tower is 1. It starts raining. Water is filled between the gap of towers if possible. You need to find how much water filled between these given towers.

// Example : Imgur

// Input Format
// The first line consists of number of test cases T. Each test case consists an integer N as number of towers and next line contains the N space separated integers.

// Constraints
// 1 <= N <= 1000000 1 <= t <= 10 0 <= A[i] <= 10000000

// Output Format
// Print how much unit of water collected among towers for each test case.

// Sample Input
// 2
// 6
// 3  0  0  2  0  4
// 12
// 0  1  0  2  1  0  1  3  2  1  2  1
// Sample Output
// 10
// 6

#include<bits/stdc++.h>
using namespace std;
int main() {
	int  t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int h[n];
		for(int i =0 ; i<n ; i++){
			cin>>h[i];
		}
		int leftmax[n];
		int rightmax[n];
		leftmax[0] = h[0];
		for(int i=1;i<n;i++){
			leftmax[i]=max(leftmax[i-1],h[i]);
		}
		rightmax[n-1]=h[n-1];
		for(int i=n-2;i>=0;i--){
			rightmax[i]=max(rightmax[i+1],h[i]);
		}
	    int ans =0;
		for(int i = 0; i< n; i++){
		     int height = min(leftmax[i],rightmax[i])-h[i];
			if(height>0){
				ans = ans+height*1;
			}
		}
		cout<<ans<<endl;

	}

	return 0;
}