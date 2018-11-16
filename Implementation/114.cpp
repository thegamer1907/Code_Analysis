#include <bits/stdc++.h>

using namespace std;

int rec (int l, int r, int a, int b) {
    int m = l + r >> 1;
    if (a <= m && b > m) {
        return 0;
    }
    if (a <= m)
        return rec(l, m, a, b) + 1;
    return rec(m + 1, r, a, b) + 1;
}

int main()
{
    int n, a ,b;
    cin >> n >> a >> b;
    if (a > b)
        swap(a, b);
    int m = n, k = -1;
    while (m) {
        m >>= 1;
        k++;
    }
    int t = rec(1, n, a, b);
    if (!t)
        cout << "Final!";
    else
        cout << k - t;
}
