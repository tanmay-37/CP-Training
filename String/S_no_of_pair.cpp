#include <bits/stdc++.h>
using namespace std;

int maxPairs(string s)
{
    unordered_map<char, int> freq;

    for (char &c : s)
    {
        c = tolower(c);
    }

    for (char &c : s)
    {
        freq[c]++;
    }

    int pairs = 0;
    for (auto &i : freq)
    {
        if (i.second % 2 != 0)
        {
            i.second = i.second - 1;
        }
        pairs += i.second / 2;
    }
    return pairs;
}
int countPairs(const string &s)
{
    unordered_map<char, int> freq;
    int pairs = 0;

    for (char c : s)
    {
        if (islower(c))
        {
            char corresponding_uppercase = toupper(c);
            if (freq[corresponding_uppercase] > 0)
            {
                pairs++;
                freq[corresponding_uppercase]--;
            }
            else
            {
                freq[c]++;
            }
        }
        else if (isupper(c))
        {
            char corresponding_lowercase = tolower(c);
            if (freq[corresponding_lowercase] > 0)
            {
                pairs++;
                freq[corresponding_lowercase]--;
            }
            else
            {
                freq[c]++;
            }
        }
    }

    return pairs;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int count;
        int pair = countPairs(s);
        // cout << pair << endl;

        int maxpairs = maxPairs(s);
        // cout << maxpairs << endl;
        if (k == 0)
            cout << pair << endl;
        else if (pair == maxpairs)
            cout << pair << endl;
        else if (k > maxpairs - pair)
        {
            cout << maxpairs << endl;
        }
        else if (k <= maxpairs - pair)
        {
            cout << k + pair << endl;
        }
    }
    return 0;
}