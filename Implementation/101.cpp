#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    if (b < a)
    {
        swap(a, b);
    }
    int l = 1, r = n;
    while (l <= a && b <= r)
    {
        int m = (r + l - 1) / 2;
        if (m <= a)
        {
            if (l == m + 1)
            {
                l = r;
                continue;
            }
            l = m + 1;
        }
        else
        {
            if (r == m)
            {
                r = l;
                continue;
            }
            r = m;
        }
    }
    int ans = 1;
    //cout << l << r << endl;
    int g = r - l;
    //cout << "g = " << g;
    while (g > 0)
    {
        ans++;
        g /= 2;
    }
    int fin = 0;
    while (n > 1)
    {
        n /= 2;
        fin++;
    }
    if (ans != fin)
    {
        cout << ans;
    }
    else
    {
        cout << "Final!";
    }
}
