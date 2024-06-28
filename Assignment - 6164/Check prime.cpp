// Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".

// Input Format
// Constraints
// 2 < N <= 1000000000

// Output Format
// Sample Input
// 3
// Sample Output
// Prime
// Explanation
// The output is case specific

// Yeh code kaam karta hai ki ek number prime hai ya nahi check karne ke liye. Yaha par algorithm (algo) diya gaya hai:

// 1. User se ek integer input liya jata hai, jise 'n' me store kiya jata hai.
// 2. Ek variable `count` initialize kiya jata hai jiska initial value 0 hota hai. Yeh count karega kitne numbers se 'n' divisible hai.
// 3. Ek loop chalaya jata hai jiska range 2 se lekar `n/2` tak hota hai (`i <= n/2`).
//    - Har iteration me, check kiya jata hai ki kya 'n' `i` se divisible hai (`n % i == 0`). Agar divisible hai, to `count` ko increment kiya jata hai.
// 4. Ek baar loop complete hone ke baad, ek conditional statement use hoti hai:
//    - Agar `count` ka value 0 hai, matlab 'n' sirf 1 aur khud se divisible hai, iska matlab 'n' ek prime number hai. Is case me "Prime" print kiya jata hai.
//    - Agar `count` ka value 0 se zyada hai, matlab 'n' kisi aur numbers se bhi divisible hai, to 'n' prime nahi hai. Is case me "Not Prime" print kiya jata hai.
// 5. Program khatam hota hai.

// Yeh code efficient tarike se check karta hai ki ek number prime hai ya nahi, kyunki loop `2` se lekar `n/2` tak hi chalta hai, jisse performance improve hoti hai compared to checking till `n-1`.

#include<iostream>
using namespace std;
int main() {
	int n,count=0;
	cin>> n;
	for(int i = 2; i<=n/2;i++){
        if( n%i==0){
            count++;
        }

    }
    if(count == 0){
        cout<<"Prime";
    }else{
        cout<<"Not Prime";
    }

	return 0;
}
