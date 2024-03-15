
#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    int n;
    while(t--){
      cin>>n;
      long long int sum[2*n-1] = {0};
      long long int M[n][n];
      for(int i = 0;i<n;i++){
        for(int j =0 ;j<n;j++){
          cin>>M[i][j];
        }
      }
      int k ;
      for(int i = 0;i < n;i++){
        k = i;
        for(int j = n-1 ;j>=0;j--){
          sum[k++] += M[i][j];
        }
      }
        for(auto i : sum){
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
}