#include <bits/stdc++.h>

using namespace std;
bool isPalindrome(string S)
{
    string P = S;

    reverse(P.begin(), P.end());

    if (S == P)
    {

        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int count;
        vector<int>
            freq(128);

        for (int i = 0; i < s.length(); i++)
            freq[s[i]]++;

        int counter = 0;
        for (int i = 0; i < 128; i++)
        {
            if (freq[i] > 0)
                counter++;
            if (freq[i] > 1)
                count++;
        }

        if ((counter > 2 && count > 1) || s.length() > 3)
        {
            if (isPalindrome(s))
            {
                cout << "Yes" << endl;
            }
            else
                cout << "No" << endl;
        }
        else if (counter <= 2)
        {
            cout << "No" << endl;
        }
    }
}