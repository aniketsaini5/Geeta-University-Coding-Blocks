// Rajesh is an engineering student. It was his summer vacation. So, he with his friends decided to go on a trip in a bus. Each bus makes multiple trips successively; that is, the next trip can start immediately after completing the current trip. Also, each bus operates independently; that is, the trips of one bus do not influence the trips of any other bus. Given an array time where arr[i] denotes the time taken by the ith bus to complete one trip.

// You are also given an integer trips which denotes the number of trips all buses should make in total. Print the minimum time required for all buses to complete at least t trips trips.
// Bus Link

// Input Format
// First Line contains size of array
// Second line contains space separated elements of array
// Third line contains t trips

// Constraints
// 1 <= arr.length <= 105
// 1 <= arr[i], t trips <= 109

// Output Format
// Integer

// Sample Input
// 3
// 1 2 3
// 5
// Sample Output
// 3
// Explanation
// At time t = 1, the number of trips completed by each bus are [1,0,0]. The total number of trips completed is 1 + 0 + 0 = 1.
// At time t = 2, the number of trips completed by each bus are [2,1,0]. The total number of trips completed is 2 + 1 + 0 = 3.
// At time t = 3, the number of trips completed by each bus are [3,1,1]. The total number of trips completed is 3 + 1 + 1 = 5.
// So the minimum time needed for all buses to complete at least 5 trips is 3.
// Similarly,

// arr = [2], trips = 1
// O/P = 2
// Explanation:
// There is only one bus, and it will complete its first trip at t = 2. So the minimum time needed to complete 1 trip is 2.

#include <bits/stdc++.h>
using namespace std;

bool is_possible(const vector<int>& arr, int trip, long long mid) {
    long long totaltrip = 0;
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        totaltrip += mid / arr[i];
        if (totaltrip >= trip) {
            return true;
        }
    }
    return false;
}

long long minimum_time(vector<int>& arr, int trip) {
    long long lo = 1;
    long long hi = static_cast<long long>(*max_element(arr.begin(), arr.end())) * trip;

    while (lo < hi) {
        long long mid = lo + (hi - lo) / 2;
        if (is_possible(arr, trip, mid)) {
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }

    return lo;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int trip;
    cin >> trip;

    cout << minimum_time(arr, trip) << endl;

    return 0;
}
