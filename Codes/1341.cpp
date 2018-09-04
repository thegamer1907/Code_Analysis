//In The Name Of God
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<string> vs;
typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;
typedef pair<double, double> dd;
typedef pair<dd, double> ddd;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef vector<dd> vdd;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<vvi> vvvi;
typedef vector<vvvi> vvvvi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<vii> vvii;
typedef vector<vvii> vvvii;
typedef vector<vector<viii> > vvviii;
typedef vector<vector<iii> > vviii;
typedef set<int> si;
typedef vector<si> vsi;

#define forn(i, n) for (ll i = 0; i < n; i++)
#define inf 1000000000
#define eps 1e-9
#define pi acos(-1.0)
#define F first
#define S second
#define pb push_back

const int MX = 1e5 + 100;
ll n, s;
ll a[MX], b[MX];

ll pos(ll k) {
    ll cur = 0;
    forn(i, n) b[i] = a[i] + (i + 1) * k;
    sort(b, b + n);
    forn(i, k) cur += b[i];
    return cur;

}

int main() {
    scanf("%lld%lld", &n, &s);
    forn(i, n) scanf("%lld", &a[i]);
    ll l = 1, r = n;
    while(l <= r) {
        ll mid = (l + r) / 2;
        if(pos(mid) <= s)
            l = mid + 1;
        else r = mid - 1;
    }

    printf("%lld %lld", l - 1, pos(l - 1));

    return 0;
}
