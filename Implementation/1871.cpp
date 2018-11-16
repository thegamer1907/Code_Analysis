#include <iostream>
using namespace std;

/*
 Body would be in equilibrium if
    NET FORCE on it in every dimension = 0
*/
int main()
{
    int n;
    cin >> n;

    int x, y, z;
    int sum_x=0, sum_y = 0, sum_z = 0;

    for (int i=0; i < n; i++) {
        cin >> x >> y >> z;
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }

    if (sum_x == 0 && sum_y == 0 && sum_z == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}
