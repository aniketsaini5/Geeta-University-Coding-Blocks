// Take N as input. For a value of N=7, we wish to draw the following pattern :

//                             1 
//                         2 1   1 2 
//                     3 2 1       1 2 3 
//                 4 3 2 1           1 2 3 4 
//                     3 2 1       1 2 3 
//                         2 1   1 2 
//                             1 
// Input Format
// Take N as input.

// Constraints
// N is odd number.

// Output Format
// Pattern should be printed with a space between every two values.

// Sample Input
// 7
// Sample Output
//             1 
//         2 1   1 2 
//     3 2 1       1 2 3 
// 4 3 2 1           1 2 3 4 
//     3 2 1       1 2 3 
//         2 1   1 2 
//             1 
// Explanation
// Catch the pattern and print it accordingly.

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	// half of upper side
	for(int i =0;i<=n/2;i++){
		// first spaces
		for(int j =1;j<n-2*i;j++){
			cout<<"  ";
		}
		// number print
		for(int j = i+1;j>0;j--){
			cout<<j<<" ";
		}
		// second spaces
		for(int j =0;j<2*i-1;j++){
			cout<<"  ";
		}
		for(int j =1;i && j<=i+1;j++ ){
			cout<<j<<" ";
		}
		cout<<endl;
	}

	// half of lower side
	for(int i =n/2-1;i>=0;i--){
		// first spaces
		for(int j =1;j<n-2*i;j++){
			cout<<"  ";
		}
		// number print
		for(int j = i+1;j>0;j--){
			cout<<j<<" ";
		}
		// second spaces
		for(int j =0;j<2*i-1;j++){
			cout<<"  ";
		}
		for(int j =1;i && j<=i+1;j++ ){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}