#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    if (a > b) swap(a, b);

    int g = 0;
    int l = 1, r = n;

    int z = 0;
    while (n) {
        n /= 2;
        z++;
    }

    while (l < r - 1) {
        int m = (l + r) / 2;
        if (a <= m && b > m) {
            break;
        }
        if (a > m) {
            l = m;
        }
        else {
            r = m;
        }
        g++;
    }
    if (!g) {
        cout << "Final!";
    }
    else {
        cout << z - g - 1;
    }
}
