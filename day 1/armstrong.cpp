#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int temp = n;
    int ld, sum = 0;
    while (n != 0)
    {
        ld = n % 10;
        sum += pow(ld, 3);
        n = n / 10;
    }

    if (temp == sum)
        cout << "Yes";
    else
        cout << "NO";

    return 0;
}