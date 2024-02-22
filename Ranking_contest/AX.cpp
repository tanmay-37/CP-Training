#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    while (true)
    {
        if (a == 0 & b == 0)
        {
            break;
        }
        cin >> a >> b;
        if (a > b)
        {
            cout << b << " " << a << endl;
        }
        else
        {
            cout << a << " " << b << endl;
        }
    }
    return 0;
}