#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    vector<int> v(n, 0);

    int j = 0;
    for (int i = 1; i < n; i++)
    {
        while (j > 0 && s[i] != s[j])
        {
            j = v[j - 1];
        }
        if (s[i] == s[j])
        {
            j++;
        }
        v[i] = j;
    }
    int l = v.back();
    cout << l << endl;

    return 0;
}