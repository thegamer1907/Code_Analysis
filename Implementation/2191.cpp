#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, x, y, z, x_sum = 0, y_sum = 0, z_sum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> x >> y >> z;
        x_sum += x;
        y_sum += y;
        z_sum += z;
    }
    cout << (!x_sum && !y_sum && !z_sum ? "YES" : "NO") << '\n';
    return 0;
}