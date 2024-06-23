// Take as input S, a string. Write a function that does basic string compression. Print the value returned. E.g. for input “aaabbccds” print out a3b2c2ds.

// Input Format
// A single String S.

// Constraints
// A string of length between 1 to 1000

// Output Format
// The compressed String.

// Sample Input
// aaabbccds
// Sample Output
// a3b2c2ds
// Explanation
// In the given sample test case 'a' is repeated 3 times consecutively, 'b' is repeated twice, 'c' is repeated twice. But, 'd' and 's' occurred only once that's why we do not write their occurrence.

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #### Code Explanation:



// #### Algorithm:

// 1. **Input lena**:
//    - Ek string 's' input lete hain user se.

// 2. **Initialization**:
//    - Ek empty string 'ans' declare karte hain jo final compressed string store karega.
//    - Ek integer `count = 1` initialize karte hain jo consecutive characters ko count karega.
//    - String 's' ki length `n` mein store karte hain.

// 3. **Loop chalana**:
//    - Ek for loop chalate hain 0 se leke string ki length tak (i.e., `i < n`).
//    - Har character ko check karte hain:
//      - Agar current character aur next character same hain (`s[i] == s[i + 1]`), toh counter `count` ko increment kar dete hain.
//      - Agar current character aur next character different hain:
//        - Current character ko `ans` string mein add karte hain (`ans.push_back(s[i])`).
//        - Agar counter `count` 1 se zyada hai, toh `count` ko string mein convert karke `ans` mein add karte hain (`ans += to_string(count)`).
//        - Counter `count` ko reset karte hain 1 pe.

// 4. **Final Output**:
//    - Loop ke baad, final compressed string `ans` ko print karte hain.

// 5. **Program ka end**:
//    - `return 0;` likhte hain jo indicate karta hai ki program successfully end ho gaya.

// #### Example:

// Agar input string `s = "aaabbcddd"` hai:

// - Loop 1 (i = 0): 'a' next 'a' ke barabar hai, `count = 2`.
// - Loop 2 (i = 1): 'a' next 'a' ke barabar hai, `count = 3`.
// - Loop 3 (i = 2): 'a' next 'b' ke barabar nahi hai, `ans = "a3"`, `count = 1`.
// - Loop 4 (i = 3): 'b' next 'b' ke barabar hai, `count = 2`.
// - Loop 5 (i = 4): 'b' next 'c' ke barabar nahi hai, `ans = "a3b2"`, `count = 1`.
// - Loop 6 (i = 5): 'c' next 'd' ke barabar nahi hai, `ans = "a3b2c"`, `count = 1`.
// - Loop 7 (i = 6): 'd' next 'd' ke barabar hai, `count = 2`.
// - Loop 8 (i = 7): 'd' next 'd' ke barabar hai, `count = 3`.
// - Loop 9 (i = 8): 'd' ke baad koi character nahi hai, `ans = "a3b2c3d3"`, `count = 1`.

// Output:
// a3b2cd3

#include<bits/stdc++.h>  // Sabhi standard libraries ko include kar leta hai
using namespace std;

int main() {
    string s;  // Ek string variable 's' declare karte hain
    cin >> s;  // User se input lete hain aur 's' mein store karte hain
    string ans;  // Ek aur string 'ans' declare karte hain jo final answer store karega
    int count = 1;  // Ek counter variable 'count' initialize karte hain 1 se
    int n = s.size();  // String 's' ki length nikalte hain

    // Loop chalate hain string ke har character par
    for (int i = 0; i < n; i++) {
        // Agar current character aur next character same hain
        if (i + 1 < n && s[i] == s[i + 1]) {
            count++;  // Counter ko increment karte hain
        } else {
            ans.push_back(s[i]);  // Current character ko 'ans' string mein add karte hain
            if (count > 1) {  // Agar counter 1 se zyada hai
                ans += to_string(count);  // Toh counter ko bhi 'ans' string mein add karte hain
            }
            count = 1;  // Counter ko reset karte hain 1 pe
        }
    }

    cout << ans << endl;  // Final compressed string ko print karte hain

    return 0;  // Program successfully end karte hain
}