// Take N (number of rows), print the following pattern (for N = 4)

// 1
// 2 3
// 4 5 6
// 7 8 9 10

// Input Format
// Constraints
// 0 < N < 100

// Output Format
// Sample Input
// 4
// Sample Output
// 1  
// 2	3  
// 4	5	6  
// 7	8	9	10
// Explanation
// Each number is separated from other by a tab.


// Is code ka kaam hai ek pattern generate karna jisme har line me numbers increment hoti hain. Yeh hai code ka algorithm aur explanation:

// 1. User se ek integer input liya jata hai, jise 'n' me store kiya jata hai.
// 2. Ek variable 'x' initialize kiya jata hai, jiska starting value 1 hota hai.
// 3. Ek outer loop chalaya jata hai jiska range 1 se lekar n tak hota hai:
//    - Har iteration me ek inner loop chalaya jata hai jiska range 1 se lekar 'i' tak hota hai.
//    - Har inner loop me, variable 'x' ko tab tak print kiya jata hai jab tak 'i' tak pahuchte pahuchte 'x' ki value increment hoti rahe.
//    - Har number ke baad ek tab space ("\t") print kiya jata hai.
// 4. Har outer loop ke baad, ek newline character print kiya jata hai taaki agla number next line me aaye.
// 5. Jab outer loop pura ho jata hai, program khatam hota hai.

// Yeh code ek triangular pattern generate karta hai, jisme pehli line me 1 number, dusri line me 2 numbers, teesri line me 3 numbers, aur aise hi continue hota rahta hai jab tak n lines na ho jayein.

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int x=1;
	for(int i = 1;i<=n;i++){
		for(int j =1; j<=i; j++){
			cout<<x<<"\t";
		x++;
		}
		cout<<endl;
	}
	return 0;
}