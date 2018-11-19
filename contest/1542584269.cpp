#include<bits/stdc++.h>
using namespace std;
int h, m, s, t, r, q;
int main()
{
    cin >> h >> m >> s >> t >> r;
    h = (h % 12) * 5;
    t = (t % 12) * 5;
    r = (r % 12) * 5;
    for (int i = t; i != r; i = (i + 1)% 60)
    {
        if ((h == i || m == i || s == i) && i != r)
        {
            q = 1;
            break;
        }
    }
    if (q == 0)
    {
        cout << "YES";
        return (0);
    }
    q = 0;
    for (int i = r; i != t; i = (i + 1)% 60)
    {
        if ((h == i || m == i || s == i) && i != t)
        {
            q = 1;
            break;
        }
    }
    if (q == 0)
    {
        cout << "YES";
        return (0);
    }
    cout << "NO";
    return (0);
}
