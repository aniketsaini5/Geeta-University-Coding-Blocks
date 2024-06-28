// Take as input a two-d array. Wave print it column-wise.

// Input Format
// Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).

// Constraints
// Both M and N are between 1 to 10.

// Output Format
// All M * N integers seperated by commas with 'END' wriiten in the end(as shown in example).

// Sample Input
// 4 4
// 11 12 13 14
// 21 22 23 24
// 31 32 33 34
// 41 42 43 44
// Sample Output
// 11, 21, 31, 41, 42, 32, 22, 12, 13, 23, 33, 43, 44, 



// 1. **Input lena:** `n` aur `m` ki values input lo (rows aur columns).
// 2. **2D array banana:** `arr[n][m]` ko declare karo.
// 3. **Array fill karna:**
//    - Har row ke liye (0 se n-1 tak):
//      - Har column ke liye (0 se m-1 tak):
//        - `arr[i][j]` ko input se fill karo.
// 4. **Column-wise print karna:**
//    - Har column ke liye (0 se m-1 tak):
//      - Agar column even hai (j % 2 == 0):
//        - Top se bottom tak har element ko print karo.
//      - Agar column odd hai (j % 2 != 0):
//        - Bottom se top tak har element ko print karo.
// 5. **End print karna:** "END" ko print karo.

// Yeh steps follow karke tumhara array columns ke zig-zag pattern mein print ho jayega, aur ant mein "END" bhi print hoga.

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
    for(int j = 0; j< m; j ++){
        if(j %2 == 0){
            for(int i =0 ; i<n; i++){
                cout<<arr[i] [j] <<", ";
            }
        }else{
            for(int i = n -1; i>= 0 ; i --){
                cout<<arr[i] [j]<<", ";
            }
        }
    }
		cout<<"END";

  return 0;
}