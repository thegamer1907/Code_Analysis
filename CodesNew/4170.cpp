#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); \
                cin.tie(0); \
                cout.tie(0)
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define all(_v)             _v.begin(), _v.end()
#define sz(_v)              (int) _v.size()
#define first(_obj)         (*_obj.begin())
#define last(_obj)          (*prev(_obj.end()))
#define FIND(_obj, _val)    (_obj.find(_val) != _obj.end())
#define RESET(_a, _v)       fill_n(_a,sizeof(_a)/sizeof(_a[0]),_v)
#define REP(_i, _n)         for (int _i = 0; _i < (int) _n; _i++)
#define FOR(_i, _a, _b)     for (int _i = (int) _a; _i <= (int) _b; _i++)
#define FORD(_i, _a, _b)    for (int _i = (int) _a; _i >= (int) _b; _i--)
#define FORIT(_it, _obj)    for (auto _it = _obj.begin(); _it != _obj.end(); _it++)

// DEBUG UTIL
template<typename TF>
void write_debug_output(ostream &out, TF const &f) {
    out << f << std::endl;
}
 
template<typename TF, typename ... TR>
void write_debug_output(ostream &out, TF const &f, TR const& ... rest) {
    out << f << " ";
    write_debug_output( out, rest... );
}
 
#define DEBUG(...) write_debug_output(cerr, ">", __LINE__, ":", __VA_ARGS__)

using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using pdd = pair<double,double>;
using vi = vector<int>;
using vii = vector<pii>;
using vll = vector<ll>;
using vs = vector<string>;

const int DR[] = {-1, 0, 1, 0, -1, 1, 1, -1}; // ccw
const int DC[] = {0, -1, 0, 1, -1, -1, 1, 1};
const double PI = acos(-1.0);
const double EPS = 1e-9;
const int MOD = 1e9 + 7;
const int INF = 1073741823;
const ll INFLL = 4e18;
const int MAX = 2e5;

int N, Q;
ll power[MAX+5], k[MAX+5];

void read() {
    cin >> N >> Q;
    REP(i,N) cin >> power[i];
    REP(i,Q) cin >> k[i];
    FOR(i,1,N-1) power[i] += power[i-1];
}

int get(int ptr, int i) {
    ll t = k[i];
    int l = ptr, r = N;

    REP(loop,20) {
        int mid = (l + r) / 2;
        ll check = power[mid] - (ptr == 0 ? 0 : power[ptr - 1]);

        if (check == t) return mid + 1;
        else if (check < t) l = mid;
        else r = mid;
        // DEBUG(l, r, mid, check);
    }

    if (r < N) {
        ll used = l < r ? power[l] - (ptr == 0 ? 0 : power[ptr - 1]) : 0;
        ll rem = t - used;
        k[i + 1] += rem;
        // DEBUG(l, r, rem);
    }
    
    return r;
}

void solve() {
    int now = 0; // last soldier still alive

    REP(i,Q) {
        now = get(now, i);
        if (now == N) now = 0;
        cout << N - now << "\n";
        // DEBUG(now, k[i], k[i+1]);
    }
}

int main() {
    FAST_IO;
    int TC = 1;
    FOR(tc, 1, TC) {
        read();
        solve();
    }
}