#include <bits/stdc++.h>
using namespace std;

int sum[111111];

int binary_khoja(int num, int i, int n)
{
    int lo, hi, mid, tm;

    lo = i, hi = n;

    while (lo <= hi)
    {
        mid = (lo + hi) / 2;
        tm = sum[mid] - sum[i - 1];
        if (tm == num)
            return mid;
        else if (tm > num)
        {
            hi = mid - 1;

        }
        else
            lo = mid + 1;
    }

    return hi;
}

int main( )
{
    int n, i, t, d, s, mx, tt, tm;

    scanf("%d %d", &n, &t);

    s = 0;
    sum[0] = 0;
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &d);
        s += d;
        sum[i] = s;
    }

    mx = 0;

    for (i = 1; i <= n; i++)
    {
        tt = binary_khoja(t, i, n);
        tm = tt - i + 1;
        if (mx < tm)    mx = tm;
    }

    cout << mx << endl;

    return 0;
}
