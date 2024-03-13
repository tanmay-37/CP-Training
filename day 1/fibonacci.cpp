#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int zero = 1, one = 1;
    int sum = 0;
    if (n == 0 || n == 1)
        cout << one << endl;
    else
    {
        for (int i = 2; i < n; i++)
        {
            sum = zero + one;
            zero = one;
            one = sum;
        }
        cout << sum << endl;
    }
    return 0;
}