#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int t;
    cin>>t;
    int swaps;
    while(t--){
        swaps =0;
        int n;
        cin>>n;

        vector<int> data;
        for(int i=0;i<n;i++){
          int a;
          cin>>a;
          data.push_back(a);
        }

        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(data[j]>data[j+1]){
                    swap(data[j],data[j+1]);
                    swaps++;
                }
                
            }
            if(swaps == 0) break;
        }

        cout<<swaps<<endl;
    }
    return 0;
}