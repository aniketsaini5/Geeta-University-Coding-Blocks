// Take as input str, a string. str represents keys pressed on a nokia phone keypad. We are concerned with all possible words that can be written with the pressed keys.

// Assume the following alphabets on the keys: 1 -> abc , 2 -> def , 3 -> ghi , 4 -> jkl , 5 -> mno , 6 -> pqrs , 7 -> tuv , 8 -> wx , 9 -> yz

// E.g. “12” can produce following words “ad”, “ae”, “af”, “bd”, “be”, “bf”, “cd”, “ce”, “cf”

// a. Write a recursive function which returns the count of words for a given keypad string. Print the value returned.

// b.Write a recursive function which prints all possible words for a given keypad string (void is the return type for function).

// Input Format
// Single line input containing a single integer.

// Constraints
// 1 <= Length of string <= 10^3

// Output Format
// Print all the words in a space separated manner. Also print the count of these numbers in next line.

// Sample Input
// 12
// Sample Output
// ad ae af bd be bf cd ce cf
// 9
// Explanation
// 1 can correspond to 'a' , 'b' or 'c' .
// 2 can correspond to 'd', 'e' or 'f'.
// We print all combinations of these

#include<bits/stdc++.h>
using namespace std;

string arr[10]={ ".","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int n;
// int count=0;
int solve(string& digits,string& output,int i,int& count){
    if(i==n){
        cout<<output<<" ";
		count++;
        // return count;
    }
    int dig=digits[i]-'0';
    string temp=arr[dig];
    for(int j=0;j<temp.size();j++){
        output.push_back(temp[j]);
        solve(digits,output,i+1,count);
        output.pop_back();
    }
	return count;
}
int main(){
   string digits;
   cin>>digits;
   n=digits.size();
   string output="";
   int count =0;
   solve (digits,output,0,count);
   cout<<endl;
   cout<<count;
   return 0;

}

