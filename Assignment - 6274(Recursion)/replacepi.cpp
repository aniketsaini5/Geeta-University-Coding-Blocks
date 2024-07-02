// Replace all occurrences of pi with 3.14

// Input Format
// Integer N, no of lines with one string per line

// Constraints
// 0 < N < 1000
// 0 <= len(str) < 1000

// Output Format
// Output result one per line

// Sample Input
// 3
// xpix
// xabpixx3.15x
// xpipippixx
// Sample Output
// x3.14x
// xab3.14xx3.15x
// x3.143.14p3.14xx
// Explanation
// All occurrences of pi have been replaced with "3.14".









#include<bits/stdc++.h>
using namespace std;
void replacepi(string s,int i,int n){
	if(n==i){
		cout<<s<<endl;
		return;
	}
	// if(s[i] == 'p' && s[i+1] == 'i'){
	// 	s[i] ='3';
	// 	s[i+1] = '.';
    //     s[i+2] ='1';
    //     s[i+3] ='4';
	// replacepi(s,i+4,n+2);
	// }else{
	// replacepi(s,++i,n);
    // }

    if (i < n - 1 && s[i] == 'p' && s[i + 1] == 'i') {
        s.replace(i, 2, "3.14");
        replacepi(s, i + 4, n + 2); 
    } else {
        replacepi(s, i + 1, n);
    }

}
int main() {
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		int n = s.size();
		replacepi(s,0,n);
	}
	return 0;
}