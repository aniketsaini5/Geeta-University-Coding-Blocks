// Given number of rows N, you have to print a Hollow Rhombus. See the output for corresponding given input.

// Input Format
// Single integer N.

// Constraints
// N <= 20

// Output Format
// Print pattern.

// Sample Input
// 5
// Sample Output
//     *****
//    *   *
//   *   *
//  *   *
// *****
// Explanation
// For any input N. First line contains 4 space and then 5 {*} and then the second line contains according to the output format.

//1st solution
//fst loop lage hai 4 (n-1) space print karane k liye 
//uske baad 5 * print honge jab i == i  or  i== n ho
//ager name ho tho innner loop j-2 kar ke kuli vo space k liye hai tho 
//uski 1st line mai * print kara k 4(n-1) star print karke uske baad * print karake endlin kar do.

// 2nd solution logic and algo
// ek loop  isse phle space print karane k liye 
// n-1 se lake i == n-1 tak
// logic seeda sa hai jab i = 0 or i =n-1 ho tho star print kar
// nahi tho jab j == 1 or j ==n  ho jab star print kare 


//solution 1st
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        if (i == 1 || i == n) {
            for (int j = 1; j <= n; j++) {
                cout << "*";
            }
        } else {
            cout << "*";
            for (int j = 1; j <= n - 2; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

//solution 2nd

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	 for (int i = 0; i < n; i++) {
		for(int s=n;s>i;s--){
			cout<<" ";
		}
        for (int j = 0; j < n; j++) {

            if (i == 0 || i == n - 1) {
                cout << "*";
            } else {
                if (j == 0 || j == n - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
	return 0;
}