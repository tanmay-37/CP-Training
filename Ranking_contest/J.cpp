#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int time;
        cin >> time;
        if (time >= 1 && time <= 4)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}