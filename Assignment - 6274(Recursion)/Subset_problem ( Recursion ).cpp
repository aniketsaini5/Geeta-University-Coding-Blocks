// Take an input N, a number. Take N more inputs and store that in an array. Take an input target, a number

// a. Write a recursive function which prints subsets of the array which sum to target.

// b. Write a recursive function which counts the number of subsets of the array which sum to target. Print the value returned.

// Input Format
// Take an input N, a number. Take N more inputs and store that in an array. Take an input target, a number

// Constraints
// None

// Output Format
// Display the number of subsets and print the subsets in a space separated manner.

// Sample Input
// 3
// 1
// 2
// 3
// 3
// Sample Output
// 1 2  3
// 2
// Explanation
// Add 2 spaces between 2 subset solutions

#include <bits/stdc++.h>
using namespace std;
int c;

void subset(vector<int>& arr, int i, int x, vector<int>& ans) {

    if (i == arr.size()) {
		int sum =0;
		// sum nikalna jo ki taget k equal, ho
		for(int i =0 ; i<ans.size();i++){
			sum+=ans[i];
		}
		if(sum == x){
			// subset count karna
			c++;
        for(int i =0; i<ans.size();i++){
			cout<<ans[i]<<" ";

		cout<<" ";
			}
		}
        return;
    }

	 // Include arr[i]
    ans.push_back(arr[i]);
    subset(arr, i + 1, x, ans);

	ans.pop_back(); // backtrack

    // Exclude arr[i]
    subset(arr, i + 1, x, ans);

   
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    vector<int> ans;

    subset(arr, 0, target, ans);
	cout<<endl<<c;

    return 0;
}
