#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int flag = 0;
    while (t--)
    {
        int n;
        cin >> n;
        string num;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        int numInt = stoi(num);
        while (numInt != 0)
        {
            temp = numInt % 10;
            if (temp == 0 || temp == 5)
            {
                flag = 1;
                break;
            }
            else
                flag = 0;
            numInt /= 10;
        }
        if (flag == 1)
            cout << "Yes";
        else
            cout << "No";
    }
    return 0;
}