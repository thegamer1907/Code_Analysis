#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")
#include <bits/stdc++.h>

#define all(c) c.begin(),c.end()
#define ll long long
#define make_unique(x) sort(all((x))); (x).resize(unique(all((x))) - (x).begin())
#define mod 1000000007
#define PI 3.14159265
#define pll pair<ll, ll>
using namespace std;

typedef unsigned long long ull;

bool is_prime(ll n) {
    if (n <= 1) {
		return false;
	}
    for (ll i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                  return false;
            }
    }
    return true;
}

inline ll getPow(ll a,ll b){
    ll res = 1ll,tp = a;
    while (b){
       if (b&1ll) {
           res *= tp;
       }
       tp *= tp;
       b >>= 1ll;
    }
    return res;
}

ll coso(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3) {
    return abs((x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1));
}

inline ll nxt() {
    ll x;
    cin >> x;
    return x;
}

void ok() {
    puts("YES");
    exit(0);
}

void no() {
    puts("NO");
    exit(0);
}

ll xx[] = {-1, 1, 0, 0};
ll yy[] = {0, 0, -1, 1};

// please, accepted!
const ll N = 1000;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    double h = nxt() % 12 * 5, m = nxt(), s = nxt(), t1 = nxt() % 12 * 5, t2 = nxt() % 12 * 5;
    if(t2 < t1) swap(t1, t2);
    m += 1.0 * s / 60.0;
    h += 1.0 * m / 60.0;
    double a[3] = {h, m, s};
    bool up = true, down = true;
    for(int i = 0; i < 3; i++) {
           if(a[i] >= t1 && a[i] <= t2) down = false;
           if(a[i] >= t2 || a[i] <= t1) up = false;
    }
    if(up || down) {
          ok();
    }
    else no();
    return 0;
}
