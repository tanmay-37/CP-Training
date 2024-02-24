#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b;
    int l;

    cin >> l >> b;

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if (i == 0 || i == b - 1 || j == 0 || j == l - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
