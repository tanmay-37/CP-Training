#include <bits/stdc++.h>
using namespace std;

int noOfChar(string str)
{

    unordered_set<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        s.insert(str[i]);
    }

    return s.size();
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        int diff;
        cin >> n;
        string s;
        cin >> s;
        int flag = 1;
        if (s.length() == 1)
            cout << "Yes" << endl;
        else if (noOfChar(s) == 1)
            cout << "No" << endl;
        else if (noOfChar(s) == s.length())
        {
            cout << "Yes" << endl;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                if (s[i] == s[i - 1])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                for (int i = 0; i < s.length(); i++)
                {
                    for (int j = i + 1; j < s.length(); j++)
                    {
                        if (s[i] == s[j])
                        {
                            if ((j - i - 1) % 2 == 0)
                            {
                                flag = 0;
                                break;
                            }
                        }
                    }
                }
            }
            if (flag == 0)
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
    }

    return 0;
}
