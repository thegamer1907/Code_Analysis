// It was the best of times,
// it was the worst of times,
// it was the age of wisdom,
// it was the age of foolishness ...
#include <bits/stdc++.h>
using namespace std;

/** +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ **/

#define ios                 ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define Time()              cerr << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
#define show(x)             cerr << #x << " = " << (x) << '\n'
#define pob                 pop_back
#define pb                  push_back
#define m_p                 make_pair
#define inf                 1e14
#define clMAXN              constexpr int MAXN
#define F                   first
#define S                   second

/** +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ **/

typedef long long                       ll;
typedef long double                     ld;
typedef long long int                   lli;
typedef pair<int, int>                  pii;
typedef unsigned long long int          ull;

/** +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ **/

template<typename T, typename L> inline bool smax(T &x, L y) { return x < y ? (x = y, true) : false; }
template<typename T, typename L> inline bool smin(T &x, L y) { return y < x ? (x = y, true) : false; }

/** +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ **/

clMAXN = (1 << 18);
int a[MAXN][18];
map<string, int> mp;
int n, m, k = 2;
set<string> st;
string s[MAXN];
int cnt[32];

/** +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ **/

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string rel = "";
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            s[i] = to_string(a[i][j]);
            rel += s[i];
        }
        mp[rel] += 1;
        st.insert(rel);
    }
    string rex = "";
    for (int i = 0; i < m; i++)
        rex = rex + '0';
    if (st.count(rex))
        return cout << "YES\n", false;
    for (int mask = 0; mask < (1 << (m << 1)); mask++) {
        string d = "";
        int rel = mask;
        while (rel) {
            d = d + to_string(rel & 1);
            rel >>= 1;
        }
        reverse(d.begin(), d.end());
        while (d.size() < (m << 1)) {
            d = '0' + d;
        }
        string dd = "";
        bool can = true;
        map<string, int> cc;
        cc.clear();
        for (int i = 0; i < k; i++) {
            dd = d.substr(i * m, m);
            cc[dd] += 1;
        }
        for (int i = 0; i < k; i++) {
            dd = d.substr(i * m, m);
            if (cc[dd] > mp[dd]) {
                can = false;
            }
        }
        if (can) {
            memset(cnt, false, sizeof cnt);
            for (int i = 0; i < k; i++) {
                for (int j = 0; j < m; j++) {
                    string l = d.substr(i * m, m);
                    cnt[j] += (l[j] == '1' ? 1 : 0);
                }
            }
            for (int i = 0; i < m; i++) {
                if (cnt[i] > (k >> 1)) {
                    can = false;
                }
            }
            if (can) {
                return cout << "YES\n", false;
            }
        }
    }
    return cout << "NO\n", false;
}