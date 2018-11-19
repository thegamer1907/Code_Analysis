#include <bits/stdc++.h>
using namespace std;

#define ms(s, n) memset(s, n, sizeof(s))
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); i--)
#define FORall(it, a) for (__typeof((a).begin()) it = (a).begin(); it != (a).end(); it++)
#define sz(a) int((a).size())
#define present(t, x) (t.find(x) != t.end())
#define all(a) (a).begin(), (a).end()
#define uni(a) (a).erase(unique(all(a)), (a).end())
#define pb push_back
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
const int MOD = (int) 1e9 + 7;
const int MOD2 = 1007681537;
const int INF = (int) 1e9;
const ll LINF = (ll) 1e18;
const ld PI = acos((ld) -1);
const ld EPS = 1e-12;
inline ll gcd(ll a, ll b) {ll r; while (b) {r = a % b; a = b; b = r;} return a;}
inline ll lcm(ll a, ll b) {return a / gcd(a, b) * b;}
inline ll fpow(ll n, ll k, int p = MOD) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}
template<class T> inline int chkmin(T& a, const T& val) {return val < a ? a = val, 1 : 0;}
template<class T> inline int chkmax(T& a, const T& val) {return a < val ? a = val, 1 : 0;}
inline ll isqrt(ll k) {ll r = sqrt(k) + 1; while (r * r > k) r--; return r;}
inline ll icbrt(ll k) {ll r = cbrt(k) + 1; while (r * r * r > k) r--; return r;}
inline void addmod(int& a, int val, int p = MOD) {if ((a = (a + val)) >= p) a -= p;}
inline void submod(int& a, int val, int p = MOD) {if ((a = (a - val)) < 0) a += p;}
inline int mult(int a, int b, int p = MOD) {return (ll) a * b % p;}
inline int inv(int a, int p = MOD) {return fpow(a, p - 2, p);}
inline int sign(ld x) {return x < -EPS ? -1 : x > +EPS;}
inline int sign(ld x, ld y) {return sign(x - y);}
#define db(x) cerr << #x << " = " << (x) << " ";
#define endln cerr << "\n";

const int maxn = 1000 + 5;
const int maxk = 20;
int n, m;
string s[maxn];
long long a[maxn];
map<string, int> prf[maxn][maxk];
map<string, int> suf[maxn][maxk];
map<string, int> com[maxn][maxk];

void solve() {
    cin >> n;
    FOR(i, 0, n) {
        cin >> s[i];
        a[i] = sz(s[i]);
        prf[i][0][""];
        suf[i][0][""];
        com[i][0][""];
        FOR(j, 1, maxk) if (j <= sz(s[i])) {
            prf[i][j][s[i].substr(0, j)];
            suf[i][j][s[i].substr(sz(s[i]) - j, j)];
        }
        FOR(j, 0, sz(s[i])) FOR(k, j, sz(s[i])) {
            if (k - j + 1 < maxk) {
                com[i][k - j + 1][s[i].substr(j, k - j + 1)];
            }
        }
    }
    cin >> m;
    FOR(i, 0, m) {
        int u, v; cin >> u >> v; u--, v--;
        a[n + i] = a[u] + a[v];
        chkmin(a[n + i], LINF);
        FOR(j, 0, maxk) {
            prf[n + i][j] = prf[u][j];
            suf[n + i][j] = suf[v][j];
        }
        FOR(j, 0, maxk) {
            FORall(it, com[u][j]) {
                com[n + i][j][it->fi];
            }
            FORall(it, com[v][j]) {
                com[n + i][j][it->fi];
            }
        }
        FOR(j, 0, maxk) FOR(k, 0, maxk - j) {
            FORall(it1, suf[u][j]) FORall(it2, prf[v][k]) {
                com[n + i][j + k][it1->fi + it2->fi];
                if (j == a[u]) {
                    prf[n + i][j + k][it1->fi + it2->fi];
                }
                if (k == a[v]) {
                    suf[n + i][j + k][it1->fi + it2->fi];
                }
            }
        }
        FORd(j, maxk, 0) if (sz(com[n + i][j]) == (1 << j)) {
            cout << j << "\n";
            break;
        }
    }
}

int main() {
    int JUDGE_ONLINE = 1;
    if (fopen("in.txt", "r")) {
        JUDGE_ONLINE = 0;
        assert(freopen("in.txt", "r", stdin));
        //assert(freopen("out.txt", "w", stdout));
    }
    else {
        ios_base::sync_with_stdio(0), cin.tie(0);
    }
    solve();
    if (!JUDGE_ONLINE) {
        //cout << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
    }
    return 0;
}
