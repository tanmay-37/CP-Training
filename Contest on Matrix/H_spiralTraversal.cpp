#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> mat(n, vector<int>(n));
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> mat[i][j];
            }
        }
        int top = 0, left = 0, bottom = n - 1, right = n - 1;

        while (top <= bottom && left <= right)
        {

            for (int i = left; i <= right; i++)
                ans.push_back(mat[top][i]);

            top++;

            for (int i = top; i <= bottom; i++)
                ans.push_back(mat[i][right]);

            right--;

            if (top <= bottom)
            {
                for (int i = right; i >= left; i--)
                    ans.push_back(mat[bottom][i]);

                bottom--;
            }

            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                    ans.push_back(mat[i][left]);

                left++;
            }
        }

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}