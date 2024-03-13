#include <bits/stdc++.h>
using namespace std;

int checkCode(string s)
{
    int count = 0;
    string reff = "codeforces";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != reff[i])
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;

        cout << checkCode(s) << endl;
    }
    return 0;
}