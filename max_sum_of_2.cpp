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
        vector<int> data(n);

        for (int i = 0; i < n; i++)
        {
            cin >> data[i];
        }
        int max = *max_element(data.begin(), data.end());

        for (int i = 0; i < n; i++)
        {
            if (max == data[i])
            {
                data.erase(data.begin() + i);
            }
        }

        int second_max = *max_element(data.begin(), data.end());

        cout << max + second_max << endl;
    }

    return 0;
}