#include <bits/stdc++.h>

using namespace std;

void upfile()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("MASOI.INP","r",stdin);
    freopen("MASOI.OUT","w",stdout);
}

const int maxN = 1e5 + 10;

long long n, a[maxN], s = 0, m = 0;

int main()
{
    //upfile();
    cin >> n;
    for (int i=1; i<=n; ++i)
        {
            cin >> a[i];
            s += a[i];
            m = max (m, a[i]);
        }

    long long l = m;
    long long h = 1e14;
    long long mid;
    while (l <= h)
    {
        mid = (l+h)/2;
        if (mid * n - s < mid)
            l = mid + 1;
        else
            h = mid - 1;
    }
    cout << l;
}