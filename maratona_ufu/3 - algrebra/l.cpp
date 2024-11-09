#include <iostream>

using namespace std;

int main()
{
    int A1, B1, R1, A2, B2, R2;

    cin >> A1 >> B1 >> R1;
    cin >> A2 >> B2 >> R2;

    double x, y;

    double det = A1 * B2 - A2 * B1;

    if (det != 0)
    {
        x = (double)(R1 * B2 - R2 * B1) / det;
        y = (double)(A1 * R2 - A2 * R1) / det;

        cout << fixed;
        cout.precision(2);
        cout << x << " " << y << endl;
    }
    else
    {
        cout << "sistema indeterminado" << endl;
    }

    return 0;
}