#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int count;

    vector<long long> data(n);
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }

    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j && data[i] != -1 && data[i] == data[j])
            {
                count++;
                data[j] = -1;
            }
        }
        if (data[i] != -1)
        {
            if (count == 1)
                cout << data[i] << " ";
        }
    }
}