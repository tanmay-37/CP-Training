#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> mat(m, vector<int>(n, 0));
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cin >> mat[row][col];
        }
    }
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << mat[row][col];
        }
        cout << endl;
    }
    cout << endl;

    // reverse row
    for (int row = 0; row < m; row++)
    {
        int left = 0;
        int right = mat[row].size() - 1;

        while (left < right)
        {
            int temp = mat[row][left];
            mat[row][left] = mat[row][right];
            mat[row][right] = temp;

            left++;
            right--;
        }
    }
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << mat[row][col];
        }
        cout << endl;
    }
    return 0;
}