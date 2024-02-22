#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> ass;
    ass.push_back(a);
    ass.push_back(b);
    ass.push_back(c);

    sort(ass.begin(), ass.end());
    cout << ass[0] << " " << ass[1] << " " << ass[2] << endl;
    ;
    return 0;
}