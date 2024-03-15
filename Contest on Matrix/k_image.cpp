#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    // reverse
    if (n < m)
    {
        for (int i = 0; i < n; i++)
        {
            int left = 0;
            int right = mat[i].size() - 1;

            while (left < right)
            {
                int temp = mat[i][left];
                mat[i][left] = mat[i][right];
                mat[i][right] = temp;

                left++;
                right--;
            }
        }
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            int left = 0;
            int right = mat[i].size() - 1;

            while (left < right)
            {
                int temp = mat[i][left];
                mat[i][left] = mat[i][right];
                mat[i][right] = temp;

                left++;
                right--;
            }
        }
    }

    // 0->1 & 1->0
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 1)
                mat[i][j] = 0;
            else
                mat[i][j] = 1;
        }
    }
    // print
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}