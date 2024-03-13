#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin >> s;

    int m, h;
    int m1;
    h = s / 3600;
    if (s >= 3600)
    {
        m1 = s - (h * 3600);
        m = m1 / 60;
        s = m1 % 60;
    }
    else
    {
        m = s / 60;
        s %= 60;
    }
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}