#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define sz(s) (int)s.size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i,n) for(int i=0;i<(int)n;i++)
#define for1(i,n) for(int i=1;i<=(int)n;i++)
#define ford(i, b, a) for (int i = (int)(b); i >= a; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
const ll N = (ll)1e5+77;
const ll inf = (ll) 1e16+7;
const int mod = (int) 1e9 + 7;
const ld pi = acos(-1);

int n,k,a,b;
int dp[N];

int main() {
    int t;
    scanf("%d%d", &t, &k);
    forn(i, k) dp[i] = 1;
    fore(i, k, N - 77) {
        dp[i] = dp[i - k] + dp[i - 1];
        dp[i] %= mod;
    }
    for1(i, N - 77) dp[i] += dp[i - 1], dp[i] %= mod;
    for1(i, t) {
        scanf("%d%d", &a, &b);
        printf("%d\n", (dp[b] - dp[a - 1] + mod) % mod);
    }
    return 0;
}