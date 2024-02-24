#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> data;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        for (int i = 0; i < n; i++)
        {
            data.push_back(i + 1);
        }
        if (k == n - 1)
        {
            for (int i = 0; i < n; i++)
            {
                cout << data[i];
                if (i > -1)
                    cout << " ";
            }
        }
        else if (k == 0)
        {
            for (int i = data.size() - 1; i >= 0; i--)
            {
                cout << data[i];
                if (i != 5)
                    cout << " ";
            }
        }
        else
        {
            
        }
    }
    return 0;
}