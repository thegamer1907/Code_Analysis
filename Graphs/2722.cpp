// very important, much wow, such don't touch this
#define protected public
#define iii int
#define yeee iii

#ifdef LOCAL
const iii DEBUG = 10;
#else
const iii DEBUG = -1;
#endif
#define DBG(x) if(DEBUG >= x)

#include <bits/stdc++.h>
using namespace std;

#define FOR(i, lo, hi) for(ll i = ll(lo); i < ll(hi); ++i)
#define ROF(i, hi, lo) for(ll i = ll(hi); i >= (ll)(lo); --i)
#define all(x) (x).begin(), (x).end()
#define len(x) ll((x).size())
#define pb push_back
#define apply(f, x, y) (x) = f((x), (y))

// clang-format off
typedef long long ll; typedef unsigned long long ull; typedef long double ld; typedef pair<ll, ll> pll; typedef vector<bool> vb; typedef vector<vb> vvb; typedef vector<ll> vll; typedef vector<vll> vvll; typedef vector<pll> vpll;
typedef complex<ll> point;
template <class T> T get() { T x; cin >> x; return x; } template <class T1, class T2> ostream &operator<<(ostream &out, const pair<T1, T2> &cont) { out << "(" << cont.first << ", " << cont.second << ")"; return out; } template <class T> ostream &operator<<(ostream &out, const vector<T> &cont) { for(long long i=0; i < ll(cont.size()); ++i) out << (i ? " " : "") << cont[i]; return out; } template <class T> ostream &operator<<(ostream &out, const set<T> &cont) { out << "{"; for(const T &x : cont) out << x << ", "; out << "}"; return out; } template <class T, class U> ostream &operator<<(ostream &out, const map<T, U> &cont) { out << "{"; for(const pair<T, U> &x : cont) out << "(" << x.first << ": " << x.second << "), "; out << "}"; return out; }
void setup_io(string input_file = "", string output_file = "") { ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); srand(unsigned(time(0))); DBG(0 && input_file != "") freopen(input_file.c_str(), "r", stdin); DBG(0 && output_file != "") freopen(output_file.c_str(), "w", stdout); }
std::chrono::_V2::system_clock::time_point get_time() { return chrono::high_resolution_clock::now(); } ld get_duration(std::chrono::_V2::system_clock::time_point start_time, std::chrono::_V2::system_clock::time_point end_time) { return ld(chrono::duration_cast<chrono::nanoseconds>(end_time - start_time).count()) / 1e9; }
ll sign(ld x) { return (x > 0) - (x < 0); } ll pow(ll x, ll exp, ll mod) { ll res = 1, y = x; while(exp) { if(exp & 1) res = (res * y) % mod; y = (y * y) % mod; exp >>= 1; } return res; }
auto START_TIME = get_time(); const long long INF = LONG_LONG_MAX / 3;
// clang-format on

yeee main() {
    setup_io();
    //

    ll N, M;
    cin >> N >> M;

    vector<vpll> E(N);
    FOR(i, 0, M) {
        ll a, b, c;
        cin >> a >> b >> c;
        --a;
        --b;
        E[a].pb({b, c});
        E[b].pb({a, c});
    }

    vll                                     par(N, -1);
    priority_queue<vll, vvll, greater<vll>> q;
    q.push(vll{0, 0, 0});
    while(!q.empty()) {
        vll info = q.top();
        q.pop();
        ll dist = info[0], curr = info[1], prev = info[2];

        if(par[curr] != -1)
            continue;
        par[curr] = prev;

        for(pll p : E[curr]) {
            if(par[p.first] != -1)
                continue;
            q.push(vll{dist + p.second, p.first, curr});
        }
    }

    if(par[N - 1] == -1) {
        cout << -1 << endl;
        return 0;
    }

    vll res;
    ll  curr = N - 1;
    while(curr != 0) {
        res.pb(curr + 1);
        curr = par[curr];
    }
    res.pb(1);
    reverse(all(res));

    cout << res << endl;
}
