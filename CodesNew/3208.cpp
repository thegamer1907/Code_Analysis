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
void debug(ostream &out, TF const &f) {
    out << f << std::endl;
}
 
template<typename TF, typename ... TR>
void debug(ostream &out, TF const &f, TR const& ... rest) {
    out << f << " ";
    debug( out, rest... );
}
 
#define DEBUG(...) debug(cerr, "[", #__VA_ARGS__, "]:", __VA_ARGS__)

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
const int MAX = 1e5;

int N, M, prep[MAX+5];
vi day[MAX+5];
set<int> avail;

void read() {
    cin >> N >> M;
    FOR(i,1,N) {
        int x; cin >> x;
        day[x].pb(i);
    }
    FOR(i,1,M) cin >> prep[i];
}

bool check(int k) {
    avail.clear();
    FOR(i,1,N) avail.insert(avail.end(), i);

    FOR(i,1,M) {
        bool flag = false;

        FORD(j,sz(day[i])-1,0) {
            if (day[i][j] <= k) {
                int c = prep[i] + 1;
                auto it2 = avail.upper_bound(day[i][j]);
                auto it1 = it2;

                while (c--) {
                    if (it1 == avail.begin()) return false;
                    it1--;
                }

                avail.erase(it1, it2);
                flag = true;
                break;
            }
        }

        if (!flag) return false;
    }

    return true;
}

void solve() {
    int l = 0, r = N + 1;
    while (l + 1 < r) {
        int m = (l + r + 1) / 2;
        // DEBUG(l, r, m, check(m));
        if (check(m)) r = m;
        else l = m;
    }

    if (r > N) cout << "-1\n";
    else cout << r << "\n";
}

int main() {
    FAST_IO;
    int TC = 1;
    FOR(tc, 1, TC) {
        read();
        solve();
    }
}