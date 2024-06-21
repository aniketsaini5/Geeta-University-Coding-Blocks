// Take as input N, the size of array. Take N more inputs and store that in an array. Write a function that bubble sorts the array. Print the elements of sorted array.

// 1.It reads a number N.
// 2.Take Another N numbers as input and store them in an Array.
// 3.Bubble sort the array and print the Array.

// Input Format
// Constraints
// N cannot be Negative. Range of Numbers can be between -1000000000 to 100000000.

// Output Format
// Sample Input
// 4
// 2
// -18
// 45
// 30
// Sample Output
// -18
// 2
// 30
// 45
// Explanation
// For each test case write bubble sorting program to sort the elements of the array.

#include<iostream>
using namespace std;
void bublesort(int arr[],int n){
	for(int  i = 0 ;i<n;i++){
		for(int j =  0; j<n-i-1 ;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] =arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
int main() {

	int n;
	cin>>n;
	int arr[n];
	for(int i =0 ; i<n;i++){
		cin>>arr[i];
	}
	bublesort(arr,n);

	for(int i = 0 ; i<n; i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}

