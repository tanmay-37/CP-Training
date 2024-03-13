#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int v_count = 0;
    int c_count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            v_count++;
        }
        else
            c_count++;
    }

    cout << v_count << " " << c_count;
    return 0;
}