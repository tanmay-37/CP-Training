#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, temp, sum = 0;
    cin >> n;
    int flag;
    flag = n;
    if (flag == 0)
        cout << "0";
    else
    {
        if (flag < 0)
            flag *= -1;
        while (flag != 0)
        {
            temp = flag % 10;
            sum = sum * 10 + temp;
            flag = flag / 10;
        }
        if (n < 0)
            cout << (-1) * sum;
        else
            cout << sum;
    }
    return 0;
}