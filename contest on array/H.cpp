#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> data;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        data.push_back(ele);
    }
    for (int i = n; i >= 0; i--)
    {
        cout << data[i];
        if (i != 0)
            cout << " ";
    }
    return 0;
}