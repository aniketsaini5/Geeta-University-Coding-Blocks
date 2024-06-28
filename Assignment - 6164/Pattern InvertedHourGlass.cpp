// Take N as input. For a value of N=5, we wish to draw the following pattern :

//              5                   5 
//              5 4               4 5 
//              5 4 3           3 4 5 
//              5 4 3 2       2 3 4 5 
//              5 4 3 2 1   1 2 3 4 5 
//              5 4 3 2 1 0 1 2 3 4 5 
//              5 4 3 2 1   1 2 3 4 5 
//              5 4 3 2       2 3 4 5 
//              5 4 3           3 4 5 
//              5 4               4 5 
//              5                   5 
// Input Format
// Take N as input.

// Constraints
// Output Format
// Pattern should be printed with a space between every two values.

// Sample Input
// 5
// Sample Output
// 5                   5 
// 5 4               4 5 
// 5 4 3           3 4 5 
// 5 4 3 2       2 3 4 5 
// 5 4 3 2 1   1 2 3 4 5 
// 5 4 3 2 1 0 1 2 3 4 5 
// 5 4 3 2 1   1 2 3 4 5 
// 5 4 3 2       2 3 4 5 
// 5 4 3           3 4 5 
// 5 4               4 5 
// 5                   5 
// {...} Code Editor

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i = 0;i<=n;i++){
		for(int j = 0;j<=n*2;j++){
			if(j<=i || j>=n*2-i){
				if(j<=n)
				cout<<n-j<<" ";
				else
				cout<<j-n<<" ";
			}
			else
			cout<<"  ";
		}
		cout<<endl;
	}

	for(int i = n-1;i>=0;i--){
		for(int j = 0;j<=n*2;j++){
			if(j<=i || j>=n*2-i){
				if(j<=n)
				cout<<n-j<<" ";
				else
				cout<<j-n<<" ";
			}
			else
			cout<<"  ";
		}
		cout<<endl;
	}
	return 0;
}