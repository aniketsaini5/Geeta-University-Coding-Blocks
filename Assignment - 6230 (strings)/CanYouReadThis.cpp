// One of the important aspect of object oriented programming is readability of the code. To enhance the readability of code, developers write function and variable names in Camel Case. You are given a string, S, written in Camel Case. FindAllTheWordsContainedInIt.

// Input Format
// A single line contains the string.

// Constraints
// |S|<=1000

// Output Format
// Print words present in the string, in the order in which it appears in the string.

// Sample Input
// IAmACompetitiveProgrammer
// Sample Output
// I
// Am
// A
// Competitive
// Programmer
// Explanation
// There are 5 words in the string.

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #### Code Explanation:


// #### Algorithm:

// 1. **Input lena**:
//    - Ek string 's' input lete hain user se.

// 2. **String ki length nikalna**:
//    - `len = s.size();` use karke string 's' ki length nikalte hain.

// 3. **Loop chalana**:
//    - Ek for loop chalate hain 0 se leke string ki length tak (i.e., `i < len`).
//    - Har character ko check karte hain ki woh uppercase letter ('A' se 'Z') hai ya nahi.
//      - Agar uppercase letter hai, toh `cout << endl << s[i];` use karke nayi line mein woh character print karte hain.
//      - Agar uppercase letter nahi hai, toh directly `cout << s[i];` use karke woh character print karte hain.

// 4. **Program ka end**:
//    - `return 0;` likhte hain jo indicate karta hai ki program successfully end ho gaya.

// #### Example:

// Agar input string `s = "HelloWorld"` hai:

// - Loop 1: 'H' uppercase hai, nayi line mein 'H' print karega.
// - Loop 2: 'e' lowercase hai, seedha 'e' print karega.
// - Loop 3: 'l' lowercase hai, seedha 'l' print karega.
// - Loop 4: 'l' lowercase hai, seedha 'l' print karega.
// - Loop 5: 'o' lowercase hai, seedha 'o' print karega.
// - Loop 6: 'W' uppercase hai, nayi line mein 'W' print karega.
// - Loop 7: 'o' lowercase hai, seedha 'o' print karega.
// - Loop 8: 'r' lowercase hai, seedha 'r' print karega.
// - Loop 9: 'l' lowercase hai, seedha 'l' print karega.
// - Loop 10: 'd' lowercase hai, seedha 'd' print karega.

// Output:
// ```
// H
// ello
// W
// orld


#include<bits/stdc++.h>  // Sabhi standard libraries ko include kar leta hai
using namespace std;

int main() {
    string s;  // Ek string variable 's' declare karte hain
    cin >> s;  // User se input lete hain aur 's' mein store karte hain

    int len = s.size();  // String 's' ki length nikalte hain

    // Loop chalate hain string ke har character par
    for(int i = 0; i < len; i++){
        // Agar current character uppercase letter hai (A-Z ke beech)
        if(s[i] >= 'A' && s[i] <= 'Z'){
            cout << endl << s[i];  // Toh naya line print karke phir character print karte hain
        } else {
            cout << s[i];  // Nahi toh seedha character print karte hain
        }
    }

    return 0;
}