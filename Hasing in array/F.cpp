#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string data1;
        string data2;
        int flag = 0;

        cin >> data1 >> data2;

        if (data1.size() == data2.size())
        {
            sort(data1.begin(), data1.end());
            sort(data2.begin(), data2.end());

            for (int i = 0; i < data1.size(); i++)
            {
                if (data1[i] != data2[i])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
                cout << "False" << endl;
            else
                cout << "True" << endl;
        }

        else
            cout << "False" << endl;
    }
    return 0;
}