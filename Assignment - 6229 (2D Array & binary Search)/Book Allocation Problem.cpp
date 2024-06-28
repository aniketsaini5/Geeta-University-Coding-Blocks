// You are given number of pages in n different books and m students. The books are arranged in ascending order of number of pages. Every student is assigned to read some consecutive books. The task is to assign books in such a way that the maximum number of pages assigned to a student is minimum.

// Input Format
// First line contains integer t as number of test cases. Next t lines contains two lines. For each test case, 1st line contains two integers n and m which represents the number of books and students and 2nd line contains n space separated integers which represents the number of pages of n books in ascending order.

// Constraints
// 1 < t < 50
// 1< n < 100
// 1< m <= 50
// 1 <= Ai <= 1000

// Output Format
// Print the maximum number of pages that can be assigned to students.

// Sample Input
// 1
// 4 2
// 12 34 67 90
// Sample Output
// 113 
// Explanation
// 1st students : 12 , 34, 67 (total = 113)
// 2nd students : 90 (total = 90)
// Print max(113, 90)

#include<bits/stdc++.h>
using namespace std;

bool is_possible(const vector<int>& arr, int n, int m, int maxarr) {
    int st_req = 1;
    int curntSum = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] > maxarr) {
            return false; 
        }
        
        if (curntSum + arr[i] > maxarr) {
            st_req++;
            curntSum = arr[i];
            if (st_req > m) {
                return false;
            }
        } else {
            curntSum += arr[i];
        }
    }

    return true;
}

int find_min_max_arr(const vector<int>& arr, int n, int m) {
    int lo = *max_element(arr.begin(), arr.end());
    int hi = accumulate(arr.begin(), arr.end(), 0);
    int ans = hi;

    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (is_possible(arr, n, m, mid)) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        cout << find_min_max_arr(arr, n, m) << endl;
    }

    return 0;
}
