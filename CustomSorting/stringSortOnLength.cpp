/*
  input : ["abc","bca","abcd","d","e"]
  output : ["abcd","abc","bca","d","e"]
*/

#include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b)
{
    int l1 = 0,l2 = 0;
    l1 = a.length();
    l2 = b.length();
    if(l1 == l2){
        return false;
    }
    return l2<l1;

}
int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}