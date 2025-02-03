#include <iostream>
using namespace std;

void midPoint(int a, int b, int x, int y)
{
    cout  << x + a << ", " << y + b  << endl;
    cout  << -x + a << ", " << y + b  << endl;
    cout  << x + a << ", " << -y + b  << endl;
    cout  << -x + a << ", " << -y + b  << endl;
    cout  << y + a << ", " << x + b  << endl;
    cout  << -y + a << ", " << x + b  << endl;
    cout  << y + a << ", " << -x + b  << endl;
    cout  << -y + a << ", " << -x + b  << endl;
}

int main()
{
    int a, b, r;
    cout << "Enter the center coordinates (a, b) and radius (r): ";
    cin >> a >> b >> r;

    int x = 0;
    int y = r;
    int p = 1 - r;

    midPoint(a, b, x, y);

    while (x < y)
    {
        if (p < 0)
        {
            p = p + 2 * x + 3;
        }
        else
        {
            p = p + 2 * (x - y) + 5;
            y--;
        }
        x++;
        midPoint(a, b, x, y);
    }

    return 0;
}
