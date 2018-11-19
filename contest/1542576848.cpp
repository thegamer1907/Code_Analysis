#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <cmath>

using namespace std;

typedef int INT;
typedef long long ll;
typedef long double lld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

#define mp(a,b) make_pair(a,b)
#define pb(x) push_back(x)
#define left lef1093i13jfjdsjfd2139371024
#define right regi213t4328789236437297483779299234

/*
const bool operator < (const Item &v1, const Item &v2) {
	return 0;
}
*/


void re() {
    vector<int> b(1e10); // it must give RE
}

struct edge {
    ll u, v, w;
    ll getto(ll vv) {
        if (vv == v) return u;
        return v;
    }
};

const int N = 52;
const ll INF = 1e18;
ll n, m, s;
vector<edge> e;
vector<int> g[N];

void add_edge(int u, int v, int w) {
    edge ed = {u,v,w};
    g[u].pb(e.size());
    g[v].pb(e.size());
    e.pb(ed);
}

ll maindp[N][N][N][N]; // par, vert, cnt, all == ans;
char didmain[N][N][N][N];
int tmp_cnt[N];
 // i, knapsack, == max(min)

void cnt_dfs(int v, int par) {
    //cout << "v = " << v << endl;
    //cout << "par = " << par << endl;
    for (int id : g[v]) {
        int to = e[id].getto(v);
        if (to == par) continue;
        cnt_dfs(to, v);
        tmp_cnt[v] += tmp_cnt[to];
    }
}

ll dfs(int v, int par, int cnt, int cnt_all) {

/*
    cout << "v = " << v << endl;
    cout << "par = " << par << endl;
    cout << "cnt = " << cnt << endl;
    cout << "cnt_all = " << cnt_all << endl;
    cout << endl;
1 3 1 1
    */

    if (cnt_all == 0) return 0;
    if (didmain[v][par][cnt][cnt_all]) return maindp[v][par][cnt][cnt_all];
    if (g[v].size() == 1) {
        didmain[v][par][cnt][cnt_all] = 1;
        if (cnt_all == cnt) {
            maindp[v][par][cnt][cnt_all] = 0;
        } else {
            maindp[v][par][cnt][cnt_all] = dfs(par, v, cnt_all - cnt, cnt_all - cnt) + e[g[v][0]].w;
        }
        return maindp[v][par][cnt][cnt_all];
    }
    vector< vector<ll> > dp(2, vector<ll> (N, INF));

    int p = 0;
    int c = 1;
    bool first = true;
    for (int id : g[v]) {
        int to = e[id].getto(v);
        if (to == par) continue;
        if (first) {
            first = false;
            for (int i = 1; i <= cnt; ++i) {
                dp[p][i] = dfs(to, v, i, cnt_all) + e[id].w;
            }
            dp[p][0] = INF;
            continue;
        }
        for (int i = 0; i <= cnt; ++i) {
            dp[c][i] = dp[p][i];
        }
        for (int i = 1; i <= cnt; ++i) {
            for (int j = i; j > 0; --j) {
                ll cur = min(dp[p][i-j], dfs(to, v, j, cnt_all) + e[id].w);
                dp[c][i] = max(dp[c][i], cur);
            }
      //      cout << "dp[" << v << "][" << to << "][" << c << "][" << i << "] = " << dp[c][i] << endl;
        }
        swap(p,c);
    }
    //cout << endl << endl;
    if (didmain[v][par][cnt][cnt_all]) {
       //cout << "WRONGGG" << endl;
        //cout << "v = " << v << endl;
        //cout << "par = " << par << endl;
        //cout << "cnt = " << cnt << endl;
        //cout << "cnt_all = " << cnt_all << endl;
        re();
    }
    didmain[v][par][cnt][cnt_all] = 1;
    maindp[v][par][cnt][cnt_all] = dp[p][cnt];
    //cout << "maindp[" << v << "][" << par << "][" << cnt << "][" << cnt_all << "] = " << maindp[v][par][cnt][cnt_all] << endl;
    return maindp[v][par][cnt][cnt_all];
}

INT main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n - 1; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        add_edge(u, v, w);

    }

    cin >> s >> m;
    for (int i = 0; i < m; ++i) {
        int x;
        cin >> x;
        tmp_cnt[x]++;
    }
    cnt_dfs(s, -1);
    //cout << "CNT DID" << endl;
    if (n == 1) {

        cout << "0";
        return 0;
    }
    ll ans = INF;
    for (int id : g[s]) {
        int to = e[id].getto(s);
        ans = min(dfs(to, s, tmp_cnt[to], m) + e[id].w, ans);
    }
    cout << ans;
}
