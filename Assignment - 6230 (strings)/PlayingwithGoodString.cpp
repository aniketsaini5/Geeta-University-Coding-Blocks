// A Good String is a string which contains only vowels (a,e,i,o,u) . Given a string S, print a single positive integer N where N is the length of the longest substring of S that is also a Good String.

// Note: The time limit for this problem is 1 second, so you need to be clever in how you compute the substrings.

// Input Format
// A string 'S'

// Constraints
// Length of string < 10^5

// Output Format
// A single positive integer N, where N is the length of the longest sub-string of S that is also a Good String.

// Sample Input
// cbaeicde
// Sample Output
// 3
// Explanation
// Longest good substring is "aei"

//////////////////////////////////////////////

 ///////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

bool  check(char ch){
   if (ch=='a' ||ch=='e' || ch=='i' || ch=='o' || ch=='u' ) return true;
   return false;
}
int SubStr(string s){
	int n = s.size();
	int ans=0;
	for(int i =0;i<n ;i++){
		string temp = "";
		int j=i;
		for( ; j<n;j++){
			if(check(s[j])){
				temp+=s[j];
			}else{
				break;
			}
		}
	//	cout<<temp<<endl;
		int len=temp.size();
		if(len>ans){
			ans=len;
		}
		i=j;
	}
	return ans;
}
int main() {
	string s;
	cin>>s;
	cout<<SubStr(s)<<endl;
	
	return 0;
}