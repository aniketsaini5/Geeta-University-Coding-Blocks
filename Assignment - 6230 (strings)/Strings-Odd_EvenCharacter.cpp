// Take as input S, a string. Write a function that replaces every even character with the character having just higher ASCII code and every odd character with the character having just lower ASCII code. Print the value returned.

// Input Format
// String

// Constraints
// Length of string should be between 1 to 1000.

// Output Format
// String

// Sample Input
// abcg
// Sample Output
// badf
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #### Code Explanation:

// #### Algorithm:

// 1. **Input lena**:
//    - Ek string 's' input lete hain user se.

// 2. **Loop chalana**:
//    - Ek for loop chalate hain 0 se leke string ki length tak (i.e., `i < s.size()`).
//    - Har character ke index ko check karte hain:
//      - Agar index even hai (i % 2 == 0):
//        - Toh character ko uske ASCII value se 1 increment kar dete hain (`s[i] = s[i] + 1`).
//      - Agar index odd hai (i % 2 != 0):
//        - Toh character ko uske ASCII value se 1 decrement kar dete hain (`s[i] = s[i] - 1`).

// 3. **Modified string print karna**:
//    - Loop ke baad modified string `s` ko `cout` ke through print karte hain.

// 4. **Program ka end**:
//    - `return 0;` likhte hain jo indicate karta hai ki program successfully end ho gaya.

// #### Example:

// Agar input string `s = "abcdef"` hai:

// - Loop 1 (i = 0): 'a' even index par hai, toh 'b' (ASCII value ek se increment) ban jayega.
// - Loop 2 (i = 1): 'b' odd index par hai, toh 'a' (ASCII value ek se decrement) ban jayega.
// - Loop 3 (i = 2): 'c' even index par hai, toh 'd' ban jayega.
// - Loop 4 (i = 3): 'd' odd index par hai, toh 'c' ban jayega.
// - Loop 5 (i = 4): 'e' even index par hai, toh 'f' ban jayega.
// - Loop 6 (i = 5): 'f' odd index par hai, toh 'e' ban jayega.

// Output:
// badcfe


// #### Note:
// Yeh conversion characters ke ASCII values ke basis par ho rahi hai. ASCII values characters ke liye numerical representation hoti hain jo computer understand karta hai.


#include<bits/stdc++.h>  // Sabhi standard libraries ko include kar leta hai
using namespace std;

int main() {
    string s;  // Ek string variable 's' declare karte hain
    cin >> s;  // User se input lete hain aur 's' mein store karte hain

    // Loop chalate hain string ke har character par
    for(int i = 0; i < s.size(); i++){
        if(i % 2 == 0){  // Agar current index even hai (0, 2, 4, ...)
            s[i] = s[i] + 1;  // Toh character ka ASCII value ek se increment karte hain
        } else {  // Agar current index odd hai (1, 3, 5, ...)
            s[i] = s[i] - 1;  // Toh character ka ASCII value ek se decrement karte hain
        }
    }
    
    // Final modified string ko print karte hain
    cout << s << endl;

    return 0;  // Program successfully end karte hain
}
