// Take N (number of rows), print the following pattern (for N = 5)
// 1
// 2 2
// 3 0 3
// 4 0 0 4
// 5 0 0 0 5

// Input Format
// There will be an integer in input.

// Constraints
// 0 < N < 100

// Output Format
// Print the pattern.

// Sample Input
// 5
// Sample Output
// 1  
// 2	2  
// 3	0	3    
// 4	0	0	4  
// 5	0	0	0	5
// Explanation
// Each number is separated from other by a tab.If row number is n (>1), total character is n. First and last character is n and rest are 0.

// Is code ka kaam hai ek triangular pattern generate karna jisme har line me numbers print hote hain. Yaha par algorithm aur explanation diya gaya hai:

// 1. User se ek integer input liya jata hai, jise 'r' me store kiya jata hai.
// 2. Ek outer loop chalaya jata hai jiska range 1 se lekar r tak hota hai. Ye loop har line ko represent karta hai.
//    - Har iteration me, ek inner loop chalaya jata hai jiska range 1 se lekar 'i' tak hota hai. Inner loop 'i' number of columns ko represent karta hai.
//    - Har inner loop ke andar ek condition check hoti hai:
//      - Agar 'j' (current column index) 1 nahi hai aur 'j' 'i' nahi hai, toh uss position par 0 print kiya jata hai ("\t" ke saath).
//      - Warna, agar 'j' 1 hai ya phir 'j' 'i' hai, toh uss position par 'i' print kiya jata hai ("\t" ke saath).
//    - Is tarah se har line me appropriate numbers aur zeros print hote hain jo pattern ko form karte hain.
// 3. Har outer loop ke baad, ek newline character print kiya jata hai taaki agla line next line se shuru ho.
// 4. Jab outer loop pura ho jata hai, program khatam hota hai.

// Yeh code ek specific pattern generate karta hai jisme har line me numbers hote hain, aur kuch positions par zeros bhi hote hain, jo har line ke according vary karte hain.


#include <iostream>

using namespace std;

int main() {
    int r;
    cin >> r;

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= i; j++) {
            if (j != 1 && j != i) {
                cout << 0 << "\t";
            } else {
                cout << i << "\t";
            }
        }
        cout << endl;
    }

    return 0;
}
