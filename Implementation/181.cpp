#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
const ll inf = 1e14;
const ld eps = 1e-14;
ll n, a, b;

int main()
{
    cin >> n >> a >> b;
    a--;
    b--;

    int cnt = 1;
    if (a > b)
        swap(a, b);
    while (!(a == b - 1 && !(a & 1)))
    {
        a /= 2;
        b /= 2;
        cnt++;
    }
    if ((1 << cnt) == n && (a == b - 1 && !(a & 1)))
    {
        cout << "Final!\n";
        return 0;
    }
    cout << cnt << "\n";
}
