// Take as input S, a string. Write a function that returns true if the string is a palindrome and false otherwise. Print the value returned.

// Input Format
// String

// Constraints
// String length between 1 to 1000 characters

// Output Format
// Boolean

// Sample Input
// abba
// Sample Output
// true
// Explanation
// A string is said to be palindrome if reverse of the string is same as string. For example, “abba” is palindrome as it's reverse is "abba", but “abbc” is not palindrome as it's reverse is "cbba".

/////////////////////////////////////////////////////////////////////////////////////////

// #### Code Explanation:


// #### Algorithm:

// 1. **Input lena**:
//    - Ek string 's' input lete hain user se.

// 2. **Palindrome check karne ki function**:
//    - Ek function `is_pali` define karte hain jo ek string 's' ko parameter ke roop mein leta hai.
//    - Is function mein ek new string `str` banate hain jo original string 's' ka copy hota hai.
//    - String `str` ko reverse karte hain using `reverse(str.begin(), str.end())`.
//    - Check karte hain ki reversed string 'str' original string 's' ke barabar hai ya nahi.
//    - Agar barabar hai toh `true` return karte hain, nahi toh `false`.

// 3. **Main function**:
//    - `is_pali` function call karke check karte hain ki input string palindrome hai ya nahi.
//    - Agar function `true` return kare toh "true" print karte hain.
//    - Agar function `false` return kare toh "false" print karte hain.

// 4. **Program ka end**:
//    - `return 0;` likhte hain jo indicate karta hai ki program successfully end ho gaya.

// #### Example:

// Agar input string `s = "radar"` hai:

// - `is_pali("radar")` call hota hai.
// - Inside `is_pali` function:
//   - 'str' banate hain jo "radar" hota hai.
//   - 'str' ko reverse karte hain jo "radar" hi rehta hai.
//   - Compare karte hain "radar" == "radar", jo `true` return karta hai.
// - Output "true" print hota hai.

// Agar input string `s = "hello"` hai:

// - `is_pali("hello")` call hota hai.
// - Inside `is_pali` function:
//   - 'str' banate hain jo "hello" hota hai.
//   - 'str' ko reverse karte hain jo "olleh" ban jata hai.
//   - Compare karte hain "hello" == "olleh", jo `false` return karta hai.
// - Output "false" print hota hai.

#include<bits/stdc++.h>  // Sabhi standard libraries ko include kar leta hai
using namespace std;

// Function to check if the string is a palindrome
bool is_pali(string s) {
    string str = s;  // Ek new string 'str' create karte hain aur 's' ko copy karte hain
    reverse(str.begin(), str.end());  // 'str' ko reverse karte hain
    return str == s;  // Check karte hain ki reversed string original string ke barabar hai ya nahi
}

int main() {
    string s;  // Ek string variable 's' declare karte hain
    cin >> s;  // User se input lete hain aur 's' mein store karte hain

    // Check karte hain ki string palindrome hai ya nahi
    if (is_pali(s)) {
        cout << "true" << endl;  // Agar palindrome hai toh "true" print karte hain
    } else {
        cout << "false" << endl;  // Agar palindrome nahi hai toh "false" print karte hain
    }

    return 0;  // Program successfully end karte hain
}
