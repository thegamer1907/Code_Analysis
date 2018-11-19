#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int N = 2 * 1e5 + 7;
const ll MOD = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(0);
    ld h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    t1 *= 5, t2 *= 5;
    h *= 5;
    if (t1 == 60)
        t1 = 0;
    if (t2 == 60)
        t2 = 0;
    if (h == 60)
        h = 0;
    m += s / 60;
    h += m / 60;
    //cout << h << ' ' << m << ' ' << s << ' ' << t1 << ' ' << t2 << endl;
    ll st = t1;
    while (true)
    {
        st++;
        //cout << st << endl;
        if (st == 60)
            st = 0;
        if ((abs(st - h) <= 1 && st >= h) || (abs(st - m) <= 1 && st >= m) || (abs(st - s) <= 1 && st >= s))
            break;
        if (st == t2)
            return cout << "YES", 0;
    }
    st = t1;
    while (true)
    {
        st--;
        //cout << st << endl;
        if (st == -1)
            st = 59;
        if ((abs(st - h) <= 1 && st <= h) || (abs(st - m) <= 1 && st <= m) || (abs(st - s) <= 1 && st <= s))
            break;
        if (st == t2)
            return cout << "YES", 0;
    }
    cout << "NO";
    return 0;
}
