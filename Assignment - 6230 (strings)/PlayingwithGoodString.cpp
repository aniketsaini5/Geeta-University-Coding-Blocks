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

 //          UNSOLVED  ///

 ///////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

void  check_have_vowel(string str){
     char goodStr [] = {'a','e','i','o','u'};
	 //code

}
void SubStr(string s){
	int n = s.size();
	for(int i =0;i<n ;i++){
		string substr = "";
		for(int j =i; j<n;j++){
			substr += s[j];
			check_have_vowel(substr);
			//cout<<substr<<endl;
		}
	}
}
int main() {
	string s;
	cin>>s;
	SubStr(s);
	
	return 0;
}