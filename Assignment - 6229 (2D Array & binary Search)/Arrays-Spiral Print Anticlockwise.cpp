// Take as input a 2-d array. Print the 2-D array in spiral form anti-clockwise.

// Input Format
// Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).

// Constraints
// Both M and N are between 1 to 10.

// Output Format
// All M * N integers separated by commas with 'END' written in the end(as shown in example).

// Sample Input
// 4 4
// 11 12 13 14
// 21 22 23 24
// 31 32 33 34
// 41 42 43 44
// Sample Output
// 11, 21, 31, 41, 42, 43, 44, 34, 24, 14, 13, 12, 22, 32, 33, 23, END
// Explanation
// For spiral level anti-clockwise traversal, Go for first column-> last row ->last column-> first row and then do the same traversal for the remaining matrix .

////////////////////// algorithm 

// 1. **Input lena:** `N` aur `M` ki values input lo (rows aur columns).
// 2. **Matrix banani:** `N x M` ki ek matrix banaiye.
// 3. **Matrix fill karna:**
//    - Har row ke liye (0 se N-1 tak):
//      - Har column ke liye (0 se M-1 tak):
//        - `matrix[i][j]` ko input se fill karo.
// 4. **Spiral order print karna:**
//    - Ek `ans` naam ka empty array banao.
//    - `top` ko 0 aur `bottom` ko `N-1` set karo.
//    - `left` ko 0 aur `right` ko `M-1` set karo.
//    - Jab tak `top` `bottom` se chota ya equal hai aur `left` `right` se chota ya equal hai:
//      - Top se bottom tak har row ke liye:
//        - `matrix[i][left]` ko `ans` mein add karo.
//      - Left ko badhao (`left++`).
//      - Left se right tak har column ke liye:
//        - `matrix[bottom][i]` ko `ans` mein add karo.
//      - Bottom ko ghatana hai (`bottom--`).
//      - Bottom se top tak har row ke liye:
//        - `matrix[i][right]` ko `ans` mein add karo.
//      - Right ko ghatana hai (`right--`).
//      - Right se left tak har column ke liye:
//        - `matrix[top][i]` ko `ans` mein add karo.
//      - Top ko badhao (`top++`).
// 5. **Output karna:** `ans` array ko comma separated values ke sath print karo, aur last mein "END" print karo.

// Yeh steps follow karke matrix ko spiral order mein print karenge.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> matrix(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<int> ans;
    int top = 0, bottom = N - 1;
    int left = 0, right = M - 1;

    while (top <= bottom && left <= right) {
        for (int i = top; i <= bottom; i++) {
            ans.push_back(matrix[i][left]);
        }
        left++;

        for (int i = left; i <= right; i++) {
            ans.push_back(matrix[bottom][i]);
        }
        bottom--;

		for (int i = bottom; i >= top; i--) {
			ans.push_back(matrix[i][right]);
		}
		right--;
	

		for (int i = right; i >= left; i--) {
			ans.push_back(matrix[top][i]);
		}
		top++;
        
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i]<<", ";
        
    }
    cout << " END" << endl;

    return 0;
}
