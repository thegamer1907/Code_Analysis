#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    int ta, tb;
    ta = tb = 0;
    //into same unit
    h = (h * 5) % 60;
    t1 = (t1 * 5) % 60;
    t2 = (t2 * 5) % 60;

    int f1, f2;

    f1 = t1;
    while (true)
    {
        if (f1 == h || f1 == m || f1 == s)
            break;
        f1 = (f1 + 1) % 60;
    }

    f2 = t2;
    while (true)
    {
        if (f2 == h || f2 == m || f2 == s)
            break;
        f2 = (f2 + 1) % 60;
    }

    if (f1 == f2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}