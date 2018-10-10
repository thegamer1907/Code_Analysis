#include <bits/stdc++.h>
using namespace std;

int street[1111];
int n, l;

int check(double d)
{
    int i;
    double dis, mid;

    dis = street[0] - d;
    if (dis > 0)    return 0;

    for (i = 0; i < n - 1; i++)
    {
        dis = street[i] + d;
        if (dis < street[i+1])
        {
            mid = (street[i] + street[i+1]) / 2.0;
            if (mid > dis)  return 0;
        }
    }

    if (street[i] + d < l)  return 0;

    return 1;
}

double bin(int l)
{
    double lo, hi, mid, ans = -1;

    lo = 0;
    hi = l;

    while ( lo < hi )
    {
        mid = (lo + hi) / 2.0;
        if (check(mid) == 1)
        {
            if (ans == mid)     break;
            ans = mid;
            hi = mid;
        }
        else
        {
            lo = mid;
        }
    }

    return ans;
}

int main( )
{
    int i;
    double ans;

    scanf("%d %d", &n, &l);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &street[i]);
    }

    sort(street, street + n);

    ans = bin(l);

    printf("%.10lf\n", ans);

    return 0;
}
