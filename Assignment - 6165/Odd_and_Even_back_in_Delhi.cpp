// Odd and Even back in Delhi

// Due to an immense rise in Pollution, Kejriwal is back with the Odd and Even Rule in Delhi. The scheme is as follows, each car will be allowed to run on Sunday if the sum of digits which are even is divisible by 4 or sum of digits which are odd in that number is divisible by 3. However to check every car for the above criteria can't be done by the Delhi Police. You need to help Delhi Police by finding out if a car numbered N will be allowed to run on Sunday?

// Input Format
// The first line contains N , then N integers follow each denoting the number of the car.

// Constraints
// N<=1000 Car No >=0 && Car No <=1000000000

// Output Format
// N lines each denoting "Yes" or "No" depending upon whether that car will be allowed on Sunday or Not !

// Sample Input
// 2
// 12345
// 12134
// Sample Output
// Yes
// No
// Explanation
// 1 + 3 + 5 = 9 which is divisible by 3
// 1 + 1 + 3 = 5 which is NOT divisible by 3 and 2+4 = 6 which is not divisble by 4.


// Algorithm Explanation:
// Input Reading:

// Read the integer N which denotes the number of car numbers to process.
// Read N subsequent integers, each representing a car number.
// Processing Each Car Number:

// For each car number:
// Initialize even_sum and odd_sum to 0 to keep track of sums of even and odd digits respectively.
// Use a while loop to iterate through each digit of the car number:
// Extract the last digit (ld) using car_no % 10.
// Check if ld is even (ld % 2 == 0). If true, add ld to even_sum; otherwise, add it to odd_sum.
// Divide car_no by 10 (car_no /= 10) to remove the last digit and continue with the next digit.
// After processing all digits of the car number:
// Check if odd_sum is divisible by 3 (odd_sum % 3 == 0) or if even_sum is divisible by 4 (even_sum % 4 == 0).
// Output:

// If either condition (odd_sum % 3 == 0 or even_sum % 4 == 0) is true, output "Yes" indicating the car is allowed to run on Sunday.
// Otherwise, output "No".
// Edge Cases:

// Ensure correct handling of single-digit car numbers.
// Handle cases where all digits are odd or all are even.


#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        int car_no;
        cin >> car_no;
        
        int ld, even_sum = 0, odd_sum = 0;
        int temp = car_no; 
        
        while (temp > 0) {
            ld = temp % 10;
            if (ld % 2 == 0) {
                even_sum += ld;
            } else {
                odd_sum += ld;
            }
            temp /= 10;
        }

        if (odd_sum % 3 == 0 || even_sum % 4 == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
