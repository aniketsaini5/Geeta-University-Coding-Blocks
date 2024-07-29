// You are at a casino. There are N stacked cards on pile A0. Each card has a number written on it. Then there will be Q iterations. In ith iteration, you start picking up the cards in Ai-1th pile from the top one by one and check whether the number written on the card is divisible by the ith prime number. If the number is divisible, you stack that card on pile Bi. Otherwise, you stack that card on pile Ai. After Q iterations, cards can only be on pile B1, B2, B3, . . . BQ, AQ . Output numbers on these cards from top to bottom of each piles in order of B1, B2, B3, . . . BQ, AQ .

// Input Format
// First line contains N and Q. The next line contains N space separated integers representing the initial pile of cards i.e., A0. The leftmost value represents the bottom plate of the pile.

// Constraints
// N < 10^5
// Q < 10^5
// |Ai| < 10^9

// Output Format
// Output N lines, each line containing the number written on the card.

// Sample Input
// 5 1
// 3 4 7 6 5
// Sample Output
// 4
// 6
// 3
// 7
// 5
// Explanation
// Initially:

// A0 = [3, 4, 7, 6, 5]<-TOP

// After 1st iteration:

// A0 = []<-TOP

// A1 = [5, 7, 3]<-TOP

// B1 = [6, 4]<-TOP

// Now first print B1 from top to bottom then A1 from top to bottom.

#include<bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool is_prime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to generate the first Q prime numbers
vector<int> generate_primes(int Q) {
    vector<int> primes;
    int num = 2; // Start checking from the first prime number
    while (primes.size() < Q) {
        if (is_prime(num)) {
            primes.push_back(num);
        }
        num++;
    }
    return primes;
}

void solve(int N, int Q, vector<int>& cards) {
    // Generate the first Q primes
    vector<int> primes = generate_primes(Q);

    vector<stack<int>> A(Q + 1);
    vector<stack<int>> B(Q);

    // Initialize A0 with the given cards
    for (int i = N - 1; i >= 0; --i) {
        A[0].push(cards[i]);
    }

    for (int i = 0; i < Q; ++i) {
        while (!A[i].empty()) {
            int card = A[i].top();
            A[i].pop();
            if (card % primes[i] == 0) {
                B[i].push(card);
            } else {
                A[i + 1].push(card);
            }
        }
    }

    // Output the cards from each pile B1, B2, ..., BQ and final pile AQ
    for (int i = 0; i < Q; ++i) {
        vector<int> temp;
        while (!B[i].empty()) {
            temp.push_back(B[i].top());
            B[i].pop();
        }
        for (int j = temp.size() - 1; j >= 0; --j) {
            cout << temp[j] << endl;
        }
    }

    vector<int> temp;
    while (!A[Q].empty()) {
        temp.push_back(A[Q].top());
        A[Q].pop();
    }
    for (int j = temp.size() - 1; j >= 0; --j) {
        cout << temp[j] << endl;
    }
}

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> cards(N);
    for (int i = 0; i < N; ++i) {
        cin >> cards[i];
    }

    solve(N, Q, cards);

    return 0;
}
