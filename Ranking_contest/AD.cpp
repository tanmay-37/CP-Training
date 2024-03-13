#include <bits/stdc++.h>
using namespace std;
int main()
{

    long n;
    cin >> n;
    long temp = n;
    int ld, sum = 0;
    while (n > 0)
    {
        ld = n % 10;
        sum += (ld * ld * ld);
        n = n / 10;
    }

    if (temp == sum)
        cout << "Yes";
    else
        cout << "NO";

    return 0;
}