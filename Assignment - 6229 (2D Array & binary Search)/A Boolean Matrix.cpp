// Given a boolean matrix mat[M][N] of size M X N, modify it such that if a matrix cell mat[i][j] is 1 (or true) then make all the cells of ith row and jth column as 1.

// Input Format
// First line contains two integers m and n denoting the dimensions of the matrix Next m lines contains n integers each.

// Constraints
// 1 <= m*n <= 106

// Output Format
// Print the modified matrix

// Sample Input
// 2 2
// 1 0
// 0 0
// Sample Output
// 1 1
// 1 0



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 1)
            {
                // right
                for (int k = j + 1; k < m; k++)
                {
                    if (arr[i][k] != 1)
                    {
                        arr[i][k] = -1;
                    }
                }
                // left
                for (int k = j - 1; k >= 0; k--)
                {
                    if (arr[i][k] != 1)
                    {
                        arr[i][k] = -1;
                    }
                }
                // top
                for (int k = i - 1; k >= 0; k--)
                {
                    if (arr[k][j] != 1)
                    {
                        arr[k][j] = -1;
                    }
                }
                // bottom
                for (int k = i + 1; k < n; k++)
                {
                    if (arr[k][j] != 1)
                    {
                        arr[k][j] = -1;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == -1)
            {
                arr[i][j] = 1;
            }
        }
    }

    // printw

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
