// Take as input S, a string. Write a function that toggles the case of all characters in the string. Print the value returned.

// Input Format
// String

// Constraints
// Length of string should be between 1 to 1000.

// Output Format
// String

// Sample Input
// abC
// Sample Output
// ABc
// Explanation
// Toggle Case means to change UpperCase character to LowerCase character and vice-versa.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// /#### Code Explanation:


// #### Algorithm:

// 1. **Input lena**:
//    - Ek string 's' input lete hain user se.

// 2. **Loop chalana**:
//    - Ek for loop chalate hain 0 se leke string ki length tak (i.e., `i < s.size()`).
//    - Har character ko check karte hain ki woh uppercase letter ('A' se 'Z') hai ya lowercase letter ('a' se 'z') hai.
//      - Agar uppercase letter hai, toh `tolower(s[i])` use karke usse lowercase mein convert kar dete hain.
//      - Agar lowercase letter hai, toh `toupper(s[i])` use karke usse uppercase mein convert kar dete hain.

// 3. **Modified string print karna**:
//    - Loop ke baad modified string `s` ko `cout` ke through print karte hain.

// 4. **Program ka end**:
//    - `return 0;` likhte hain jo indicate karta hai ki program successfully end ho gaya.

// #### Example:

// Agar input string `s = "HeLLoWoRLd"` hai:

// - Loop 1: 'H' uppercase hai, toh usse lowercase 'h' mein convert karte hain.
// - Loop 2: 'e' lowercase hai, toh usse uppercase 'E' mein convert karte hain.
// - Loop 3: 'L' uppercase hai, toh usse lowercase 'l' mein convert karte hain.
// - Loop 4: 'L' uppercase hai, toh usse lowercase 'l' mein convert karte hain.
// - Loop 5: 'o' lowercase hai, toh usse uppercase 'O' mein convert karte hain.
// - Loop 6: 'W' uppercase hai, toh usse lowercase 'w' mein convert karte hain.
// - Loop 7: 'o' lowercase hai, toh usse uppercase 'O' mein convert karte hain.
// - Loop 8: 'R' uppercase hai, toh usse lowercase 'r' mein convert karte hain.
// - Loop 9: 'L' uppercase hai, toh usse lowercase 'l' mein convert karte hain.
// - Loop 10: 'd' lowercase hai, toh usse uppercase 'D' mein convert karte hain.

// Output:
// ```
// hEllOwOrlD

#include<bits/stdc++.h>  // Sabhi standard libraries ko include kar leta hai
using namespace std;

int main() {
    string s;  // Ek string variable 's' declare karte hain
    cin >> s;  // User se input lete hain aur 's' mein store karte hain

    // Loop chalate hain string ke har character par
    for(int i = 0; i < s.size(); i++){
        // Agar current character uppercase letter hai (A-Z ke beech)
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = tolower(s[i]);  // Toh usse lowercase mein convert karte hain
        } else {  // Agar current character lowercase letter hai (a-z ke beech)
            s[i] = toupper(s[i]);  // Toh usse uppercase mein convert karte hain
        }
    }
    
    // Final modified string ko print karte hain
    cout << s << endl;

    return 0;  // Program successfully end karte hain
}

