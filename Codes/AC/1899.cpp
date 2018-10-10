#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<long long, long long> l, r;
    l[a[0]]++;
    for (int i = 1; i < n; i++)
    {
        r[a[i]]++;
    }
    long long ans = 0;
    for (int i2 = 1; i2 < n - 1; i2++)
    {
        r[a[i2]]--;
        if (a[i2] % k == 0)
        {
            auto li = l.find(a[i2] / k), ri = r.find(a[i2] * k);
            if (li != l.end() and ri != r.end())
                ans += li->second * ri->second;
        }
        l[a[i2]]++;
    }
    cout << ans;
    return 0;
}