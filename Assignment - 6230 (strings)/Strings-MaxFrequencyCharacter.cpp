// Take as input S, a string. Write a function that returns the character with maximum frequency. Print the value returned.

// Input Format
// String

// Constraints
// A string of length between 1 to 1000.

// Output Format
// Character

// Sample Input
// aaabacb
// Sample Output
// a
// Explanation
// For the given input string, a appear 4 times. Hence, it is the most frequent character.

//////////////////////////////////////////////////////////////////////////

//#### Code Explanation:


// #### Algorithm:

// 1. **Input lena**:
//    - Ek string 's' input lete hain user se.

// 2. **Initialization**:
//    - Ek empty string 'ans' declare karte hain jo unique characters store karega.
//    - Ek empty vector 'Max_Count' declare karte hain jo character counts store karega.
//    - Ek integer `count = 1` initialize karte hain jo consecutive characters ko count karega.
//    - String 's' ki length `n` mein store karte hain.
//    - String 's' ko sort karte hain taaki same characters saath mein ho.

// 3. **Character Counting**:
//    - Ek for loop chalate hain 0 se leke string ki length tak (i.e., `i < n`).
//    - Har character ko check karte hain:
//      - Agar current character aur next character same hain (`s[i] == s[i + 1]`), toh counter `count` ko increment kar dete hain.
//      - Agar current character aur next character different hain:
//        - Current character ko `ans` string mein add karte hain (`ans.push_back(s[i])`).
//        - Counter `count` ko `Max_Count` vector mein add karte hain (`Max_Count.push_back(count)`).
//        - Counter `count` ko reset karte hain 1 pe.

// 4. **Find Maximum Count**:
//    - `maximum_index(Max_Count)` function call karke maximum count ka index nikalte hain.

// 5. **Final Output**:
//    - 'ans' string ke maxindex pe jo character hai usse print karte hain.

// 6. **Program ka end**:
//    - `return 0;` likhte hain jo indicate karta hai ki program successfully end ho gaya.

// #### Example:

// Agar input string `s = "aabbbcc"` hai:

// - Sort karne ke baad: `s = "aabbccc"`
// - Loop 1 (i = 0): 'a' aur next 'a' same hain, `count = 2`.
// - Loop 2 (i = 1): 'a' aur next 'b' different hain, `ans = "a"`, `Max_Count = [2]`, `count = 1`.
// - Loop 3 (i = 2): 'b' aur next 'b' same hain, `count = 2`.
// - Loop 4 (i = 3): 'b' aur next 'c' different hain, `ans = "ab"`, `Max_Count = [2, 2]`, `count = 1`.
// - Loop 5 (i = 4): 'c' aur next 'c' same hain, `count = 2`.
// - Loop 6 (i = 5): 'c' aur next 'c' same hain, `count = 3`.
// - Loop 7 (i = 6): 'c' ke baad koi character nahi hai, `ans = "abc"`, `Max_Count = [2, 2, 3]`.

// - `maximum_index(Max_Count)` returns 2 (index of maximum count).
// - Output: 'c'

// Output:
// c

#include<bits/stdc++.h>  // Sabhi standard libraries ko include kar leta hai
using namespace std;

// Function to find the index of the maximum element in a vector
int maximum_index(vector<int> Max_Count) {
    int maxindex = -1;  // Initialize karte hain maxindex ko -1 se
    int MAX = INT_MIN;  // Initialize karte hain MAX ko INT_MIN se (minimum possible integer value)
    for(int i = 0; i < Max_Count.size(); i++) {  // Loop chalate hain Max_Count vector ke har element par
        if(MAX < Max_Count[i]) {  // Agar current element MAX se bada hai
            MAX = Max_Count[i];  // Toh MAX ko update karte hain
            maxindex = i;  // Aur maxindex ko current index se update karte hain
        }
    }
    return maxindex;  // Return karte hain maxindex
}

int main() {
    string s;  // Ek string variable 's' declare karte hain
    cin >> s;  // User se input lete hain aur 's' mein store karte hain
    string ans;  // Ek aur string 'ans' declare karte hain jo unique characters store karega
    vector<int> Max_Count;  // Ek vector 'Max_Count' declare karte hain jo character counts store karega
    int count = 1;  // Ek counter variable 'count' initialize karte hain 1 se
    int n = s.size();  // String 's' ki length nikalte hain
    sort(s.begin(), s.end());  // String 's' ko sort karte hain

    // Loop chalate hain string ke har character par
    for (int i = 0; i < n; i++) {
        if (i + 1 < n && s[i] == s[i + 1]) {  // Agar current character aur next character same hain
            count++;  // Counter ko increment karte hain
        } else {
            ans.push_back(s[i]);  // Current character ko 'ans' string mein add karte hain
            Max_Count.push_back(count);  // Counter ko 'Max_Count' vector mein add karte hain
            count = 1;  // Counter ko reset karte hain 1 pe
        }
    }
    
    int maxindex = maximum_index(Max_Count);  // Maximum count ka index nikalte hain
    cout << ans[maxindex] << endl;  // 'ans' string ke maxindex pe jo character hai usse print karte hain

    return 0;  // Program successfully end karte hain
}

