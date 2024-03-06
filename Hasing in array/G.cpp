#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string J, S;
        cin >> J >> S; 
        
        int count = 0;
        for (char stone : S) {
            if (J.find(stone) != string::npos) {
                count++;
            }
        }
        
        cout << count << endl; 
    }

    return 0;
}
