#include <bits/stdc++.h>
using namespace std;
int reverse(int n)
{
    int flag, temp, sum = 0;
    flag = n;
    if (flag == 0)
        return 0;
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
            return (-1) * sum;
        else
            return sum;
    }
}
int main()
{

    int n;
    cin >> n;

    int rev = reverse(n);
    if (n == 0)
        cout << "NO";
    else if (rev == n)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}