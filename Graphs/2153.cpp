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

bool is_prime(int n) {

    for (int i = 2; i * i <= n; ++i) {
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
           res %= mod;
       }
       tp *= tp;
       tp %= mod;
       b >>= 1ll;
    }
    return res;
}

double coso(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3) {
    return abs((x2-x1)*(y3-y1) - (y2-y1)*(x3-x1));
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

const int N=1e5+3;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    ll n = nxt(), m = nxt();
    ll ans = 0ll;
    if(n >= m) {
        ans += n - m;
    }
    else {
        vector<ll> dp(1e5, LONG_MAX);
        dp[n] = 0;
        for(int i = 1; i < n; i++) {
               dp[i] = n - i;
               ll ind = i * 2;

        }
        for(int i = 1; i < n; i++) {
               ll ind = i * 2;
               if(ind <= 1e5) {
                    dp[ind] = min(dp[i] + 1, dp[ind]);
               }
        }
        for(int i = n + 1; i <= 1e5; i++) {
               if(i % 2 == 0) {
                     dp[i] = min(dp[i], dp[i / 2] + 1);
                     dp[i - 1] = min(dp[i - 1], dp[i] + 1);
               }
        }
        ans = dp[m];
    }
    cout << ans;

    return 0;
}