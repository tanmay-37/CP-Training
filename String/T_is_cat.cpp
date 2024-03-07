#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int flag = 0;

        string cat = "meow";
        for (auto x : s)
        {
            x = tolower(x);
        }
        if (s.length() < 4)
            flag = 0;
        else
        {
            for (int i = 0; i < s.length(); i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    if (s[i] == cat[j])
                    {
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag == 1)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}