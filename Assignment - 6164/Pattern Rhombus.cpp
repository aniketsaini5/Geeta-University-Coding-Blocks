#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        for (int s = 1; s <= N - i; ++s) {
            cout << "\t";  
        }
        
        int num = i;
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << num << "\t";
            if (j < i) {
                num++;
            } else {
                num--;
            }
        }
        
        cout << endl;
    }

    for (int i = N - 1; i >= 1; --i) {
        for (int s = 1; s <= N - i; ++s) {
            cout << "\t";  
        }
        
        int num = i;
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << num << "\t";
            if (j < i) {
                num++;
            } else {
                num--;
            }
        }
        
        cout << endl;
    }

    return 0;
}
