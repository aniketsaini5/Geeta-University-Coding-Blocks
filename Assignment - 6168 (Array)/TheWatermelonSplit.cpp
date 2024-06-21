// Pete and his friend Billy went to buy a watermelon on a hot summer day. After weighing the watermelon, which showed w kilos, they decided to divide it. However, they faced a problem because they both prefer even numbers and want each part to weigh an even number of kilos. The two parts do not have to be equal, but they must be positive. Can you help them find out if it's possible to divide the watermelon the way they want? They are exhausted and eager to start their meal as soon as possible.

// Input Format
// The first (and the only) input line contains integer number w (1 ≤ w ≤ 100000) — the weight of the watermelon bought by the boys.

// Constraints
// 1 ≤ w ≤ 100000

// Output Format
// Print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; and NO in the opposite case.

// Sample Input
// 8
// Sample Output
// YES
// Explanation
// The watermelon weighing 8 kgs can be split in any of the following ways:
// 1) Pete: 2, Billy: 6
// 2) Pete: 4, Billy: 4
// 3) Pete: 6, Billy: 2

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2 == 0 && n>2){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}