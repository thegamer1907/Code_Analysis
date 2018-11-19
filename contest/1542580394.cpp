#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define mk make_pair
#define pb push_back
#define sz(a) (int)(a).size()
#define rep(i, a, b) for (int i = (a), _b = (b); i < _b; ++i)
#define frep(i, a, b) for (int i = (a), _b = (int)(b); i <= _b; ++i)

typedef complex<ld> cplex;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<ii> vii;
typedef vector<iii> viii;

const int inf = 1000000007;
const int N = 200 + 7;
const int M = 62;
const int multipleTest = 0;

string lhs[N], rhs[N], s[N];
set<string> all[N][M];
bool check[N];
bool has[N][M];
int n;

void solve() {
    cin >> n;
//    n = 100;
    frep(i, 1, n) {
        cin >> s[i];
        lhs[i] = rhs[i] = s[i];
        int m = s[i].size();
        frep(len, 1, min(m, M - 1)) {
            for (int j = 0; j + len <= m; ++j) {
                string cur = "";
                rep(t, 0, len) cur += s[i][j + t];
                all[i][len].insert(cur);
            }
            if (all[i][len].size() == 1ll << len) {
                has[i][len] = true;
            }
        }
        check[i] = false;
    }
    int m; cin >> m;
    for (int i = n + 1; i <= n + m; ++i) {
        int u, v; scanf("%d%d", &u, &v);
//        u = i - 1; v = i - 2;
        rep(len, 1, M) {
            if (has[u][len] || has[v][len]) {
                has[i][len] = 1;
                continue;
            }
            for (string x : all[u][len]) all[i][len].insert(x);
            for (string x : all[v][len]) all[i][len].insert(x);
        }
        string tmp = rhs[u] + lhs[v];
        frep(len, 1, min(sz(tmp), M - 1)) {
            for (int j = 0, qq = tmp.size(); j + len <= qq; ++j) {
                string cur = "";
                rep(t, 0, len) cur += tmp[j + t];
                all[i][len].insert(cur);
            }
        }
        int len = 1;
        ll tol = 2;
        while (len < M && (has[i][len] || all[i][len].size() == tol)) {
            has[i][len] = 1;
            ++len;
            tol *= 2;
        }
        
        cout << len - 1 << '\n';
        if (check[u] && check[v]) {
            lhs[i] = lhs[u];
            rhs[i] = rhs[v];
        } else {
            if (check[u]) {
                lhs[i] = lhs[u];
                rhs[i] = rhs[u] + rhs[v];
            } else {
                if (check[v]) {
                    rhs[i] = rhs[v];
                    lhs[i] = lhs[u] + lhs[v];
                } else {
                    lhs[i] = rhs[i] = lhs[u] + lhs[v];
                }
            }
        }
        
//        cout << lhs[i].size() << ' ' << rhs[i].size() << '\n';
        const int XXX = M;
        if (lhs[i].size() >= XXX && rhs[i].size() >= XXX) {
            check[i] = true;
            lhs[i] = lhs[i].substr(0, XXX);
            rhs[i] = rhs[i].substr(rhs[i].size() - XXX, XXX);
        }
    }
}

int main() {
#ifdef _LOCAL_
    freopen("in.txt", "r", stdin);
    //    freopen("out.txt", "w", stdout);
#endif
    int Test = 1;
    if (multipleTest) {
        cin >> Test;
    }
    for(int i = 0; i < Test; ++i) {
        solve();
    }
#ifdef _LOCAL_
    cout<<"\n" << 1.0 * clock() / CLOCKS_PER_SEC <<endl;
#endif
}
