#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> list;
    int n;
    cin >> n;
    while (n--)
    {
        int ele;
        cin >> ele;
        list.push_back(ele);
    }
    for (int i = list.size() - 1; i >= 0; i--)
    {
        cout << list[i];
        if (i != 0)
            cout << " ";
    }
    cout << endl;
    return 0;
}