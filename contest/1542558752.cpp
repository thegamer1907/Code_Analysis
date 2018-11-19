#include<bits/stdc++.h>
#define rep(i,k,n) for(ll i= (ll) k;i< (ll) n;i++)
#define all(v) (v).begin(), (v).end()
#define SZ(v) (int)((v).size())
#define pb push_back
#define ft first
#define sd second
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const long long INF = 4e18L + 1;
const int IINF = 2e9 + 1;

using namespace std;

template<class TH> void _dbg(const char *sdbg, TH h){ cerr<<sdbg<<'='<<h<<endl; }
template<class TH, class... TA> void _dbg(const char *sdbg, TH h, TA... a) {
  while(*sdbg!=',')cerr<<*sdbg++;cerr<<'='<<h<<','; _dbg(sdbg+1, a...);
}

#ifdef LOCAL
#define DBG(...) _dbg(#__VA_ARGS__, __VA_ARGS__)
#else
#define DBG(...) (__VA_ARGS__)
#define cerr if(0)cout
#endif

const int N = 50, M = 50;

vector<pair<int, int> > nei[N + 1];
int n, m, s;

bool visited[N + 1];

ll dp[M + 1][N + 1];

int st_v, full_c;
int dfs(int v, int T){
    /* DBG(v, T); */
    visited[v] = true;
    if(v != st_v and SZ(nei[v]) == 1){
        rep(i, 1, full_c + 1){
            if(dp[full_c - i][v] <= T){
                /* DBG(v, T, i); */
                return i;
            }
        }
        return M + 1;
    } else {
        int sm = 0;
        for(auto& wp : nei[v]){
            if(!visited[wp.ft]){
                int rec = dfs(wp.ft, T - wp.sd);
                if(!rec){
                    return 0;
                } else {
                    sm += rec - 1; 
                }    
            }
        }
        /* DBG(v, T, sm); */
        return sm + 1;
    }
}

bool chk(int c, int c1, int u, int v, int T){
    /* cerr << "CHECKING "; */
    /* DBG(c, c1, u, v, T); */
    /* cerr << endl << endl; */
    memset(visited, 0, (n + 1));
    visited[u] = true;
    if(u == 0){
        st_v = v;
    } else {
        st_v = 0;
    }
    full_c = c;
    return dfs(v, T) <= c1;
}

int get_val(int c, int c1, int u, int v){
    int start = -1, fin = N * N * N + 1;
    while(fin - start > 1){
        int mid = (start + fin) / 2;
        if(chk(c, c1, u, v, mid)){
            fin = mid;
        } else {
            start = mid;
        }
    }
    /* DBG(fin); */
    return fin;
}

int ter_cnt[N + 1];

void dfs_cnt(int v){
    visited[v] = true;
    for(auto& wp : nei[v]){
        if(!visited[wp.ft]){
            dfs_cnt(wp.ft);
            ter_cnt[v] += ter_cnt[wp.ft];
        }
    }
}

int main(){
#ifndef LOCAL
    ios_base::sync_with_stdio(0);
    cin.tie(0);
#endif
    cin >> n;
    rep(_, 0, n - 1){
        int u, v, w; cin >> u >> v >> w;
        nei[u].pb({v, w}); nei[v].pb({u, w});
    }
    cin >> s;
    cin >> m;
    rep(_, 0, m){
        int t1; cin >> t1;
        ter_cnt[t1]++;
    }
    dfs_cnt(s);
    rep(c, 1, m + 1){
        rep(v, 1, n + 1){
            if(SZ(nei[v]) == 1){
                dp[c][v] = get_val(c, c, 0, v);
                DBG(c, v, dp[c][v]);
            }
        }
    }

    int res = IINF;
    for(auto& wp : nei[s]){
        res = min(res, wp.sd + get_val(m, ter_cnt[wp.ft], s, wp.ft));
    }
    cout << res << "\n";
    return 0;
}
