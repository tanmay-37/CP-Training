/*
  input : 1 2
          4 9
          2 5 
          0 2

  output : 0 2
           1 2
           2 5
           4 9
*/

#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b)
{
    return a.first<b.first;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}