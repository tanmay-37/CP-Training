#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    
    vector<vector<int>> mat(n, vector<int>(m));

    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> mat[i][j];
        }
    }

    
    vector<bool> row(n, false);
    vector<bool> col(m, false);

    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (mat[i][j] == 0) {
                row[i] = true;
                col[j] = true;
            }
        }
    }

    
    for (int i = 0; i < n; ++i) {
        if (row[i]) {
            for (int j = 0; j < m; ++j) {
                mat[i][j] = 0;
            }
        }
    }

    
    for (int j = 0; j < m; ++j) {
        if (col[j]) {
            for (int i = 0; i < n; ++i) {
                mat[i][j] = 0;
            }
        }
    }

  
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;;
    }

    return 0;
}