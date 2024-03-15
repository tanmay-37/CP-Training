#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n1, m1, n2, m2;
        cin >> n1 >> m1;

        vector<vector<int>> mat1(n1, vector<int>(m1));

        // Input of two matrices
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m1; j++)
            {
                cin >> mat1[i][j];
            }
        }
        cin >> n2 >> m2;
        vector<vector<int>> mat2(n2, vector<int>(m2));

        for (int i = 0; i < n2; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                cin >> mat2[i][j];
            }
        }

        // Multiply two matrices
        vector<vector<int>> mat3(n1, vector<int>(m2));
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                mat3[i][j] = 0;
                for (int k = 0; k < m1; k++)
                {
                    mat3[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }

        // Print
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                cout << mat3[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
