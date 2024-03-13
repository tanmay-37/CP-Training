#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int flag = 0;

    for (char c : s)
    {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            flag = 1;
        }
        else
            flag = 0;
    }
    if (flag == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}