// You will be given a number N. You have to code a hollow diamond looking pattern.

// The output for N=5 is given in the following image.

// Screen Shot 2016-06-09 at 2.47.18 pm.png

// Input Format
// The input has only one single integer N.

// Constraints
// Output Format
// Output the given pattern.

// Sample Input
// 5
// Sample Output
// *********
// **** ****
// ***   ***
// **     **
// *       *
// **     **
// ***   ***
// **** ****
// *********
// Explanation
// Write a code to print above given pattern. No space between any two characters.

// Is code ka kaam hai ek diamond shape ka pattern generate karna '*' aur spaces (' ') se. Yaha par code ka algorithm (algo) diya gaya hai:

// 1. User se ek integer input liya jata hai, jise 'n' me store kiya jata hai.
// 2. `n` ko modify kiya jata hai `n = (n*2)-1` se, taki humara pattern symmetric ho sake.
// 3. Ek outer loop chalaya jata hai jiska range 1 se lekar `(n / 2) + 1` tak hota hai:
//    - Har iteration me, ek inner loop chalaya jata hai jiska range 1 se lekar `n` tak hota hai.
//    - Har column ke liye condition check hoti hai:
//      - Agar `j` uss line ke liye specified range me hai jo diamond shape ko define karta hai, toh uss position par space (' ') print kiya jata hai.
//      - Warna, '*' print kiya jata hai.
// 4. Pehle loop ke baad ek newline print kiya jata hai.
// 5. Fir ek loop chalaya jata hai `(n / 2)` se lekar 1 tak:
//    - Yeh loop neeche se upar ki taraf pattern ko generate karta hai, jaise pehle loop ne upar se neeche kiya tha.
//    - Har iteration me, ek inner loop chalaya jata hai jiska range 1 se lekar `n` tak hota hai.
//    - Har column ke liye condition check hoti hai:
//      - Agar `j` uss line ke liye specified range me hai jo diamond shape ko define karta hai, toh uss position par space (' ') print kiya jata hai.
//      - Warna, '*' print kiya jata hai.
// 6. Dusra loop bhi pura hone ke baad program khatam hota hai.

// Yeh code diamond shape ka pattern generate karta hai, jisme har line me appropriate spaces aur '*' hote hain jo diamond ko form karte hain.

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	n = (n*2)-1;
	
	  for (int i = 1; i <= (n / 2) + 1; i++)
    {
        for (int j = 1; j <= n; j++) {
            if (j <= ((n / 2) + i)-1 && j >= (n / 2) + 3 - i) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
    for (int i = (n / 2); i >= 1; i--)
    {
        for (int j = 1; j <= n; j++) {
            if (j <= ((n / 2) + i)-1 && j >= (n / 2) + 3 - i) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
}