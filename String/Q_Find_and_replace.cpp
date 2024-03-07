#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, insert_num;
        cin >> n >> insert_num;

        string num;
        cin >> num;

        int index = n;
        for (int i = 0; i < num.length(); ++i)
        {
            if (num[i] - '0' < insert_num)
            {
                index = i;
                break;
            }
        }
        string result = num.substr(0, index) + to_string(insert_num) + num.substr(index);

        cout << result << endl;
    }

    return 0;
}
