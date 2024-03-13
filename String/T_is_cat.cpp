#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isCatMeowing(const string& s) {
    int state = 0;
    for (char c : s) {
        switch(state) {
            case 0:
                if (tolower(c) == 'm') state = 1;
                break;
            case 1:
                if (tolower(c) == 'e') state = 2;
                else if (tolower(c) == 'm') state = 1;
                else state = 0;
                break;
            case 2:
                if (tolower(c) == 'o') state = 3;
                else if (tolower(c) == 'e') state = 2;
                else state = 0;
                break;
            case 3:
                if (tolower(c) == 'w') state = 4;
                else if (tolower(c) == 'o') state = 3;
                else state = 0;
                break;
            case 4:
                return false;
        }
    }
    return state == 4;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (isCatMeowing(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
