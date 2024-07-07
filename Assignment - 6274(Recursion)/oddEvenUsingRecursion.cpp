// Take as input N, a number. Print odd numbers in decreasing sequence (up until 0) and even numbers in increasing sequence (up until N) using Recursion

// Input Format
// Constraints
// 1 <= N <=1000

// Output Format
// Sample Input
// 5
// Sample Output
// 5
// 3
// 1
// 2
// 4

#include <iostream>
using namespace std;

void printOdd(int n) {
    if (n <= 0) {
        return;
    }
    if (n % 2 != 0) {
        cout << n << endl;
    }
    printOdd(n - 1);
}

void printEven(int n, int x) {
    if (x > n) {
        return;
    }
    if (x % 2 == 0) {
        cout << x << endl;
    }
    printEven(n, x + 1);
}

int main() {
    int N;
    cin >> N;

    printOdd(N);
    printEven(N, 1);

    return 0;
}
