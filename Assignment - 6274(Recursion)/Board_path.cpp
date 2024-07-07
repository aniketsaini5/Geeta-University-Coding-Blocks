// // Take as input N, a number. N is the size of a snakes and ladder board (without any snakes and ladders). Take as input M, a number. M is the number of faces of the dice.

// // a. Write a recursive function which returns the count of different ways the board can be traveled using the dice. Print the value returned.

// // b. Write a recursive function which prints dice-values for all valid paths across the board (void is the return type for function).

// // Input Format
// // Enter a number N (size of the board) and number M(number of the faces of a dice)

// // Constraints
// // M<=100
// // N<=100
// // M^N <=10^9

// // Output Format
// // Display the number of paths and print all the paths in a space separated manner

// // Sample Input
// // 3
// // 3
// // Sample Output
// // 111 12 21 3 
// // 4

// ////////////////////////////////////////////////////////////////////////////////////

// ### Code Explanation 

// Is code ka maksad hai ek n x n ke board par dice ke alag-alag values ka use karke end tak pahunchne ke tareeqe ginna aur print karna. Isme n board ka size hai aur m dice ke faces ka number hai. 

// ### Functions:

// 1. **`Boardpath` Function**:
//    - Ye function recursively check karta hai ki board ko dice ke different values ka use karke kitne tareeqon se travel kiya ja sakta hai.
//    - `i` current position ko represent karta hai.
//    - `ans` string mein store karta hai wo dice values jo current path mein use ho rahi hain.
//    - Agar `i` n ke barabar ho jata hai, to iska matlab hum board ke end tak pahunch gaye hain, to `ans` ko print karte hain aur global counter `c` ko increment karte hain.
//    - Agar `i` n se bada ho jata hai, to ye invalid path hota hai aur function return ho jata hai.
//    - Har dice value `j` ke liye, function recursively call hota hai new position `i + j` ke saath.

// 2. **`main` Function**:
//    - Ye function board ka size `n` aur dice ke faces `m` ko input mein leta hai.
//    - `Boardpath` function ko initial position 0 aur empty string `ans` ke saath call karta hai.
//    - Total number of paths `c` ko print karta hai.

// ### Dry Run in Hinglish

// #### Sample Input:
// ```
// 3
// 3
// ```

// #### Dry Run:

// - `main` function mein `n` = 3 aur `m` = 3 liya.
// - `Boardpath` function ko `i = 0` aur `ans = ""` ke saath call kiya.
  
//   1. First call: `Boardpath(3, 3, 0, "")`
//      - `i` != `n`, loop chalega `j` = 1, 2, 3 ke liye.
  
//      2. First loop iteration: `j` = 1
//         - `Boardpath(3, 3, 1, "1")` call hua.
          
//         3. Second call: `Boardpath(3, 3, 1, "1")`
//            - `i` != `n`, loop chalega `j` = 1, 2, 3 ke liye.
  
//            4. First loop iteration: `j` = 1
//               - `Boardpath(3, 3, 2, "11")` call hua.
              
//               5. Third call: `Boardpath(3, 3, 2, "11")`
//                  - `i` != `n`, loop chalega `j` = 1, 2, 3 ke liye.
  
//                  6. First loop iteration: `j` = 1
//                     - `Boardpath(3, 3, 3, "111")` call hua.
                    
//                     7. Fourth call: `Boardpath(3, 3, 3, "111")`
//                        - `i` == `n`, "111" print hua, `c` increment hua (c = 1).
//                        - Return to third call.
                 
//                  8. Second loop iteration: `j` = 2
//                     - `Boardpath(3, 3, 4, "112")` call hua.
                    
//                     9. Fifth call: `Boardpath(3, 3, 4, "112")`
//                        - `i` > `n`, return.
//                        - Return to third call.
                 
//                  10. Third loop iteration: `j` = 3
//                      - `Boardpath(3, 3, 5, "113")` call hua.
                     
//                      11. Sixth call: `Boardpath(3, 3, 5, "113")`
//                         - `i` > `n`, return.
//                         - Return to third call.

//               - Return to second call.

//            12. Second loop iteration: `j` = 2
//                - `Boardpath(3, 3, 3, "12")` call hua.
               
//                13. Seventh call: `Boardpath(3, 3, 3, "12")`
//                    - `i` == `n`, "12" print hua, `c` increment hua (c = 2).
//                    - Return to second call.

//            14. Third loop iteration: `j` = 3
//                - `Boardpath(3, 3, 4, "13")` call hua.
               
//                15. Eighth call: `Boardpath(3, 3, 4, "13")`
//                    - `i` > `n`, return.
//                    - Return to second call.
  
//         - Return to first call.

//      16. Second loop iteration: `j` = 2
//          - `Boardpath(3, 3, 2, "2")` call hua.
         
//          17. Ninth call: `Boardpath(3, 3, 2, "2")`
//              - `i` != `n`, loop chalega `j` = 1, 2, 3 ke liye.
  
//              18. First loop iteration: `j` = 1
//                  - `Boardpath(3, 3, 3, "21")` call hua.
                 
//                  19. Tenth call: `Boardpath(3, 3, 3, "21")`
//                      - `i` == `n`, "21" print hua, `c` increment hua (c = 3).
//                      - Return to ninth call.
  
//              20. Second loop iteration: `j` = 2
//                  - `Boardpath(3, 3, 4, "22")` call hua.
                 
//                  21. Eleventh call: `Boardpath(3, 3, 4, "22")`
//                      - `i` > `n`, return.
//                      - Return to ninth call.
  
//              22. Third loop iteration: `j` = 3
//                  - `Boardpath(3, 3, 5, "23")` call hua.
                 
//                  23. Twelfth call: `Boardpath(3, 3, 5, "23")`
//                      - `i` > `n`, return.
//                      - Return to ninth call.

//          - Return to first call.

//      24. Third loop iteration: `j` = 3
//          - `Boardpath(3, 3, 3, "3")` call hua.
         
//          25. Thirteenth call: `Boardpath(3, 3, 3, "3")`
//              - `i` == `n`, "3" print hua, `c` increment hua (c = 4).
//              - Return to first call.

// - Final output: `"111 12 21 3"` and `4`.

// Ye program correct paths ko calculate karta hai aur unhe print karta hai, jaise given example mein: 111, 12, 21, aur 3. Total number of paths 4 hote hain.


#include <bits/stdc++.h>
using namespace std;
int c = 0;

void Boardpath(int n, int m, int i, string ans) {
    if (i == n) {
        cout << ans << " ";
        c++;
        return;
    }
    if (i > n) {
        return;
    }

    for (int j = 1; j <= m; j++) {
        Boardpath(n, m, i + j, ans + to_string(j));
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    string ans;

    Boardpath(n, m, 0, ans);
    cout << endl << c;
    return 0;
}
