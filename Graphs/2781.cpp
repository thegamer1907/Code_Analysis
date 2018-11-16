/** Project Started ... **/
#include <bits/stdc++.h>
using namespace std;

/** +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ **/

#define ios                 ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define Time()              cerr << clock() * 1000 / CLOCKS_PER_SEC << "ms\n"
#define show(x)             cerr << #x << " = " << (x) << '\n'
#define pob                 pop_back
#define pb                  push_back
#define m_p                 make_pair
#define inf                 0x3f3f3f3f
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

clMAXN = 1024;
pii a[MAXN];
int n, m;
bool mark[MAXN];

/** +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ **/

int main(void) {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a[i].F >> a[i].S;
        mark[a[i].F] = mark[a[i].S] = true;
    }
    cout << n - 1 << '\n';
    for (int i = 1; i <= n; i++) {
        if (!mark[i]) {
            for (int j = 1; j <= n; j++) {
                if (j != i) {
                    cout << j << ' ' << i << '\n';
                }
            }
            return false;
        }
    }
}