#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int sum;
    vector<vector<int>> mat(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += mat[i][j];
        }
        cout << sum << endl;
    }
    return 0;
}