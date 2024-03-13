#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int flag = 1;

    for (char c : s)
    {
        if (c < '0' || c > '9')
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}