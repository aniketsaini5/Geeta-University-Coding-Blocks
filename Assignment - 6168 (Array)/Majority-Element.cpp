// Given an array of size n, find the majority element. The majority element is the element that appears more than n/2 times.

// You may assume that the array is non-empty and the majority element always exist in the array.

// Input Format
// First line contains integer N (size of the array) followed by N more integers.

// Constraints
// Output Format
// Majority Element of array

// Sample Input
// 3
// 1 1 2
// Sample Output
// 1
// Explanation
// Number of 1's in the array is more than 3/2 , Hence majority element is 1

#include<bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin>>n;
	int arr[n];
	for(int i =0 ;i <n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int count = 1;
	int e = arr[0];
	 for(int i = 1; i <n ; i++){
		 if(arr[i] == e){
			 count++;
		 }else{
			 count =1;
			 e = arr[i];
		 }
	if(n/2<count){
		cout<<e<<endl;
		break;
	}
	}
	return 0;
}