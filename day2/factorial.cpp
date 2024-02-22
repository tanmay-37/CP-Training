#include <bits/stdc++.h>
using namespace std;

vector<int> fact(int n, vector<int> result)
{

    long fact = 1;

    for (long i = n; i > 0; i--)
    {
        fact *= i;
        result.push_back(fact);
    }
    return result;
}
int main()
{
    long n;
    int t;
    vector<int> result;
    cin >> t;
    while (t--)
    {
        cin >> n;
        result.push_back(n);
    }
    int max = *max_element(result.begin(), result.end());
    vector<int> ans2 = fact(max, result);
    for (int i = 0; i < result.size(); i++)
    {
        cout << ans2[i] << endl;
    }

    return 0;
}