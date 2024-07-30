// Given an array of patterns containing only I’s and D’s. I for increasing and D for decreasing. Devise an algorithm to print the minimum number following that pattern. Digits from 1-9 and digits can’t repeat.

// Input Format
// The First Line contains an Integer N, size of the array. Next Line contains N Strings separated by space.

// Constraints
// 1 ≤ T ≤ 100 1 ≤ Length of String ≤ 8

// Output Format
// Print the minimum number for each String separated by a new Line.

// Sample Input
// 5
// D I DD II IDI
// Sample Output
// 21
// 12
// 321 
// 123
// 1324
// Explanation
// For the Given sample case, For a Pattern of 'D' print a decreasing sequence which is 2 1.

#include<bits/stdc++.h>
using namespace std;
bool isSafe(string out,int dig){
	for(int i=0;i<out.size();i++){
		if(out[i]-'0'==dig)
			return false;
	}
	return true;
}
bool solve(string s,int i,string out){
    
	int n=s.size();
   
	if(i==n){
		cout<<out<<endl;
		return true;
	}

	int dig;
	if(i>=0){
		dig=out[i]-'0';
	}
   

	if(i==-1){
		for(int j=1;j<=9;j++){
            //char ch='0'+j;
			// out.push_back(ch);
            out+=to_string(j);
			if(solve(s,i+1,out)) return true;
			out.pop_back();
		}
	}
	else if(i>=0 && s[i]=='D'){
		for(int j=dig-1;j>0;j--){
			if(isSafe(out,j)){
				out+=to_string(j);
			    if(solve(s,i+1,out)) return true;
                out.pop_back();
			}
		}
	}else if(i>=0 && s[i]=='I'){
			for(int j=dig+1;j<=9;j++){
				if(isSafe(out,j)){
					out+=to_string(j);
			        if(solve(s,i+1,out)) return true;
                    out.pop_back();
				}
		    }
	}
    return  false;
}
int main() {
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		string out="";
		solve(s,-1,out);
	}
	return 0;
}