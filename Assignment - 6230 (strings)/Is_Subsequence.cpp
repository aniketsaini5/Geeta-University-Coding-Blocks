// // In the realm of Coding Blocks, Mr. Block pondered over two strings, s and t, contemplating their relationship. Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

// // Input Format
// // Input strings s and t

// // Constraints
// // 0 <= s.length <= 100
// // 0 <= t.length <= 10^4
// // s and t consist only of lowercase English letters.

// // Output Format
// // true or false

// // Sample Input
// // abc
// // ahbgdc
// // Sample Output
// // true
// // Explanation
// // None.

// ### Algorithm Explanation in Hinglish

// 1. **Input lena**:
//    - Do strings `s1` aur `s2` ko input le lo.

// 2. **Initial Variables**:
//    - `i` aur `j` ko `0` se initialize karna hai. Yeh indexes hain jo `s1` aur `s2` ke characters ko track karenge.
//    - `len1` aur `len2` ko `s1` aur `s2` ke lengths se initialize karna hai.

// 3. **Loop through Strings**:
//    - Jab tak `i` `len1` se chhota hai aur `j` `len2` se chhota hai, loop chalana hai.
//    - Har iteration mein check karo ki `s1[i]` aur `s2[j]` equal hain ya nahi.
//    - Agar equal hain, toh `i` ko increment karo (iska matlab hai ki `s1` ka current character `s2` mein mil gaya hai).
//    - `j` ko har iteration mein increment karo (iska matlab `s2` ka next character check karna hai).

// 4. **Result Check**:
//    - Loop ke baad check karo agar `i` `len1` ke barabar hai ya nahi.
//    - Agar `i` `len1` ke barabar hai, toh iska matlab hai `s1` ka saara character `s2` mein sequence ke saath mil gaya, toh "true" print karo.
//    - Agar `i` `len1` ke barabar nahi hai, toh "false" print karo.

// ### Code Explanation in Hinglish

// - Pehle, do strings `s1` aur `s2` ko input le rahe hain.
// - `i` aur `j` ko `0` se initialize karte hain. Yeh indexes hain jo `s1` aur `s2` ke characters ko point karenge.
// - `len1` aur `len2` mein `s1` aur `s2` ke lengths store karte hain.
// - Ek `while` loop chalate hain jab tak `i` `len1` se chhota hai aur `j` `len2` se chhota hai.
//   - Agar `s1[i]` aur `s2[j]` same hain, toh `i` ko increment karte hain (iska matlab current character `s1` ka match ho gaya).
//   - `j` ko har iteration mein increment karte hain.
// - Loop ke baad check karte hain agar `i` `len1` ke barabar hai:
//   - Agar haan, toh "true" print karte hain.
//   - Agar nahi, toh "false" print karte hain.

// Yeh algorithm check karta hai ki kya `s1` `s2` ka subsequence hai ya nahi. `s1` ka har character `s2` mein sequentially present hona chahiye.


#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1,s2;
    cin>>s1>>s2;
    int i = 0, j= 0;
    int len1=s1.length() , len2 = s2.length();

    while(i<len1 && j< len2){
        if(s1[i] == s2[j]){
            i++;
        }
        j++;
    }

    if(len1 == i){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
}


// 2nd  with in bulid functions 

#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    // Find s1 in s2
    size_t found = s2.find(s1);

    // Check if s1 is a substring of s2
    if (found != string::npos) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}

