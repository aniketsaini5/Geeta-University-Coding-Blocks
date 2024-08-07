// Take as input str, a string. We are concerned with all the possible subsequences of str. E.g.

// a. Write a recursive function which returns the count of subsequences for a given string. Print the value returned.

// b. Write a recursive function which prints all possible subsequences for a “abcd” has following subsequences “”, “d”, “c”, “cd”, “b”, “bd”, “bc”, “bcd”, “a”, “ad”, “ac”, “acd”, “ab”, “abd”, “abc”, “abcd”.given string (void is the return type for function).
// Note: Use cin for input for C++

// Input Format
// Enter a string

// Constraints
// None

// Output Format
// Print all the subsequences in a space separated manner and isplay the total no. of subsequences.

// Sample Input
// abcd
// Sample Output
//  d c cd b bd bc bcd a ad ac acd ab abd abc abcd 
// 16
// Explanation
// Print all possible subsequences of the given string.

#include <bits/stdc++.h>
using namespace std;
int c=0;
void subsequence(string s,int i , string output){
    int n  =s.size();
   //base case
    if(i ==n ){
        cout<<output<<" ";
		c++;
        return;
    }
    // exclude()
    subsequence(s,i+1,output);

    // include
    subsequence(s,i+1,output+s[i]);

}
int main(){
    string s,o;
    cin>>s;
    subsequence(s,0,o);
	cout<<endl<<c<<endl;

    return 0;
}