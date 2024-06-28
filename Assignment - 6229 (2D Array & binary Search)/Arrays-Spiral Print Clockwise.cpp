// Take as input a 2-d array.Print the 2-D array in sprial form clockwise.

// Input Format
// Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).

// Constraints
// Both M and N are between 1 to 100.

// Output Format
// All M * N integers separated by commas with 'END' written in the end(as shown in example).

// Sample Input
// 4 4
// 11 12 13 14
// 21 22 23 24
// 31 32 33 34
// 41 42 43 44
// Sample Output
// 11, 12, 13, 14, 24, 34, 44, 43, 42, 41, 31, 21, 22, 23, 33, 32, END
// Explanation
// For spiral level clockwise traversal, Go for first row-> last column ->last row -> first column and then do the same traversal for the remaining matrix .

// {...} Code Editor



// 1. **Input lena:** `N` aur `M` ki values input lo (rows aur columns).
// 2. **Matrix banana:** `N x M` ki ek matrix `matrix` banaiye, jisme har element `0` initially hai.
// 3. **Matrix fill karna:**
//    - Har row ke liye (0 se N-1 tak):
//      - Har column ke liye (0 se M-1 tak):
//        - `matrix[i][j]` ko input se fill karo.
// 4. **Spiral order print karna:**
//    - Ek `ans` naam ka empty array banao jo spiral order mein elements store karega.
//    - `top` ko 0, `bottom` ko `N-1`, `left` ko 0, aur `right` ko `M-1` set karo.
//    - Jab tak `top` `bottom` se chota ya equal hai aur `left` `right` se chota ya equal hai:
//      - Left se right tak har element ko `ans` mein add karo jo `matrix[top][i]` hai.
//      - Top ko increment karo (`top++`).
//      - Agar `top` `bottom` se bada ho jata hai, tab loop ko break karo.
//      - Top se bottom tak har element ko `ans` mein add karo jo `matrix[i][right]` hai.
//      - Right ko decrement karo (`right--`).
//      - Agar `left` `right` se bada ho jata hai, tab loop ko break karo.
//      - Right se left tak har element ko `ans` mein add karo jo `matrix[bottom][i]` hai.
//      - Bottom ko decrement karo (`bottom--`).
//      - Agar `top` `bottom` se bada ho jata hai, tab loop ko break karo.
//      - Bottom se top tak har element ko `ans` mein add karo jo `matrix[i][left]` hai.
//      - Left ko increment karo (`left++`).
//    - Jab loop khatam ho jaye, `ans` array mein spiral order ke elements aa jayenge.
// 5. **Output karna:** `ans` array ko comma separated values ke sath print karo, aur ant mein "END" print karo.

// Yeh steps follow karke code matrix ke elements ko spiral order mein print karta hai.

#include<bits/stdc++.h>
using namespace std;

int main() {
	int N,M;
	cin>>N>>M;
	vector<vector<int>> matrix(N,vector<int>(M));
	for(int i =0 ;  i < N; i++){
		for(int j= 0; j< M; j++){
			cin>>matrix[i][j];
		}
	}
    vector<int> ans;
	int n=matrix.size();
	int m=matrix[0].size();
	int left=0,right=m-1;
	int top=0,bottom=n-1;

	while(top<=bottom && left<=right){
		for(int i=left;i<=right;i++){
			ans.push_back(matrix[top][i]);
		}
		top++;
		if(top>bottom) break;
		for(int i=top;i<=bottom;i++){
			ans.push_back(matrix[i][right]);
		}
		right--;
		if(left>right) break;
		for(int i=right;i>=left;i--){
			ans.push_back(matrix[bottom][i]);
		}
		bottom--;
		if(top>bottom) break;
		for(int i=bottom;i>=top;i--){
			ans.push_back(matrix[i][left]);
		}
		left++;
	}
	for(int l =0 ;l < ans.size();l++){{

	}
		cout<<ans[l]<<", ";
	}
	cout<<"END";
	return 0;
}