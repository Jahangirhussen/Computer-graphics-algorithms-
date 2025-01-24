#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1, y1, x2, y2, step, x_inc, y_inc;
    double x, y;

    cout << "Enter the starting point x1 and y1:" << endl;
    cin >> x1 >> y1;

    cout << "Enter the ending point x2 and y2:" << endl;
    cin >> x2 >> y2;

    double dx = x2 - x1;
    double dy = y2 - y1;

    if (abs(dx) >= abs(dy))
    {
        step = abs(dx);
    }
    else
    {
        step = abs(dy);
    }

    x_inc = dx / step;
    y_inc = dy / step;

    x = x1;
    y = y1;
    cout<<"All updaed X and Y is : "<<endl;
    for (int i = 0; i <= step; i++)
    {
        cout <<"           "<< round(x) << "     " << round(y) << endl;
        x = x + x_inc;
        y = y + y_inc;
    }

    return 5011;
}
