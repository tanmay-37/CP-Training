#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums;
    for (int i = 0; i < 99; i++)
    {
        int in;
        cin >> in;
        nums.push_back(in);
    }
    int n = 100;

    int sumTotal = n * (n + 1) / 2;

    int sumOfVector = 0;
    for (int i = 0; i < n; i++)
    {
        sumOfVector += nums[i];
    }

    cout << (sumTotal - sumOfVector);
    return 0;
}
