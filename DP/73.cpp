#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)(x).size()
#define pcnt __builtin_popcountll
#define rep(i,a,b) for(int i = (a); i <= (b); i++)
#define rrep(i,a,b) for(int i = (b); i >= (a); i--)
#ifdef LOCAL
#define rall(x,a) for(x : a)
#define LL "%lld"
#else
#define rall(x,a) for(auto x : a)
#define LL "%I64d"
#define y0    oooo
#define y1    ooox
#define yn    ooxo
#define prev  ooxx
#define next  oxoo
#define read  oxox
#define tm    oxxo
#endif
#define rng(a) a.begin(), a.end()
#define PI 3.14159265358979323846
#define MOD 1000000007
#define endl "\n"
typedef long long ll;
using namespace std;

const int N = 111;
int a[N], b[N];
int n, m;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    rep(i, 1, n) {
        int x;
        cin >> x;
        a[x]++;
    }
    cin >> m;
    rep(i, 1, m) {
        int x;
        cin >> x;
        b[x]++;
    }
    int ans = 0;
    rep(i, 1, 100) {
        rep(j, i - 1, i + 1) {
            int cur = min(a[i], b[j]);
            a[i] -= cur;
            b[j] -= cur;
            ans += cur;
        }
    }
    cout << ans << endl;
    return 0;
}
