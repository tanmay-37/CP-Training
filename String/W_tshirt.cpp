#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int countf1 = 0,countf2 = 0;

        char final1 = a[a.length() - 1];
        char final2 = b[b.length() - 1];
        if (a.length() > 1)
        {
            for (int i = 0; i < a.length() - 2; i++)
            {
                countf1++;
            }
        }
        if (b.length() > 1)
        {
            for (int i = 0; i < b.length() - 2; i++)
            {
                countf2++;
            }
        }
        if((final1 == 'M' && final2 == 'M') || (final1 == 'S' && final2 == 'S') || (final1 == 'S' && final2 == 'S')){
            
        }
    }
    return 0;
}