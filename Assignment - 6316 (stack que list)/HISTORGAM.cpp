// Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars.


// Input Format
// First line contains a single integer N, denoting the number of bars in th histogram.
// Next line contains N integers, ith of which, denotes the height of ith bar in the histogram.

// Constraints
// 1<=N<=10^6
// Height of each bar in histogram <= 10^10

// Output Format
// Output a single integer denoting the area of the required rectangle.

// Sample Input
// 5
// 1 2 3 4 5
// Sample Output
// 9
// Explanation
// The largest rectangle can be obtained of breadth=3 and length=3. Its starting index is 2 and ending index is 4 and it has a height of 3. Hence area = 3*3 = 9

#include <iostream>
#include <vector>
#include <stack>
#define int long long
using namespace std;

class Solution {
public:
    vector<int> NSL(vector<int>& heights) {
        int n = heights.size();
        vector<int> index_NSL(n);
        stack<int> st;
        index_NSL[0] = -1;
        st.push(0);

        for(int i = 1; i < n; i++) {
            while(!st.empty() && heights[st.top()] >= heights[i])
                st.pop();
            index_NSL[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return index_NSL;
    }

    vector<int> NSR(vector<int>& heights) {
        int n = heights.size();
        vector<int> index_NSR(n);
        stack<int> st;
        index_NSR[n-1] = n;
        st.push(n-1);

        for(int i = n-2; i >= 0; i--) {
            while(!st.empty() && heights[st.top()] >= heights[i])
                st.pop();
            index_NSR[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return index_NSR;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> index_NSL = NSL(heights);
        vector<int> index_NSR = NSR(heights);
        int res = 0;
        for(int i = 0; i < n; i++) {
            int height = heights[i];
            int width = index_NSR[i] - index_NSL[i] - 1;
            int area = height * width;
            res = max(res, area);
        }
        return res;
    }
};

int32_t main() {
    int N;
    cin >> N;
    vector<int> heights(N);
    for(int i = 0; i < N; i++) {
        cin >> heights[i];
    }
    Solution sol;
    cout << sol.largestRectangleArea(heights) << endl;
    return 0;
}