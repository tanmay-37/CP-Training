#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char ch;
    int count = 0;

    getline(cin, s);
    cin >> ch;

    for (char c : s)
    {
        if (ch == c)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}