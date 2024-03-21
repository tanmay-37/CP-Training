#include <bits/stdc++.h>
using namespace std;
int binarySearch(int l, int r, int ele, vector<int> v)
{
    int mid = (l + r) / 2;
    int ans = -1;
    while (l <= r)
    {
        if (v[mid] == ele){
            ans = mid + 1;
            r = mid - 1;
        }
        else if (v[mid] > ele)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int ele;
    cin >> ele;
    vector<int> data(n);
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }
    sort(data.begin(), data.end());
    int l = 0, r = n - 1;

    cout << binarySearch(l, r, ele, data);
    return 0;
}