// Take as input N, a number. Print the pattern according to given input and output section.

// Input Format
// Integer

// Constraints
// 1 <= N <= 100;

// Output Format
// Pattern

// Sample Input
// 3
// Sample Output
// *

// **

// ***

// Is code ka kaam hai ek triangle pattern generate karna, jisme har line me '*' characters print hote hain. Yaha par algorithm (algo) diya gaya hai:

// 1. User se ek integer input liya jata hai, jise 'r' me store kiya jata hai.
// 2. Ek loop chalaya jata hai jiska range 0 se lekar r tak hota hai (inclusive).
//    - Har iteration me, ek aur loop chalaya jata hai jiska range 0 se lekar `i-1` tak hota hai.
//    - Har inner loop me, '*' print kiya jata hai.
// 3. Har inner loop ke baad ek newline character print kiya jata hai taaki agla '*' next line se shuru ho.
// 4. Jab outer loop pura ho jata hai, program khatam hota hai.

// Yeh code ek triangle pattern generate karta hai jisme pehli line me ek '*', dusri line me do '*', teesri line me teen '*', aur aise hi har agle line me ek '*' zyada hota hai, jab tak r lines na ho jayein.


#include <iostream>

using namespace std;

int main(){

    int r;
    cin>>r;

    for(int i=0;i<=r;i++){

        for(int j=0;j<i;j++){
        
       cout<<"*";
    }
    cout<<endl;
}
return 0;
}