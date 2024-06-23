// In Coding Blocks, Priyanshu's birthday gift comprised two strings of equal length. Disregarding letter case, he joyfully compared them lexicographically( Dictionary Order ), eager to uncover their beauty through meticulous analysis.

// Input Format
// Each of the first two lines contains a bought string.

// Constraints
// 1 <= s.length <= 104
// This string only consists of uppercase and lowercase Latin letters.

// Output Format
// If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0".

// Sample Input
// aaaa
// aaaA
// Sample Output
// 0
// Explanation
// Both the given strings are lexicographically equal .
// Hence print 0 

#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1,s2;
    cin>>s1>>s2;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    int res = s1.compare(s2);
    if(res<0){
        cout<<"-1"<<endl;
    }else if(res > 0){
        cout<<"1"<<endl;
    }else{
        cout<<"0"<<endl;
    }
    return 0;

}
