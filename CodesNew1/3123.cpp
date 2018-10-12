#include <bits/stdc++.h>

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
//#define rank rank228
//#define prev prev228
#define y1 y1228
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
const int nmax = 1e6 + 77;
const ll basell = 1e18 + 3;
const int mod = 1e9 + 7;
const ld eps = 1e-7;
const int inf = 1009000999;
const int nv = 100505;
const int baseint = 1000200013;
const ld PI = acos(-1.0);
inline bool EQ(ld a, ld b) { return fabs(a-b) < 1e-9; }
//typedef pair<int, int> pt;
//#define x first
//#define y second
//ifstream cin("input.txt");
//ofstream cout("output.txt");
//cout << fixed << setprecision(15);
/*
sort(a, a + n, [&](pair<pt, int> a, pair<pt, int> b){if (a.x.x != b.x.x)
        return a.x.x < b.x.x; return a.x.y > b.x.y;});
for(int c : s)
for (int &i : a) cin >> i;
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

int a[3 * nv];

int b[3 * nv];

int be[3 * nv];

int c[3 * nv];

int h = 0;

int inline solve() {
    //input;output;
    //fix;
    fast_io;
    int n, k;
    cin >> n >> k;
    int last = -1;
    int m = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] == 1){
            if(last == -1){
                b[i] = i;
                last = i;
                be[last] = 1;
                m = max(m, 1);
            }else{
                be[last]++;
                m = max(m, be[last]);
                b[i] = last;
            }
        }else{
            last = -1;
            c[h++] = i;
        }
    }
    int ans = 0, x = -2, y = -2;
    k--;
    for (int j = 0; j < h && k != -1; ++j) {
        int sum = 0;
        if(j + k < h){
            sum += c[j + k] - c[j] + 1;
            if(c[j + k] + 1 < n && a[c[j + k] + 1] == 1){
                sum += be[c[j + k] + 1];
            }
        }else{
            sum += n - c[j];
        }
        if(c[j] != 0 && a[c[j] - 1] == 1){
            sum += be[b[c[j] - 1]];
        }
        if(sum > ans){
            ans = sum;
            x = c[j];
            if(j + k < h){
                y = c[j + k];
            }else{
                y = n;
            }
        }
    }
    cout << max(ans, m) << '\n';
    for (int i = 0; i < n; ++i) {
        if(x <= i && y >= i){
            cout << "1 ";
        }else{
            cout << a[i] << " ";
        }
    }
    return 0;
}
int32_t main() {
    //freopen("mushrooms.in", "r", stdin);
    //freopen("mushrooms.out", "w", stdout);
    solve();
    return 0;
}
/*
4
4 3 5
4 5 2
3 2 1
5 4 1

 * */