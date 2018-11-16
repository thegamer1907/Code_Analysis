#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    int x[100], y[100], z[100], n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> x[i] >> y[i] >> z[i];
    bool a = accumulate(x, x + n, 0) == 0;
    bool b = accumulate(y, y + n, 0) == 0;
    bool c = accumulate(z, z + n, 0) == 0;
    cout << (a && b && c ? "YES" : "NO");
}
