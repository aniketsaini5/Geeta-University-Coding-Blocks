// Shopping Game

// Faculty at CodingBlocks loves to purchase smartphones and decides to play a game. Aayush and Harshit decides to shop for smartphones. Aayush purchases 1 smartphone, then Harshit purchases 2 smartphones, then Aayush purchases 3 smartphones, then Harshit purchases 4 smartphones, and so on. Once someone can't purchase more smartphones, he loses.

// Aayush can purchase at most M smartphones and Harshit can purchase at most N smartphones. Who will win ? Print "Aayush" and "Harshit" accordingly.

// Input Format
// The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows. Two integers M and N denoting the maximum possible number of smartphones Aayush and Harshit can purchase respectively.

// Constraints
// 1 ≤ T ≤ 1000 1 ≤ M, N ≤ 10^6

// Output Format
// For each test case, output a single line containing one string — the name of the winner i.e. Aayush or Harshit

// Sample Input
// 2
// 9 3    
// 8 11
// Sample Output
// Aayush
// Harshit
// Explanation
// Test case 1. We have M = 9 and N = 3. Aayush shops for 1 smartphone, and then Harshit shops for 2 smartphones. Then Aayush shops for 3 smartphones and then Harshit shops for 4 smartphones but that would mean 2 + 4 = 6 smartphones in total. It's impossible because Harshit can shop for at most N smartphones, so he loses. Aayush wins, and so we print "Aayush".

// Test case 2. Now we have M = 8 and N = 11. Aayush shops for 1 smartphone first, and then Harshit shops for 2 smartphones, then Aayush shops for 3 smartphones. Now Harshit shops for 4 smartphones (he has 2 + 4 = 6 smartphones in total, which is allowed because it doesn't exceed N). Then Aayush tries to shop for 5 smartphones but he can't because 1 + 3 + 5 = 9 which is greater than M. Aayush loses and Harshit is the winner.

// Algorithm Explanation:
// This program simulates a game scenario between Aayush and Harshit where they take turns accumulating points until one of them exceeds their respective limit (M for Aayush and N for Harshit).

// Input Reading:

// Read the number of test cases T.
// For each test case, read integers M and N which represent the maximum points Aayush and Harshit can accumulate, respectively.
// Game Simulation:

// For each test case, initialize:
// turn to 1 (indicating whose turn it is, starting with Aayush).
// Aayush_sum and Harshit_sum to 0 to keep track of their accumulated points.
// Use a while loop to simulate the game:
// If turn is odd (turn % 2 != 0), it's Aayush's turn:
// Add turn to Aayush_sum.
// Check if Aayush_sum exceeds M. If yes, print "Harshit" indicating Aayush loses, and break out of the loop.
// If turn is even, it's Harshit's turn:
// Add turn to Harshit_sum.
// Check if Harshit_sum exceeds N. If yes, print "Aayush" indicating Harshit loses, and break out of the loop.
// Increment turn to switch to the next player's turn.
// Output:

// After completing the game for all test cases, print the result for each test case indicating the winner based on who exceeded their limit first.
// Example:
// Input:
// Copy code
// 2
// 10 15
// 20 30
// For the first test case:
// Aayush's turn sequence: 1, 3, 5, 7, 9 (Aayush_sum = 25 > 10)
// Harshit's turn sequence: 2, 4, 6, 8, 10, 12, 14 (Harshit_sum = 56 > 15)
// Output: "Harshit" (Aayush exceeds his limit first)
// For the second test case:
// Aayush's turn sequence: 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 (Aayush_sum = 100 > 20)
// Harshit's turn sequence: 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28 (Harshit_sum = 210 > 30)
// Output: "Aayush" (Harshit exceeds his limit first)



#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int M, N;
        cin >> M >> N;

        int turn = 1;
        int Aayush_sum = 0;
        int Harshit_sum = 0;

        while (true) {
            if (turn % 2 != 0) { 
                Aayush_sum += turn;
                if (Aayush_sum > M) {
                    cout << "Harshit" << endl;
                    break;
                }
            } else {
                Harshit_sum += turn;
                if (Harshit_sum > N) {
                    cout << "Aayush" << endl;
                    break;
                }
            }
            turn++;
        }
    }

    return 0;
}
