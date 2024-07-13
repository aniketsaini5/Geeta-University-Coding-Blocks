// Given an array, print the Next Greater Element (NGE) for every element. The Next Greater Element for an element x is the first greater element on the right side of x in array. Elements for which no greater element exist, consider next greater element as -1.

// Input Format
// First line of the input contains a single integer T denoting the number of testcases. First line of each testcase contains an integer N denoting the size of array. Second line of each testcase contains N space seperated integers denoting the array.

// Constraints
// 1 <= T <= 50 1 <= N <= 10^5

// Output Format
// For each index, print its array element and its next greater element seperated by a comma in a new line.

// Sample Input
// 2
// 4
// 11 13 21 3
// 5
// 11 9 13 21 3
// Sample Output
// 11,13
// 13,21
// 21,-1
// 3,-1
// 11,13
// 9,13
// 13,21
// 21,-1
// 3,-1
// Explanation


#include <bits/stdc++.h> 
using namespace std; 

// Function to print Next Greater Element for each element of the array
void nextGreater(int arr[], int n) 
{ 
 // Write Code here
    stack<int> st;
    vector<int> result(n, -1);
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() and st.top() <= arr[i]) {
            st.pop();
        }
        if (!st.empty()) {
            result[i] = st.top();
        }
        st.push(arr[i]);
    }
    for (int i = 0; i < n; i++) {
        cout<< arr[i] <<",";
        cout << result[i] << endl;
    }


 }


// The Main Function
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        nextGreater(arr, n); 
    }
	
	return 0; 
} 

