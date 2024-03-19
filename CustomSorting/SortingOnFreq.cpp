/*
  input : [1,2,3,3,2,2,2,1,5]
  output : [2,2,2,2,1,1,3,3,5]
*/

#include <bits/stdc++.h>
using namespace std;
map<int, int> m;
bool cmp(int a,int b)
{
    if(m[a] == m[b]) return a<b;
    return m[a] < m[b];
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < v.size(); i++)
        {
            m[v[i]]++;
        }
        sort(v.begin(), v.end(), cmp);
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}