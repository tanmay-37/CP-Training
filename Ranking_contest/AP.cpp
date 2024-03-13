#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a >= pow(10, 9) || b >= pow(10, 9))
    {
        return 0;
    }
    else
    {
        long long n = pow(a, 2) + pow(b, 2);
        cout << n << endl;
    }
    return 0;
}