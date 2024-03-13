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

bool isNewPalindrome(string s)
{

    int no_of_char = noOfChar(s);

    unordered_map<char, int> freq;
    int count = 0;

    for (char c : s)
    {
        freq[c]++;
    }
    for (auto i = freq.begin(); i != freq.end(); i++)
    {
        if (i->second % 2 != 0)
            count++;
    }
    // for (auto it = freq.begin(); it != freq.end(); it++)
    // {
    //     cout << "Key: " << it->first
    //          << ", Value: " << it->second << endl;
    //     ++it;
    // }
    if (no_of_char < 2)
        return false;
    else if (((s.size() % 2 == 0 && count == 0) || (s.size() % 2 != 0 && count == 1)) && no_of_char >= 2)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;

        {
            if (isNewPalindrome(s))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}