#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
  #define pr_vars(...) do { cerr << "DEBUG: line "<< __LINE__ << ": " << __PRETTY_FUNCTION__ << ":  "; \
                            pr_var(split(#__VA_ARGS__, ',').begin(), __VA_ARGS__); } while(0)
#else
  __attribute__ ((constructor)) static void fast_cin() { ios_base::sync_with_stdio(false); cin.tie(0); }
  #define pr_vars(...) do { } while(0)
#endif /* ONLINE_JUDGE */

using ll = int64_t;
using ull = uint64_t;
using mp = pair<ll, ll>;
using mt = tuple<ll, ll, ll>;    // unpack: tie(ll, ll, ll) = mt;
#define X first
#define Y second
#define pb push_back

istream &operator>> (istream &fin, mp &p) { fin >> p.first >> p.second; return fin; }
ostream &operator<< (ostream &fout, const mp &p)
{ fout << "{" << p.first << ", " << p.second << "} "; return fout; }

template<typename T> ostream &operator<< (ostream &fout, const vector<T> &vec)
{ for (size_t i = 0; i < vec.size(); i++) fout << vec[i] << ' '; return fout; }

template<typename T> istream &operator>> (istream &fin, vector<T> &vec)
{ for (size_t i = 0; i < vec.size(); i++) fin >> vec[i]; return fin; }

vector<string> split(const string &s, char c) { vector<string> v; ull st = 0, fn = 0, lvl = 0;
for ( ; fn < s.size(); fn++ ) { if (s[fn] == c && lvl == 0) { v.push_back(s.substr(st, fn - st)); st = fn + 1; }
if (s[fn] == '(') { lvl++; } if (s[fn] == ')') { lvl--; } } v.push_back(s.substr(st, fn - st)); return v; }

void pr_var(vector<string>::iterator it) { (void) it; cerr << endl; }
template<typename T, typename... Args> void pr_var(vector<string>::iterator it, T a, Args... args)
{ cerr << *it << "=" << a << "  "; pr_var(++it, args...); }

ll div_ceil(ll n, ll d) { ll res = n / d; if (res >= 0) res += n % d ? 1 : 0; return res; }
ll gcd(ll a, ll b) { a = llabs(a); b = llabs(b); while (a && b) a > b ? a %= b : b %= a; return a + b; }
ll lcm(ll a, ll b) { ll c = gcd(a, b); return c == 0 ? 0 : llabs(a / c * b); }

#define setp(a) fixed << setprecision(a)
const double PI = acos(-1.0);
constexpr double EPS = 1e-9;
constexpr ll INF = numeric_limits<ll>::max();
constexpr ll MOD = 1e9 + 7;

constexpr ll MAX = 1e5 + 5;

int main()
{
    ll res = 0, t = INF;
    ll n; cin >> n;
    vector<ll> a(n); cin >> a;

    ll tt = 0;
    for (ll i = 0; i < n; i++) {
        a[i] -= tt;
        if (a[i] <= 0 && tt < t) {
            t = tt;
            res = i;
        } else {
            ll ttt = tt + div_ceil(a[i], n) * n;
            if (ttt < t) {
                t = ttt;
                res = i;
            }
        }
        tt++;
    }

    cout << res + 1 << endl;
    return 0;
}
