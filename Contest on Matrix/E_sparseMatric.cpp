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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat1[i][j] == 0)
                count++;
        }
    }
    if (count > n * m / 2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}