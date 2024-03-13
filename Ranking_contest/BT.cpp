#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double a, b, c;
        cin >> a >> b >> c;
        double avg = (a + b) / 2;

        if (avg > c)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}