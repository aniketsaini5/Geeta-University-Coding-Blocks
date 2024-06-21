// Nobita scored good marks in his previous test, so his mom gave him x candies. Now, he wants to distribute the candies amongst his n friends(including himself).
// He wants to distribute the candies equally for which he can either ask her mom for more candies or can return her extra candies.

// He will do this in such a way that the number of candies that he takes or returns to his mom is minimum. Can you help him?

// Input Format
// First line contains an integer T-denoting the number of test cases.
// Next T lines contain two space separated integer x and n.

// Constraints
// 1 <= T <= 10^5
// 1 <=x,n <=10^9

// Output Format
// Print a single integer equal to minimum candies returned.

// Sample Input
// 3
// 14 4
// 12 4
// 10 3
// Sample Output
// 2
// 0
// 1
// Explanation
// In the 1st test case, Nobita can return 2 candies to his mom and then left with 12 candies that can be divided amongst his 4 friends(including him as well), each will get 3 candies each.
// In 2nd test case , candies are already divisible by 4(Number of Friends). Hence the answer is 0.
// In 3rd test case , he will return 1 candy and left with 9 candies that can be distributed. Hence the answer in this case is 1.

#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    while(n--){
        int x,m;
        cin>>x>>m;
        int rem = x%m;
        int take = m-rem;
        cout<<min(rem,take)<<endl;
    }

return 0;}