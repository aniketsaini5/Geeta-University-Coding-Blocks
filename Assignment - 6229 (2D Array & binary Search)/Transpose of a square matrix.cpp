// Given a square matrix, print its transpose.

// Input Format
// First line contains the N ,size of the square matrix. Next N lines contains N integers each denoting the elements of the matrix

// Constraints
// 1 <= N <= 10^3

// Output Format
// Print N lines each containing N elements. These are the elements of the new matrix.

// Sample Input
// 5
// 1 46 4 60 100 
// 28 52 97 80 59 
// 6 33 62 42 12 
// 57 31 56 89 47 
// 1 50 73 53 99 
// Sample Output
// 1 28 6 57 1 
// 46 52 33 31 50 
// 4 97 62 56 73 
// 60 80 42 89 53 
// 100 59 12 47 99 

////////////////////////////////////////////////////////

// 1. **Input lena:** `n` ki value input lo, jo matrix ka size represent karegi.
// 2. **Matrix banana:** `n x n` ki ek 2D array `arr` banaiye.
// 3. **Matrix fill karna:**
//    - Har row ke liye (0 se n-1 tak):
//      - Har column ke liye (0 se n-1 tak):
//        - `arr[i][j]` ko input se fill karo.
// 4. **Transpose print karna:**
//    - Har row aur column ko swap karke matrix ka transpose nikalo aur print karo.
//    - Har column ke liye (0 se n-1 tak):
//      - Har row ke liye (0 se n-1 tak):
//        - `arr[j][i]` ko print karo.
//      - Har row ke baad ek newline print karo (`cout << endl;`).

// Yeh steps follow karke code matrix ka transpose print karta hai. Transpose ka matlab hota hai ki rows ko columns mein aur columns ko rows mein swap karna.


#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n ;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i< n; i ++){
       for(int j = 0 ; j< n; j++){
           cout<<arr[j][i] <<" ";
       }
       cout<<endl;
    }

  return 0;
}