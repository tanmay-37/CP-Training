/*
  input : [4 40 55 33]
  output : [40 4 33 55]
*/

#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    int s1 = 0,s2 = 0;
    int c = a,d = b;

    while(a>0){
        s1+=a%10;
        a/=10;
    }
    while (b > 0)
    {
        s2 += b % 10;
        b /= 10;
    }
    if(s1 == s2){
        return c>d;
    }
    return s1<s2;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end(),cmp);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
return 0;
}