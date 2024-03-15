#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Test Case #" << i << ":" << endl;
        int n;
        cin >> n;
        vector<vector<int>> mat1(n, vector<int>(n));
        vector<vector<int>> mat2(n, vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> mat1[i][j];
            }
        }
        // transpose
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mat2[i][j] = mat1[j][i];
            }
        }
        // reverse
        for (int i = 0; i < n; i++)
        {
            int left = 0;
            int right = mat2[i].size() - 1;

            while (left < right)
            {
                int temp = mat2[i][left];
                mat2[i][left] = mat2[i][right];
                mat2[i][right] = temp;

                left++;
                right--;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << mat2[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}