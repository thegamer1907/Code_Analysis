//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,tune=native")
//#pragma GCC optimize("unroll-loops")
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <random>

#define all(x) begin(x), end(x)
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define mp make_pair
#define input freopen("input.txt","r",stdin);
#define output freopen("output.txt","w",stdout);
#define fast_io ios::sync_with_stdio(NULL), cin.tie(NULL), cout.tie(NULL);
#define fix cout << fixed << setprecision(15);
//#define left left228
//#define right right228
//#define next next228
#define rank rank228
//#define prev prev228
#define y1 y1228
#define dout if(debug) cout
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int> ;
using pll = pair<ll, ll>;
using pci = pair<char, int>;
using vi = vector<int> ;
using vll = vector<ll> ;
using vpii = vector<pii> ;
const ll infll = 1e18 + 3;
const int maxn = 1e6 + 77;
const int nmax = 1e6 + 577;
const ll basell = 1e18 + 3;
//const int mod = 1e9 + 7;
const ld eps = 1e-7;
const int inf = 1009000999;
const int nv = 100505;
const int baseint = 1000200013;
const ld PI = acos(-1.0);
inline bool EQ(ld a, ld b) { return fabs(a-b) < 1e-9; }
inline bool IF(int a, int b, int c) { return (a >= b && a <= c); }
inline bool IFS(int a, int b, int c) { return (a > b && a < c); }
template<typename T> inline istream &operator>> (istream &_in, vector<T> &_v) { for (auto &_i : _v) { _in >> _i; } return _in; }
//mt19937 rnd(chrono::high_resolution_clock::now().time_since_epoch().count());
//typedef pair<int, int> pt;
//#define x first
//#define y second
//ifstream cin("input.txt");
//ofstream cout("output.txt");
/*
sort(a, a + n, [&](pair<pt, int> a, pair<pt, int> b){if (a.x.x != b.x.x)
        return a.x.x < b.x.x; return a.x.y > b.x.y;});
for(int c : s)
for(int &i : a) cin >> i;
for(int c = 'a'; c <= 'z'; ++c)
vector<vector<ll>> dp(n, vector<ll>(n+2));
__int128;
char 0 = int 48;
char c = cin;
int h = (int)c - 48;
*/

/*char memory[(int)1e8];

char memorypos;

inline void * operator new(size_t n){
    char * ret = memory + memorypos;
    memorypos += n;
    return (void *)ret;
}

inline void operator delete(void *){}
*/

ll a[nv];

int inline solve() {
    //input;output;
    //fix;
    //fast_io;
    ll n, k;
    int m;
    cin >> n >> m >> k;
    ll ex = 0, ans = 1, st = 0;
    for (int i = 0; i < m; ++i) {
        cin >> a[i];
    }
    sort(a, a + m);
    int j = 0;
    while(j < m) {
        if(k < a[j] - st && ex == 0) st = (((a[j] - st - 1) / k) * k) + st;
        if(k >= a[j] - st) {
            ex++;
            j++;
        } else {
            ans++;
            st += ex;
            ex = 0;
        }
        //cout << ex << " " << ans << " " << st << " " << '\n';
    }
    cout << ans;
    //b = ((a[j] - st) / k) * k
    //a = a[j] - st
    //l = a - b
    //st = a[j] - l
    //st = a[j] - (a - b)
    //st = a[j] - ((a[j] - st) - (((a[j] - st) / k) * k));
    //
    return 0;
}

int32_t main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    solve();
    return 0;
}
/*
16 7 5
2 3 4 5 6 15 16
 * */