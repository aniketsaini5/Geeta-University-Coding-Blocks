// Take as input S, a string. Write a program that inserts between each pair of characters the difference between their ascii codes and print the ans.

// Input Format
// String

// Constraints
// Length of String should be between 2 to 1000.

// Output Format
// String

// Sample Input
// acb
// Sample Output
// a2c-1b
// Explanation
// For the sample case, the Ascii code of a=97 and c=99 ,the difference between c and a is 2.Similarly ,the Ascii code of b=98 and c=99 and their difference is -1. So the ans is a2c-1b.

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// #### Code Explanation:


// #### Algorithm:

// 1. **Input lena**:
//    - Ek string 's' input lete hain user se.

// 2. **Initialization**:
//    - Ek empty string 'ans' declare karte hain jo final modified string store karega.
//    - String 's' ki length `n` mein store karte hain.

// 3. **Loop chalana**:
//    - Ek for loop chalate hain 0 se leke string ki length tak (i.e., `i < n`).
//    - Har character ko 'ans' string mein add karte hain (`ans.push_back(s[i])`).
//    - Agar current character last character nahi hai (i.e., `i + 1 < n`):
//      - Next character aur current character ka ASCII difference calculate karte hain (`int sub = s[i + 1] - s[i]`).
//      - Difference ko string mein convert karke 'ans' string mein add karte hain (`ans += to_string(sub)`).

// 4. **Final Output**:
//    - Loop ke baad, final modified string `ans` ko print karte hain.

// 5. **Program ka end**:
//    - `return 0;` likhte hain jo indicate karta hai ki program successfully end ho gaya.

// #### Example:

// Agar input string `s = "abc"` hai:

// - Loop 1 (i = 0): 'a' ko 'ans' mein add karte hain, next character 'b' aur current character 'a' ka difference `1` hai, toh `ans = "a1"`.
// - Loop 2 (i = 1): 'b' ko 'ans' mein add karte hain, next character 'c' aur current character 'b' ka difference `1` hai, toh `ans = "a1b1"`.
// - Loop 3 (i = 2): 'c' ko 'ans' mein add karte hain, last character hai toh difference nahi add karte, toh `ans = "a1b1c"`.

// Output:
// a1b1c

// #### Note:
// Yeh conversion characters ke ASCII values ke basis par ho rahi hai. ASCII values characters ke liye numerical representation hoti hain jo computer understand karta hai.

#include<bits/stdc++.h>  // Sabhi standard libraries ko include kar leta hai
using namespace std;

int main() {
    string s;  // Ek string variable 's' declare karte hain
    cin >> s;  // User se input lete hain aur 's' mein store karte hain
    string ans;  // Ek aur string 'ans' declare karte hain jo final answer store karega
    int n = s.length();  // String 's' ki length nikalte hain

    // Loop chalate hain string ke har character par
    for (int i = 0; i < n; i++) {
        ans.push_back(s[i]);  // Current character ko 'ans' string mein add karte hain
        if (i + 1 < n) {  // Agar current character last character nahi hai
            int sub = s[i + 1] - s[i];  // Next character aur current character ka difference calculate karte hain
            ans += to_string(sub);  // Difference ko string mein convert karke 'ans' mein add karte hain
        }
    }

    cout << ans << endl;  // Final modified string ko print karte hain

    return 0;  // Program successfully end karte hain
}