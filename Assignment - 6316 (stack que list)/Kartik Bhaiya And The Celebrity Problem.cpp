// Kartik Bhaiya, mentor at Coding Blocks, organized a party for their interns at Coding Blocks. In a party of N people, only one person is known to everyone. Such a person may be present in the party, if yes, she/he doesn’t know anyone in the party. We can only ask questions like “does A know B? “.
// Find the stranger (celebrity) in minimum number of questions.

// Input Format
// First line contains N, number of persons in party. Next line contains the matrix of N x N which represents A knows B when it's value is one.

// Constraints
// None

// Output Format
// Print the celebrity ID which is between 0 and N-1. If celebrity is not present then print "No Celebrity".

// Sample Input
// 4
// 0 0 1 0
// 0 0 1 0
// 0 0 0 0
// 0 0 1 0
// Sample Output
// 2
// Explanation
// In the given case there are 4 persons in the party let them as A, B, C, D. The matrix represents A knows B when it's value is one. From the matrix, A knows C, B knows C and D knows C. Thus C is the celebrity who doesnot know anyone and it's ID is 2. Hence output is 2.

#include<bits/stdc++.h>
using namespace std;

bool check(vector<vector<int>> arr,int n, int i)
{
	for(int j=0; j<n; j++)
	{
		if(j==i)
		{
			continue;
		}
		if(arr[i][j]==1 || arr[j][i]==0)
		{
			return false;
		}
	}
	return true;
}
int main() {
	int n;
	cin>>n;
	vector<vector<int>> arr(n,vector<int>(n));

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>arr[i][j];
		}
	}
	int celebrity=0;
	for(int i=0; i<n; i++)
	{
		if(check(arr,n,i))
		{
			celebrity=i;
			break;
		}
	}
	if(celebrity==0)
	{
		cout<<"No Celebrity"<<endl;
	}
	else
	{
		cout<<celebrity<<endl;
	}
	return 0;
}