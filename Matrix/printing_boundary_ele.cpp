#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n; cin>>m>>n;
    vector<vector<int>> mat(5,vector<int>(5));

    for(int i = 0;i < 5;i++){
        for(int j = 0;j < 5;j++){
            cin>>mat[i][j];
        }
    }

    for(int i = 0;i < 5;i++){
        cout<<mat[0][i]<<" ";
    }
    cout<<endl;
    for(int i = 1;i < 5;i++){
        cout<<mat[i][4]<<" ";
    }
    cout<<endl;
    for(int i = 3;i >= 0 ;i--){
        cout<<mat[4][i]<<" ";
    }
    cout<<endl;
    for(int i = 3;i >0;i--){
        cout<<mat[i][0]<<" ";
    }

    return 0;
}