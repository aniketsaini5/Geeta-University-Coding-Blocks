// You are given a string of brackets i.e. '{', '}' , '(' , ')', '[' , ']' . You have to check whether the sequence of parenthesis is balanced or not.
// For example, "(())", "(())()" are balanced and "())(", "(()))" are not.

// Input Format
// A string of '(' , ')' , '{' , '}' and '[' , ']' .

// Constraints
// 1<=|S|<=10^5

// Output Format
// Print "Yes" if the brackets are balanced and "No" if not balanced.

// Sample Input
// (())
// Sample Output
// Yes
// Explanation
// (()) is a balanced string.

#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
	int n=s.size();
	stack <char> st;
	bool ans=true;

	for(int i=0;i<n;i++){
		if(s[i]=='{' or s[i]=='(' || s[i]=='['){
			st.push(s[i]);
		}
		else if(s[i]==')'){
			if(!st.empty() && st.top()=='('){
				st.pop();
			}
			else{
				ans = false;
			}
		}
		else if(s[i]==']'){
			if(!st.empty() and st.top()=='['){
				st.pop();
			}
			else{
				ans = false;
			}
		}
		else if(s[i]=='}'){
			if(!st.empty() && st.top()=='{'){
				st.pop();
			}
			else{
				ans = false;
			}
		}
	}
	if(!st.empty()){
		return false;
	}
	return ans;
}	

int main(){
	string s;
	cin>>s;
	if(isValid(s)){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}


}