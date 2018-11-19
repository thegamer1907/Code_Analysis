#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define FILE ""

int main()
{
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
    //freopen(FILE".in", "r", stdin);
    //freopen(FILE".out", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    h *= 5;
    if (h == 60) h = 0;
    t1 *= 5;
    if (t1 == 60) t1 = 0;
    t2 *= 5;
    if (t2 == 60) t2 = 0;
    bool f = 1;
    for (int i = t1; i != t2;)
    {
        if (i == h || i == m || i == s)
        {
            f = 0;
            break;
        }
        i++;
        if (i > 59)
        {
            i = 0;
        }
    }
    if (f)
    {
        cout << "YES";
        return 0;
    }
    f = 1;
    t2--;
    if (t2 < 0)
        t2 = 0;
    for (int i = t1 - 1; i != t2;)
    {
        if (i == h || i == m || i == s)
        {
            f = 0;
            break;
        }
        i--;
        if (i < 0)
        {
            i = 59;
        }

    }
    if (f)
    {
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}
