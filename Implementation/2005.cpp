#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x,y,z;
    int total_x = 0, total_y = 0, total_z = 0;
    for (int i = 0; i < n; i++) {
        cin >> x >> y >> z;
        total_x += x;
        total_y += y;
        total_z += z;
    }

    if (total_x == 0 && total_y == 0 && total_z == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}