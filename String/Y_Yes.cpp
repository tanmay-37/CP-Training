#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int flag = 0;
        string y = "yes";

        for (auto &x : s)
        {
            x = tolower(x);
        }

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == y[i])
                flag = 1;
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}