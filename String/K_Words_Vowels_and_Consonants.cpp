#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while(t--) {
        string s;
        getline(cin, s);
        
        int w_count = 0;
        int v_count = 0;
        int c_count = 0;
        bool flag = false;

        for (char c : s) {
            if (c == ' ') {
                flag = false;
            } else if (!flag) {
                flag = true;
                w_count++;
            }

            if (isalpha(c)) {
                if (isVowel(c))
                    v_count++;
                else
                    c_count++;
            }
        }

        cout << w_count << " " << v_count << " " << c_count << endl;
    }

    return 0;
}
