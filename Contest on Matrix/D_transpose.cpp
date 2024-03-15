#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int sum;
    vector<vector<int>> mat1(n, vector<int>(m));
    vector<vector<int>> mat2(m, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat1[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat2[i][j] = mat1[j][i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}