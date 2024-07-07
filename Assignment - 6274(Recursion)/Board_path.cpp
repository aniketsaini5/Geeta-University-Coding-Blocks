// Take as input N, a number. N is the size of a snakes and ladder board (without any snakes and ladders). Take as input M, a number. M is the number of faces of the dice.

// a. Write a recursive function which returns the count of different ways the board can be traveled using the dice. Print the value returned.

// b. Write a recursive function which prints dice-values for all valid paths across the board (void is the return type for function).

// Input Format
// Enter a number N (size of the board) and number M(number of the faces of a dice)

// Constraints
// M<=100
// N<=100
// M^N <=10^9

// Output Format
// Display the number of paths and print all the paths in a space separated manner

// Sample Input
// 3
// 3
// Sample Output
// 111 12 21 3 
// 4

#include <bits/stdc++.h>
using namespace std;
int c=0;
void Boardpath(int n, int m, int i, string ans) {
    if (i == n) {
        cout << ans << " ";
		c++;
        return;
    }
    if (i >= n) {
        return;
    }

    for (int j = 1; j <= m; j++) {
        Boardpath(n, m, i + j, ans + to_string(j));
    }
}

int main() {
    int n, m;
    cin >> n >> m;
	string ans;

    Boardpath(n, m, 0, ans);
	cout<<endl<<c;
    return 0;
}
