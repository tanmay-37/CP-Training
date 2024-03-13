#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int countA = 0, countB = 0;
    while (t--)
    {
        int A[3];
        int B[3];

        cin >> A[0] >> A[1] >> A[2];
        cin >> B[0] >> B[1] >> B[2];

        for (int i = 0; i < 3; i++)
        {
            if (A[i] == 1)
                countA++;
            if (B[i] == 1)
                countB++;
        }

        if (countA == countB)
            cout << "Pass" << endl;
        else
            cout << "Fail" << endl;
    }

    return 0;
}