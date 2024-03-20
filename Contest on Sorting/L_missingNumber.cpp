#include <bits/stdc++.h>

using namespace std;

vector<int> missingNumbers(vector<int> arr, vector<int> brr)
{
    unordered_map<int, int> freqMap;
    for (int num : brr)
    {
        freqMap[num]++;
    }
    for (int num : arr)
    {
        freqMap[num]--;
    }
    vector<int> missing;
    for (auto it = freqMap.begin(); it != freqMap.end(); ++it)
    {
        if (it->second > 0)
        {
            missing.push_back(it->first);
        }
    }
    sort(missing.begin(), missing.end());

    return missing;
}

int main()
{
    int n, m;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    cin >> m;
    vector<int> brr(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> brr[i];
    }

    vector<int> result = missingNumbers(arr, brr);
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
