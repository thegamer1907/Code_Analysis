#include <bits/stdc++.h>

#define IO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define f first
#define s second
#define sz(a) a.size()
#define mp make_pair
#define pb push_back
#define all(a) (a).begin(), (a).end()
using namespace std;

template<typename T1, typename T2> inline void chkmin(T1 & x, T2 y) {if (x > y) x = y;}
template<typename T1, typename T2> inline void chkmax(T1 & x, T2 y) {if (x < y) x = y;}

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

const int MAXN = 2e5 + 1;
ll dp[MAXN][3];

int main() {
    IO;
    // freopen("input.txt", "r", stdin);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    map<pair<ll, short>, ll> sump;
    ll ans = 0;
    for (int i = 0; i < n; ++i) {
        dp[i][0] = 1;
        for (int j = 1; j < 3; ++j) {
            if (a[i] % k) break;
            dp[i][j] = sump[{a[i] / k, j - 1}];
        }
        for (int j = 0; j < 3; ++j)
            sump[{a[i], j}] += dp[i][j];
        ans += dp[i][2];
    }
    cout << ans;
    return 0;
}