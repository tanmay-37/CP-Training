#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; // Read the number of test cases
    int zero = 0, one = 1;

    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < 0)
                count++;
        }

        if (count % 2 == 0)
            cout << zero << endl;
        else
            cout << one << endl;
    }

    return 0;
}
