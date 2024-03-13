#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, insert_num;
        cin >> n >> insert_num;
        int count = -1;
        string s1 = to_string(insert_num);
        string num;
        cin >> num;

        for (int i = 0; i < n; ++i)
        {
            if (num[i] - '0' < insert_num)
            {
                count = i;
                break;
            }
        }
        string ans;
        if (count != -1)
        {
            ans = num.substr(0, count) + s1 + num.substr(count);
        }
        else
        {
            ans = num + s1;
        }
        cout << ans << endl;
    }

    return 0;
}