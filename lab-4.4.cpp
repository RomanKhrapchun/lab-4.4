#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
    double x, y, xp, xk, dx, R;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "R = "; cin >> R;
    
    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        if (x <= 0)
            y = -R / 6 * (x + 6);

        if (x > 0 && x <= R)
            y = -sqrt(pow(R, 2) - pow(x, 2));

        if (x > R && x <= (2 * R))
            y = sqrt((R * R) - pow((x - 2 * R), 2));

        if (x > 2 * R)
            y = R;

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    return 0;
}