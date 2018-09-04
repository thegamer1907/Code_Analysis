// IN THE NAME OF GOD
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

#define PB push_back
#define PP pop_back
#define F first
#define S second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define I insert
#define E erase

const int MAXN = 1e5 + 100;
const int N = 1e6 + 100;
const ll INF = 1e18;
const ll hash = 311;
const ll mod = 1e9 + 9;

ll a[MAXN];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll l = 0;
    ll r = n + 1;
    while (r - l > 1)
    {
        ll mid = (r + l) / 2;
        vector <ll> v;
        for (int i = 0; i < n; i++)
            v.PB(a[i] + ((i + 1) * mid));
        sort(v.begin(), v.end());
        ll sum = 0;
        for (int i = 0; i < mid; i++)
            sum += v[i];
        if (sum > m)
            r = mid;
        else
            l = mid;
    }
    ll sum = 0;
    vector <ll> v;
    for (int i = 0; i < n; i++)
        v.PB(a[i] + ((i + 1) * l));
    sort(v.begin(), v.end());
    for (int i = 0; i < l; i++)
        sum += v[i];
    cout << l << " " << sum;
}
