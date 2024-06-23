// ake as input S, a string. Write a program that gives the count of substrings of this string which are palindromes and Print the ans.

// Input Format
// Single line input containing a string

// Constraints
// Length of string is between 1 to 1000.

// Output Format
// Integer output showing the number of palindromic substrings.

// Sample Input
// abc
// Sample Output
// 3
// Explanation
// For the given sample case , the palindromic substrings of the string abc are "a","b" and "c".So, the ans is 3.

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str) {
    int n = str.size();
    int left = 0, right = n - 1;
    while (left <= right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int count_SubStr(string s,int count){
	int n = s.size();
	for(int i =0;i<n ;i++){
		string substr = "";
		for(int j =i; j<n;j++){
			substr += s[j];
			if(isPalindrome(substr)){ 
                count++;
            } 
		}
	}
    return count;
}
int main() {
	string s;
	cin>>s;
	int count = 0;
	int ans = count_SubStr(s,count);
	cout<<ans<<endl;

	
	return 0;
}