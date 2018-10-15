#include    <bits/stdc++.h>
#define     ll long long
#define     ull unsigned long long
#define     ld long double
#define     prec(k) fixed << setprecision(k)
#define     up(i, k, n) for (int i = k ; i < n ; i ++)
#define     down(i, k, n) for (int i = k ; i >= n ; i --)
#define     ii pair<int, int>
#define     pll pair <ll, ll>
#define     X first
#define     Y second
#define     str basic_string <int>
const int maxN = (int) 1e4 + 7;
const int maxM = (int) 1e5 + 7;
const int maxT = (int) 1e6 + 7;

using namespace std;

static ll n, q, a[maxT], k[maxT], s[maxT];

ll BS(ll v)
{
    ll l = 0, r = n, mid;
    while (l <= r)
    {
        mid = l + r >> 1;
        s[mid] <= v ? l = mid + 1 : r = mid - 1;
    }
    return r;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> q;
    up(i, 1, n + 1) cin >> a[i];
    up(i, 1, n + 1) s[i] = s[i - 1] + a[i];
    up(i, 1, q + 1)
    {
        cin >> k[i], k[i] += k[i - 1];
        if (k[i] >= s[n])
        {
            k[i] = 0;
            cout << n << '\n';
            continue;
        }
        cout << n - BS(k[i]) << '\n';
    }

    return 0;
}