// Given a 2D array, sort each of its rows and print the result.

// Input Format
// First line contains 2 integers - r & c. Next r lines contains c integers each denoting the matrix elements.

// Constraints
// 1 <= R,C <= 100

// Output Format
// Print the modified matrix

// Sample Input
// 4 5
// 13 5 13 9 11 
// 5 10 11 4 6 
// 6 10 17 12 16 
// 8 11 7 18 5 
// Sample Output
// 5 9 11 13 13 
// 4 5 6 10 11 
// 6 10 12 16 17 
// 5 7 8 11 18 
// Explanation
// The provided code snippet sorts each row of a 2D matrix in ascending order and then prints the sorted matrix. Here's the explanation of the code in Hinglish (mix of English and Hindi):

// 1. **Input lena:** `n` aur `m` ki values input lo (rows aur columns).
// 2. **Matrix banana:** `n x m` ki ek 2D vector `arr` banaiye.
// 3. **Matrix fill karna:**
//    - Har row ke liye (0 se n-1 tak):
//      - Har column ke liye (0 se m-1 tak):
//        - `arr[i][j]` ko input se fill karo.
// 4. **Row-wise sort karna:**
//    - Ek function `sorted` define karo jo ek vector ko sort kare:
//      - Reference parameter `arr` lete hai jo ek row ko represent karta hai.
//      - `sort(arr.begin(), arr.end())` ka use karo to sort the row in ascending order.
// 5. **Sort karna:**
//    - Har row ke liye (0 se n-1 tak):
//      - `sorted` function ka use karo to sort the current row.
// 6. **Sorted matrix print karna:**
//    - Har row aur column ko iterate karke sorted matrix ko print karo.
//    - Har column ke liye (0 se m-1 tak):
//      - `arr[i][j]` ko print karo.
//      - Ek newline print karo har row ke baad (`cout << endl;`).

// Yeh code snippet matrix ke har row ko sort karke sorted matrix ko print karta hai.

#include<bits/stdc++.h>
using namespace std;
void sorted(vector <int> &arr){
	sort(arr.begin(),arr.end());
}
int main () {
	int n,m;
	cin>>n>>m;
	 vector<vector<int>> arr(n, vector<int>(m));
	for(int i =0 ;i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>arr[i][j];
		}
	}
	 for(int i = 0; i< n; i++){
		 sorted(arr[i]);
	 }
	for(int i = 0; i< n; i++){
		for(int j = 0; j<m; j++){
		    cout<<arr[i] [j] <<" ";
		}
		cout<<endl;
	}

	return 0;
	}