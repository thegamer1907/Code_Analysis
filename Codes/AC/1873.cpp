#include<bits/stdc++.h>
using namespace std;
const int MXN = 1e5 + 10;
long long n, m, k, l, mid, r = 1e12;
long long Solve(long long t)
{
    long long c = 0;
    for (int i = 1; i <= n; i++)
        c += min(m, t / i);
    return (c);
}
int main()
{
    scanf("%I64d%I64d%I64d", &n, &m, &k);
    while (r - l > 1)
    {
        mid = (l + r) / 2;
        if (Solve(mid) < k)
            l = mid;
        else
            r = mid;
    }
    printf("%I64d", r);
    return (0);
}
