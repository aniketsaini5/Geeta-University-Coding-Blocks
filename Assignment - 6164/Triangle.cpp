// #include <iostream>
// using namespace std;

// void printPattern(int n) {
//     int startNum = 1;

//     for (int i = 0; i < n; ++i) {
//         // Leading spaces calculate karte hain
//         int leadingSpaces = (n - i - 1) * 2;
        
//         // Leading spaces print karte hain
//         for (int j = 0; j < leadingSpaces; ++j) {
//             cout << " ";
//         }
        
//         // Current row ka starting number calculate karte hain
//         int NUM = startNum + i;
        
//         // Numbers print karte hain
//         for (int j = 0; j < 2 * i + 1; ++j) {
//             if (j <= i) {
//                 cout << NUM + j << " ";
//             } else {
//                 cout << NUM + (2 * i - j) << " ";
//             }
//         }
        
//         // New line ke liye
//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cin>>n;

//     printPattern(n);
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n; 
    for (int i = 0; i < n; ++i) {
        int NUM = i + 1;
        
        for (int j = 0; j < (n - i - 1); ++j) {
            cout << "  ";  
        }
        
        for (int j = 0; j <= i; ++j) {
            cout << NUM + j << " ";
        }
        
        for (int j = i - 1; j >= 0; --j) {
            cout << NUM + j << " ";
        }
        
        cout << endl;
    }
    return 0;
}

