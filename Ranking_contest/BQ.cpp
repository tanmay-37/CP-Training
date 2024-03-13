#include <iostream>

using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;

    long long rows = (n + a - 1) / a;
    long long cols = (m + a - 1) / a;

    long long total_flagstones = rows * cols;

    cout << total_flagstones << endl;

    return 0;
}
