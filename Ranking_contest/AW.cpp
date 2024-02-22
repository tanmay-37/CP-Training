#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> dataSet;
    int x;
    while (x != 0)
    {
        cin >> x;
        dataSet.push_back(x);
    }
    int n = dataSet.size();
    for (int i = 0; i < n - 1; i++)
    {
        cout << "Case " << i + 1 << ": " << dataSet[i] << endl;
    }

    return 0;
}