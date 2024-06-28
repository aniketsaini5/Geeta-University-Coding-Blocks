// You are given a 2-D array and you have to print the elements of upper triangle as it is and zero in the lower triangle.

// Input Format
// First line of the input contains single integers n denoting number of rows and number of columns. Take next n*n elements as input of the matrix.

// Constraints
// 0<n<=100 -10000<=arr[i]<=10000

// Output Format
// The upper half of array with digits and lower as 0.

// Sample Input
// 3
// 1 2 3
// 4 5 6
// 7 8 9
// Sample Output
// 1 2 3
// 0 5 6
// 0 0 9










#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	int arr [n] [n];
	for(int i = 0 ; i<n; i++){
		for(int j =0 ; j<n; j++){
			cin>> arr[i][j];
		}
	}
	for(int i = 0 ; i<n; i++){
		for(int j =0 ; j<n; j++){
			if(i>j){
				cout<<"0"<<" ";
			}else{
			cout<<arr[i][j]<<" ";
			}
		}
		cout<<endl;
	}
}