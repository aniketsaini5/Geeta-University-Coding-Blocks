// Take as input a two-d array. Wave print it row-wise.

// Input Format
// Two integers M(row) and N(column) and further M * N integers(2-d array numbers).

// Constraints
// Both M and N are between 1 to 10.

// Output Format
// All M * N integers are seperated by commas with 'END' written in the end(as shown in example).

// Sample Input
// 4 4
// 11 12 13 14
// 21 22 23 24
// 31 32 33 34
// 41 42 43 44
// Sample Output
// 11, 12, 13, 14, 24, 23, 22, 21, 31, 32, 33, 34, 44, 43

// algorithm 

// 1. **Input lena:** `n` aur `m` ki values input lo (rows aur columns).
// 2. **2D array banana:** `arr[n][m]` ko declare karo.
// 3. **Array fill karna:**
//    - Har row ke liye (0 se n tak):
//      - Har column ke liye (0 se m tak):
//        - `arr[i][j]` ko input se fill karo.
// 4. **Array print karna:**
//    - Har row ke liye (0 se n tak):
//      - Agar row even hai (i % 2 == 0):
//        - Har column ko left se right print karo.
//      - Agar row odd hai (i % 2 != 0):
//        - Har column ko right se left print karo.
// 5. **End print karna:** "END" ko print karo.

// Yeh steps follow karke tumhara array zig-zag pattern mein print ho jayega.

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i< n; i ++){
        if(i %2 == 0){
            for(int j =0 ; j<m; j++){
                cout<<arr[i] [j] <<", ";
            }
        }else{
            for(int j = m -1; j>= 0 ; j --){
                cout<<arr[i] [j]<<", ";
            }
        }
    }
	cout<<"END";

  return 0;
}