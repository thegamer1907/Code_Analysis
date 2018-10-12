#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define all(x)           (x).begin(), (x).end()
#define inf 1e18

using namespace std;

#ifdef optimization
    #pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
    #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#endif

int main()
{
    ios_base::sync_with_stdio(false);
    int n, q;
    cin >> n >> q;
    ll cur = 0, sum = 0;
    vector <ll> v(n), pr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i]; pr[i] = sum;
    }
    while (q--)
    {
        ll x;
        cin >> x;
        cur += x;
        if (cur >= sum)
        {
            cur = 0;
            cout << n << endl;
            continue;
        }
        cout << n - (upper_bound(all(pr), cur) - pr.begin()) << endl;
    }
    return 0;
}
