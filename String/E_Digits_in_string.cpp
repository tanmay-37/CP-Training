#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int flag = 1;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] < 0 || s[i] > 9)
        {
            cout << "No" << endl;
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        cout << "Yes" << endl;
    return 0;
}