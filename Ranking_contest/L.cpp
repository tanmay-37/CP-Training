#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    float y;
    cin >> x >> y;
    if (y >= x)
    {
        if (x % 5 == 0)
        {
            cout << (float)y - x << endl;
        }
        else
        {
            cout << y;
        }
    }
    return 0;
}