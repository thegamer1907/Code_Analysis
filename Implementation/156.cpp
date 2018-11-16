#include <iostream>
using namespace std;

int n, a, b, c = 0;

int go(int v, int l, int r)
{
    //cout << v << " " << l << " " << r << endl;
    int m = (l + r) / 2;
    if (a <= m && b > m) return v;
    else
    {
        if (a <= m && b <= m) return go(v - 1, l, m);
        else return go(v - 1, m, r);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> a >> b;
    if (a >= b) swap(a, b);
    int k = n;
    while (k != 1)
    {
        k /= 2;
        c++;
    }
    int ans = go(c, 1, n);
    if (ans == c) cout << "Final!";
    else cout << go(c, 1, n);

    return 0;
}
