#include <bits/stdc++.h>
#define y0    lol
#define y1    lool
#define yn    loool
#define prev  looool
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)(x).size()
#define pcnt __builtin_popcountll
#define rep(i,a,b) for(int i = (a); i <= (b); i++)
#define rrep(i,a,b) for(int i = (b); i >= (a); i--)
#ifdef LOCAL
#define rall(x,a) for(x : a)
#else
#define rall(x,a) for(auto x : a)
#endif
#define rng(a) a.begin(), a.end()
#define PI 3.14159265358979323846
#define MOD 1000000007
#define endl "\n"
typedef long long ll;
using namespace std;

const int N = 111111;
int a[N];
int n;

signed main() {
    ios_base::sync_with_stdio(false);
    cin >> n;
    int ans = 0, cur = 0;
    int p = 0;
    rep(i, 1, n) {
        cin >> a[i];
        if(a[i] > p) {
            cur++;
        } else {
            cur = 1;
        }
        p = a[i];
        ans = max(ans, cur);
    }
    cout << ans << endl;
    return 0;
}
