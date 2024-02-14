#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int zero = 0, one = 1;
    int sum = 0;
    cout << zero << " " << one << " ";
    for (int i = 2; i < n; i++)
    {
        sum = zero + one;
        cout << sum << " ";
        zero = one;
        one = sum;
    }

    return 0;
}