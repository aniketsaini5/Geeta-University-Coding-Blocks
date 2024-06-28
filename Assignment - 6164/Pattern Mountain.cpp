// Take N (number of rows), print the following pattern (for N = 4).

//                        1           1
//                        1 2       2 1  
//                        1 2 3   3 2 1
//                        1 2 3 4 3 2 1   
// Input Format
// Constraints
// 0 < N < 10

// Output Format
// Sample Input
// 4
// Sample Output
// 1						1
// 1	2				2	1
// 1	2	3		3	2	1
// 1	2	3	4	

#include<iostream>

using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i =1;i<=n;i++){
		for(int j =1;j<n*2;j++){
			if(j<=i || j>=n*2-i){
				if(j<=n)
				cout<<j<<" ";
				else
				cout<<n*2-j<<" ";
			}
			else
			cout<<"  ";
		}
		cout<<endl;
	}
	return 0;
}