// clang-format off
// very important, much wow, such don't touch this
#define protected public
using iii = int; using yeee = iii;

#ifdef LOCAL
    const iii DEBUG = 10;
#else
    const iii DEBUG = -1;
#endif
#define DBG(x) if(DEBUG >= x)

#include <bits/stdc++.h>
using namespace std;

#if 0
    #include <ext/pb_ds/assoc_container.hpp>
    #include <ext/pb_ds/detail/standard_policies.hpp>
    using namespace __gnu_pbds;
    template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
    template<class T, class U> using hash_map = gp_hash_table<T, U>;
#endif

#define FOR(i, lo, hi) for(ll i = ll(lo); i < ll(hi); ++i)
#define ROF(i, hi, lo) for(ll i = ll(hi); i >= (ll)(lo); --i)
#define all(x) (x).begin(), (x).end()
#define len(x) ll((x).size())
#define pb push_back
#define apply(f, x, y) (x) = f((x), (y))

using ll = long long; using ull = unsigned long long; using ld = long double; using pll = pair<ll, ll>; using vb = vector<bool>; using vvb = vector<vb>; using vll = vector<ll>; using vvll = vector<vll>; using vpll = vector<pll>; using point = complex<ll>; /*|||*/ template <class T> T get() { T x; cin >> x; return x; } template <class T1, class T2> ostream &operator<<(ostream &out, const pair<T1, T2> &cont) { out << "(" << cont.first << ", " << cont.second << ")"; return out; } template <class T> ostream &operator<<(ostream &out, const vector<T> &cont) { for(long long int i=0; i < (long long int)(cont.size()); ++i) out << (i ? " " : "") << cont[i]; return out; } template <class T> ostream &operator<<(ostream &out, const set<T> &cont) { out << "{"; for(const T &x : cont) out << x << ", "; out << "}"; return out; } template <class T, class U> ostream &operator<<(ostream &out, const map<T, U> &cont) { out << "{"; for(const pair<T, U> &x : cont) out << "(" << x.first << ": " << x.second << "), "; out << "}"; return out; } template <class T> ostream &operator<<(ostream &out, vector<vector<T>> &cont) { for(vector<T> &v : cont) { for(long long int i = 0; i < (long long int)(v.size()); ++i) { out << (i ? " " : "") << v[i]; } out << "\n"; } return out; } /*|||*/ void setup_io(string input_file = "", string output_file = "") { ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); srand(unsigned(time(0))); DBG(0 && input_file != "") freopen(input_file.c_str(), "r", stdin); DBG(0 && output_file != "") freopen(output_file.c_str(), "w", stdout); } /*|||*/ std::chrono::_V2::system_clock::time_point get_time() { return chrono::high_resolution_clock::now(); } ld get_duration(std::chrono::_V2::system_clock::time_point start_time, std::chrono::_V2::system_clock::time_point end_time) { return ld(chrono::duration_cast<chrono::nanoseconds>(end_time - start_time).count()) / 1e9; } /*|||*/ ll sign(ld x) { return (x > 0) - (x < 0); } ll pow(ll x, ll exp, ll mod) { ll res = 1, y = x; while(exp) { if(exp & 1) res = (res * y) % mod; y = (y * y) % mod; exp >>= 1; } return res; } /*|||*/ auto START_TIME = get_time(); const long long INF = LONG_LONG_MAX / 3; char newl = '\n';
// clang-format on

yeee main() {
    setup_io();
    //

    ll N, M;
    cin >> N >> M;

    vvll E(N);
    FOR(i, 0, M) {
        ll a, b;
        cin >> a >> b;
        --a, --b;
        E[a].pb(b);
    }

    ll res = 0;
    FOR(start, 0, N) {
        vvll nex(3);
        nex[0].pb(start);
        FOR(l, 0, len(nex) - 1) {
            for(ll a : nex[l]) {
                for(ll b : E[a]) {
                    nex[l + 1].pb(b);
                }
            }
        }

        vll seen(N, 0);
        for(ll x : nex.back())
            seen[x]++;

        FOR(i, 0, N) {
            if(i == start)
                continue;
            res += (seen[i]) * (seen[i] - 1) / 2;
        }
    }

    cout << res << endl;
}
