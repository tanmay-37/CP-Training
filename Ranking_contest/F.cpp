#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n, sum = 0;
    cin >> n;
    while (n != 0)
    {
        long temp = n % 10;
        sum = sum * 10 + temp;
        n /= 10;
    }
    cout << sum;
    return 0;
}