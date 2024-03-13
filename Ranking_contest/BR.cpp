#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> data(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> data[i];
    }

    int kth = data[k - 1];
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (data[i] >= kth && data[i] > 0)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
