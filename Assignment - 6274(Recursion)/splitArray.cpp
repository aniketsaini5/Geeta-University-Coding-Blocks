// Take as input N, a number. Take N more inputs and store that in an array.

// a. Write a recursive function which counts the number of ways the array could be split in two groups, so that the sum of items in both groups is equal. Each number in the array must belong to one of the two groups. Print the value returned.

// b. Write a recursive function which keeps track of ways an array could be split in two groups, so that the sum of items in both groups is equal. Each number in the array must belong to one of the two groups. Return type of function should be void. Print the two groups, each time you find a successful split.

// Input Format
// Take as input N, a number. Take N more inputs and store that in an array.

// Constraints
// None

// Output Format
// Display all the groups in a comma separated manner and display the number of ways the array can be split

// Sample Input
// 6
// 1
// 2
// 3
// 3
// 4
// 5
// Sample Output
// 1 2 3 3 and 4 5 
// 1 3 5 and 2 3 4 
// 1 3 5 and 2 3 4 
// 2 3 4 and 1 3 5 
// 2 3 4 and 1 3 5 
// 4 5 and 1 2 3 3 
// 6
#include<bits/stdc++.h>
using namespace std;
int cnt;
void solve(vector<int>& a,int i,int target,vector<int>& output){
	int n=a.size();
	if(i==n){
		if(target==0){
			cnt++;
			for(int j=0;j<output.size();j++){
				cout<<a[output[j]]<<" ";
			}
			 cout<<"and ";
			for(int j=0;j<n;j++){
				bool flag=false;
				for(int k=0;k<output.size();k++){
					if(output[k]==j){
						flag=true;
						break;
					}
				}
				if(flag==false){
					cout<<a[j]<<" ";
				}
			}
			cout<<endl;
		}
		 return ;
	}
	 output.push_back(i);
	 solve(a,i+1,target-a[i],output);
	 output.pop_back();
	 solve(a,i+1,target,output);
}
int main() {
	cnt=0;
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	 int sum=accumulate(a.begin(),a.end(),0);
	 if(sum%2==0){
		 int target=sum/2;
		 vector<int> output;
		 solve(a,0,target,output);
		 cout<<cnt<<endl;

	 }else{
		 cout<<0<<endl;
	 }
	return 0;
}