// Take N (number of rows), print the following pattern (for N = 4)
// 0
// 1 1
// 2 3 5
// 8 13 21 34

// Input Format
// Constraints
// 0 < N < 100

// Output Format
// Sample Input
// 4
// Sample Output
// 0 
// 1    1 
// 2    3     5 
// 8   13    21    34
// Explanation
// Each number is separated from other by a tab. For given input n, You need to print n(n+1)/2 fibonacci numbers. Kth row contains , next k fibonacci numbers.


// Is code ka kaam hai Fibonacci pattern generate karna, jisme har line me Fibonacci series ke numbers print hote hain. Yaha par algorithm aur explanation diya gaya hai:

// 1. User se ek integer input liya jata hai, jise 'N' me store kiya jata hai.
// 2. Do variables initialize kiye jate hain:
//    - `a` jo 0 hai (Fibonacci series ka pehla element)
//    - `b` jo 1 hai (Fibonacci series ka doosra element)
// 3. Ek outer loop chalaya jata hai jiska range 1 se lekar N tak hota hai. Ye loop har line ko represent karta hai.
//    - Har iteration me, ek inner loop chalaya jata hai jiska range 0 se lekar (i-1) tak hota hai. Inner loop 'i' number of columns ko represent karta hai.
//    - Har inner loop ke andar ek condition check hoti hai:
//      - Agar current `i` 1 hai aur `j` bhi 0 hai, toh pehle Fibonacci number `a` print kiya jata hai ("\t" ke saath).
//      - Agar current `i` 2 hai aur `j` bhi 0 hai, toh doosra Fibonacci number `b` print kiya jata hai ("\t" ke saath).
//      - Agar `i` aur `j` dono conditions me nahi aate hain, toh next Fibonacci number calculate kiya jata hai (`next = a + b`), aur `next` ko print kiya jata hai ("\t" ke saath).
//        - Uske baad `a` ko `b` me aur `b` ko `next` me update kiya jata hai, taaki agle Fibonacci number ke liye ready rahein.
// 4. Har outer loop ke baad, ek newline character print kiya jata hai taaki agla line next line se shuru ho.
// 5. Jab outer loop pura ho jata hai, program khatam hota hai.

// Yeh code Fibonacci sequence ke numbers ko ek triangular pattern me display karta hai, jisme har line me Fibonacci series ke numbers hote hain.


#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

     long long a = 0, b = 1;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++) {
            if (i == 1 && j == 0) {
                cout << a << "\t";
            } else if (i == 2 && j == 0) {
                cout << b << "\t";
            } else {
                long long next = a + b;
                cout << next << "\t";
                a = b;
                b = next;
            }
        }
        cout << endl;
    }
}