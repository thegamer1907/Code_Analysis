#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false);cin.tie(0); cout.tie(0)
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for(int i = (int)a; i <= (int)b; ++i)
#define sz(s) (int)s.size()
#define all(v) v.begin(),v.end()
#define rall(x) (x).rbegin(), (x).rend()

typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> pll;
const ll inf = (ll)1e14;
const ll N = (ll)2e5+77;
const ll mod = (ll)1e9+7;

ll n,m,k,x,y;
ll a[N];
string t;
string s[N];

int main() {
    fast;
    cin >> t;
    cin >> n;
    forn(i, n) cin >> s[i];
    forn(i, n) {
        forn(j, n) {
            string x = s[i] + s[j];
            forn(k, sz(x) - 1) {
                if (x[k] == t[0] and x[k + 1] == t[1]) return cout << "YES\n", 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}