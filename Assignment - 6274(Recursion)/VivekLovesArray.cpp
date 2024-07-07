// Vivek loves to play with array . One day Vivek just came up with a new array game which was introduced to him by his friend Ujjwal. The rules of the game are as follows: Initially, there is an array, A , containing 'N' integers.

// In each move, Vivek must divide the array into two non-empty contiguous parts such that the sum of the elements in the left part is equal to the sum of the elements in the right part. If Vivek can make such a move, he gets '1' point; otherwise, the game ends.

// After each successful move, Vivek have to discards either the left part or the right part and continues playing by using the remaining partition as array 'A'.

// Vivek loves this game and wants your help getting the best score possible. Given 'A', can you find and print the maximum number of points he can score?

// Input Format
// First line of input contains an integer T denoting number of test cases. Each further Test case contains first line an integer 'N' , the size of array 'A'. After that 'N' space separated integers denoting the elements of array.

// Constraints
// 1 <= T <= 10 1 <= N <= 28 0 <= A[i] <= 10^9

// Output Format
// For each test case, print Vivek's maximum possible score on a new line.

// Sample Input
// 3
// 3
// 3 3 3
// 4
// 2 2 2 2
// 7
// 4 1 0 1 1 0 1
// Sample Output
// 0
// 2
// 3

#include<bits/stdc++.h>
using namespace std;
#define int long long

int BS(vector<int>& ps,int s,int e){
    int ans=-1;
    int lo=s,hi=e;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        int left=ps[mid]-ps[s-1];
        int right=ps[e]-ps[mid];
        if(left==right ){
            ans=mid;
            hi=mid-1;
        }
        else if(left>right){
            hi=mid-1;
        }else{
            lo=mid+1;
        }
    }
    return ans;
}
int solve(vector<int>& ps,int s,int e){
    if(s>=e){
        return 0;
    }
    int ans=0;
    int ind=BS(ps,s,e);
    if(ind!=-1 && (ps[e]-ps[s-1])%2==0)
        ans=1+max(solve(ps,s,ind),solve(ps,ind+1,e));
    return ans;
}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        vector<int> ps(n+1);
        for(int i=0;i<n;i++){
            ps[i+1]=ps[i]+nums[i];
        }
        cout<<solve(ps,1,n)<<endl;
    }

    return 0;
}
