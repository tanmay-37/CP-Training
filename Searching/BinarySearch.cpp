#include<bits/stdc++.h>
using namespace std;
int binarySearch(int l,int r,int ele,vector<int> v){
    while(l<=r){
    int mid = (l+r)/2;
        if(v[mid] == ele) return mid+1;
        else if(v[mid]>ele){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int ele;
    cin >> ele;
    vector<int> data(n);
    for(int i = 0;i<n;i++){
        cin>>data[i];
    }
    sort(data.begin(),data.end());
    int l = 0,r = n-1;

    cout<<binarySearch(l,r,ele,data);
return 0;
}