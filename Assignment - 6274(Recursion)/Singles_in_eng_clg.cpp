// // William is currently watching Netflix. He is feeling thrilled after watching Seasons 1, and 2 of Single in engineering college and is desperately waiting for release of Season 3. But the makers of the show are in no mood to release the next season anytime soon.

// // The makers of Single in engineering college gave William a challenge to solve. If he solves the challenge, then they will give exclusive copy of Season 3 to him.

// // But William is feeling lazy. Can you help him solve this challenge?



// // There are N integers which denote heights of N trees. Woodcutter Jeffrey Vandersay needs to cut x meters wood. It is an easy job for him since he has a new woodcutting machine that can take down forests like wildfire. However, Jeffrey Vandersay is only allowed to cut a single line of trees.

// // Jeffrey Vandersay machine works as follows: Jeffrey Vandersay sets a height H metres and the machine raises a large saw blade to that height and cuts off all tree parts higher than H (tree height which is not higher than H meters Will remain untouched). Jeffrey Vandersay then takes the parts that were cut off. For example, if the tree row contains trees with heights of 15, 19, 12 and 13 metres, and Jeffrey Vandersay raises his sawblade to 14 metres, the remaining tree heights after cutting will be 14, 14, 12, and 13 metres, respectively, while Jeffrey Vandersay will take 1 metres off the first tree and 5 metres off the second tree (6 metres of wood in total).



// // Jeffrey Vandersay is ecologically minded, so he doesn't want to cut off more wood than necessary. That's why he wants to set his saw blade as high as possible. Help Jeffrey Vandersay find the maximum height of the saw blade that still allows him to cut off at least x metres of wood.

// // Input Format
// // First line contains an integer N denotes Size of Array, next line contains N Integers denoting heights of N trees Third line contains an integer x

// // Constraints
// // 1 <= N <= 106

// // 1 <= A[i] <= 109

// // 1 <= x <= 2*106

// // Output Format
// // print a single integer denoting maximum height of the saw blade that still allows him to cut off at least x metres of wood.

// // Sample Input
// // 4
// // 15 19 12 13
// // 6
// // Sample Output
// // 14


#include <bits/stdc++.h>
using namespace std;

long long wood(vector<int>& arr, int max_high) {
    long long total_wood = 0;
    for (long long i = 0; i < arr.size(); i++) {
        if (arr[i] > max_high) {
            total_wood += arr[i] - max_high;
        }
    }
    return total_wood;
}

int MAX_H(vector<int>& arr, int lo, int hi, int x) {
    if (lo > hi) {
        return hi; 
    }
    int mid = (lo + hi) / 2;
    long long T_wood = wood(arr, mid);
    if (T_wood >= x) {
        return MAX_H(arr, mid + 1, hi, x);
    } else {
        return MAX_H(arr, lo, mid - 1, x);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    sort(arr.begin(), arr.end());
    int lo = 0;
    int hi = arr.back(); 
    int result = MAX_H(arr, lo, hi, x);
    cout << result << endl;
    return 0;
}




////////////////////////////////////////////////////////////////////////////////////////////

//                            OR   

//////////////////////////////////////////////////////////////////////////////////////////////


#include <bits/stdc++.h>
using namespace std;

long long wood(vector<int>& arr, int max_high) {
    long long total_wood = 0;
    for (long long i = 0; i < arr.size(); i++) {
        if (arr[i] > max_high) {
            total_wood += arr[i] - max_high;
        }
    }
    return total_wood;
}

int MAX_H(vector<int>& arr, int lo, int hi, int x) {
    if (lo > hi) {
        return hi; 
    }
    int mid = (lo + hi) / 2;
    long long T_wood = wood(arr, mid);
    if (T_wood >= x) {
        return MAX_H(arr, mid + 1, hi, x);
    } else {
        return MAX_H(arr, lo, mid - 1, x);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    sort(arr.begin(), arr.end());
    int lo = 0;
    int hi = arr.back(); 
    int result = MAX_H(arr, lo, hi, x);
    cout << result << endl;
    return 0;
}

