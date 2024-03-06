#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> data(n);
        vector<long long> temp;
        sort(data.begin(), data.end());
        temp.assign(100, 0);

        for (long long i = 0; i < n; i++)
        {
            cin >> data[i];
        }

        for (long long i = 0; i < n; i++)
        {
            temp[data[i]]++;
        }

        for (int i = 0; i < 100; i++)
        {
            if (temp[i] == 2)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}