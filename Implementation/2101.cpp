#include <iostream>

using namespace std;

int n;
int x, y, z, dx, dy, dz;


int main()
{
    cin >> n;

    x = 0;
    y = 0;
    z = 0;

    for (int i = 1; i <= n; i++) {
        cin >> dx >> dy >> dz;
        x = x + dx;
        y = y + dy;
        z = z + dz;
    }

    if ((x == 0) && (y == 0) && (z == 0)) cout << "YES";
    else cout << "NO";
    return 0;
}
