#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n;
        vector<int> arr(n);
        vector<int> PF(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i == 0)
            {
                PF[i] = arr[i];
            }
            else
            {
                PF[i] = arr[i] + PF[i - 1];
            }
        }
        cin >> q;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            int sum = 0;
            if (l == 1)
                sum = PF[r - 1];
            else
                sum = PF[r - 1] - PF[l - 2];
            cout << sum << endl;
        }
    }

    return 0;
}