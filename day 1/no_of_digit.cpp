#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    int count = 0;
    cin >> n;
    if (n == 0)
    {
        cout << "1";
    }
    else
    {
        while (n != 0)
        {

            count++;
            n = n / 10;
        }
        cout << count;
    }

    return 0;
}