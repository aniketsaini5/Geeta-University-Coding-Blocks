// Given a N*N matrix. The task is to find the index of column with maximum sum. That is the column whose sum of elements are maximum.

// Input Format
// First line contains the N ,size of the square matrix. Next N lines contains N integers each denoting the elements of the matrix

// Constraints
// Output Format
// Print N lines each containing N elements. These are the elements of the new matrix.

// Sample Input
// 7
// 90 40 1 3 39 59 90 
// 48 72 67 32 73 19 27 
// 22 37 47 68 1 5 55 
// 81 5 39 53 38 86 21 
// 1 32 7 44 2 65 47 
// 68 13 24 28 69 81 43 
// 16 34 67 3 82 26 35 
// Sample Output
// 6 341
// Explanation
// 6th column has the highest sum that is 341.

#include<bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin>>n;
	int arr[n][n];
	for(int i =0 ; i<n; i++){
		for(int j =0 ;j <n ; j++){
			cin>>arr[i][j];
		}
	}
	int index;
	int maxsum= INT_MIN;

	for(int j = 0; j<n; j++){
		int curent_sum =0;
		for(int i =0 ; i<n; i++){
			 curent_sum += arr[i][j];
		if(curent_sum>maxsum){
			maxsum =curent_sum;
			index = j;
		}
		}
			
	}
	cout<<index+1<<" "<<maxsum<<endl;

	return 0;
}