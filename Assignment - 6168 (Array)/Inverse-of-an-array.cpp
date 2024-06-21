// Take as input N, a number. Take N more inputs and store that in an array. Write a recursive function which inverses the array. Print the values of inverted array

// Input Format
// Enter a number N and take N more inputs

// Constraints
// None

// Output Format
// Display the values of the inverted array in a space separated manner

// Sample Input
// 5
// 0 2 4 1 3
// Sample Output
// 0 3 1 4 2
// Explanation
// Swap element with index

// for eg : element 4 at index 2 becomes element 2 at index 4

#include<iostream>
using namespace std;

void invertedArray(int arr[] ,int invertarr[] ,int i,int n){
	if(i == n){
		return;
	}
	invertarr[arr[i]] = i;
	invertedArray(arr,invertarr,i+1,n);
}

int main() {
    int n;
	cin>>n;
	int arr[n];
	int invertarr[n];
	for(int i =0 ; i<n;i++){
		cin>>arr[i];
	}
	for(int  i =0; i <n ; i++){
		invertarr[i]=-1;
	}
	invertedArray(arr,invertarr,0,n);
	for(int  i =0 ; i<n ; i++){
		cout<<invertarr[i]<<" ";
	}

	return 0;
}