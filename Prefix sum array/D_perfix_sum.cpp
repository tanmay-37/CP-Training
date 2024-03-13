#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q, q_type, q1, q2;
    cin >> n >> q;

    vector<int> data(n);
    vector<int> pre(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + data[i - 1];
    }

    while (q--)
    {
        cin >> q_type;
        int index;
        if (q_type == 1)
        {
            int x;
            cin >> x;
            for (int i = 1; i <= n; i++)
            {
                if (pre[i] == x)
                {
                    cout << i << endl;
                    break;
                }
            }
        }
        else if (q_type == 2)
        {
            int u, v;
            cin >> u >> v;

            data[u - 1] = v;
            for (int i = 1; i <= n; i++)
            {
                pre[i] = pre[i - 1] + data[i - 1];
            }
        }
    }

    return 0;
}