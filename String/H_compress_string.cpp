#include <iostream>
#include <string>

using namespace std;

string uttar(string &s)
{
    string ans;
    int count = 1;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
        else
        {
            ans += s[i] + to_string(count);
            count = 1;
        }
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    cout << uttar(s) << endl;
    return 0;
}
