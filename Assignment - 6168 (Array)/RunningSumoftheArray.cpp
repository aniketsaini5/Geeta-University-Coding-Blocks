// Given an array nums of length n. We define a running sum of an array as for every index runningSum[i] = sum(nums[0]…nums[i]).

// Return the running sum of array for each i (0 <= i < n).

// Input Format
// First line contains an integer n representing number of elements. Next line contains n integers denoting array elements.

// Constraints
// 1 <= nums.length <= 1000
// -10^6 <= nums[i] <= 10^6

// Output Format
// An integer representing running sum array of the given array

// Sample Input
// 4
// 1 2 3 4
// Sample Output
// 1 3 6 10
// Explanation
// Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<n;i++){
        if(arr[i]!= arr[0]){
        arr[i] = arr[i-1]+arr[i]; 
        }
        cout<<arr[i]<<" ";
    }
}
