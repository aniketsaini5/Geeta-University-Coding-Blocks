

// You are given two integers n and k. Find the greatest integer x, such that, x^k <= n.

// Input Format
// First line contains number of test cases, T. Next T lines contains integers, n and k.

// Constraints
// 1<=T<=10
// 1<=N<=10^15
// 1<=K<=10^4

// Output Format
// Output the integer x

// Sample Input
// 2
// 10000 1
// 1000000000000000 10
// Sample Output
// 10000
// 31
// Explanation
// For the first test case, for x=10000, 10000^1=10000=n


// 1. **Header files include karna:** `bits/stdc++.h` ka use karte hue, jisse ki standard C++ libraries access ki ja sakein.
// 2. **Integer type define karna:** `int` ko `long long` ke sath define karna, jo badi values ke liye use hota hai.
// 3. **Function `func` define karna:** 
//    - Parameters le lena `n` aur `k`, jo ki integers hai.
//    - Ek variable `ans` initialize karna `-1` se, jo hamesha initialize karte waqt initial value hota hai.
//    - Do variables `lo` aur `high` initialize karna `1` aur `n` se, jo search range define karta hai.
//    - `while` loop chalana `lo` se `high` tak:
//      - Midpoint nikalna `mid` formula se `(lo + high) / 2`.
//      - `mid_pow` ko initialize karna `1` se, jo `mid` ki power ko store karta hai.
//      - `overflow` variable ko `false` karna initially, jo check karta hai ki calculation overflow ho raha hai ya nahi.
//      - `for` loop chalana `k` baar:
//        - Agar `mid_pow > n / mid` ho jata hai, toh `overflow` ko `true` karna aur loop se bahar nikalna.
//        - `mid_pow` ko update karna `mid_pow *= mid`.
//      - Agar `!overflow` aur `mid_pow <= n` ho, toh:
//        - `ans` ko update karna `mid`.
//        - `lo` ko update karna `mid + 1` se.
//      - Warna:
//        - `high` ko update karna `mid - 1` se.
//    - `ans` ko return karna, jo largest integer hai jiska power `k` `n` se chota ya equal hota hai.
// 4. **Main function define karna (`int32_t main`):**
//    - `t` ko input lena, jo test cases ka count represent karta hai.
//    - `for` loop chalana `t` baar:
//      - `n` aur `k` ko input lena.
//      - `func` function ka use karke `ans` ko calculate karna.
//      - `ans` ko print karna.
// 5. **Return karna:** 0 ko return karna, jo successful execution ko indicate karta hai.

// Yeh code snippet `t` test cases ke liye har ek case mein largest integer `ans` ko nikalta hai, jiska power `k` `n` se chota ya equal hota hai, binary search ka use karke.


#include<bits/stdc++.h>
using namespace std;
#define int long long
int func(int n,int k){
		int ans=-1;
		int lo=1,high=n;

		while(lo<=high){
			int mid=(lo+high)/2;
			int mid_pow=1;
			bool overflow=false;


			for(int i=0;i<k;i++){
				if(mid_pow>n/mid){
					overflow=true;
					break;
				}
				mid_pow*=mid;
			}

			if(!overflow && mid_pow<=n){
				ans = mid;
				lo=mid+1;
			}
			else{
				high=mid-1;
			}
		}
	return ans;
}
int32_t main() {
	int t;
	cin>>t;
		for(int i=0;i<t;i++){
		int n,k;
		cin>>n>>k;
		int ans=func(n,k);
		cout<<ans<<endl;
	}
	return 0;
}

// my aproch 

#include<bits/stdc++.h>
using namespace std;
#define int long long

int KROOT(int n, int k) {
    int lo = 1, hi = n;
    int ans = -1;

    while (lo <= hi) {
        int mid = (lo+hi) / 2;
        double mid_pow = pow(mid, k); 

        if (mid_pow <= n) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return ans;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int ans = KROOT(n, k);
        cout << ans << endl;
    }
    return 0;
}
