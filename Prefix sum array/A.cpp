#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, q;
    cin >> n >> q;
    vector<long long> a;
    long long L, R;
    for (long long i = 0; i < n; i++)
    {
        long long ele;
        cin >> ele;
        a.push_back(ele);
    }
    for (long long i = 0; i < q; i++)
    {
        long long sum = 0;
        cin >> L >> R;
        for (long long i = L - 1; i <= R - 1; i++)
        {
            sum += a[i];
        }
        cout << sum << endl;
    }

    return 0;
}