#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double inRadian = M_PI * c / 180.0;
    double area = (a * b * sin(inRadian)) / 2;
    double side = sqrt(a * a + b * b - 2 * a * b * cos(inRadian));
    double peri = a + b + side;
    double height;
    if (inRadian > (M_PI_2))
    {
        height = b * cos(inRadian - M_PI_2);
    }
    else
    {
        height = b * sin(inRadian);
    }

    cout << area << endl
         << peri << endl
         << height << endl;
    return 0;
}