#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count;

        string data;
        cin >> data;

        for (int i = 0; i < data.size(); i++)
        {
            count = 1;
            for (int j = 0; j < data.size(); j++)
            {
                if (i != j && data[i] != -1 && data[i] == data[j])
                {
                    count++;
                    data[j] = -1;
                }
            }
            if (data[i] != -1)
            {
                if (count > 1)
                {
                    cout << data[i] << endl;
                    break;
                }
            }
        }
        if (count == 1)
            cout << "." << endl;
    }
}