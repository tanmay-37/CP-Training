#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i == n - 1)
            ;
        else
            cout << " ";
    }
    return 0;
}