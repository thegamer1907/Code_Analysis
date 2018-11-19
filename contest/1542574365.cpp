#include <bits/stdc++.h>
// #pragma GCC optimize ("O3")
// #pragma GCC target ("sse4")
using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int,int> PII;

#define REP(i,n) for(int i=0;i<(n);++i)
#define FOR(i,a,b) for (int i=(a); i<(b); ++i)
#define FORD(i,a,b) for (int i=(a)-1; i>=(b); --i)

#define pb push_back
#define mp make_pair
#define st first
#define nd second

const int MOD = 1000000007;

int N;
vector<PII> adj[100];
int D[100][100];
vector<int> leaves;

int DP[100][100];
int get(int r, int m) {
  if (DP[r][m] > -1) return DP[r][m];
  if (m == 0) return 0;

  int t = 0;
  for (int v: leaves) if (v != r) FOR(used,1,m+1) {
    int forced_time = D[r][v] + get(v, m-used);

    int total_used = used;
    for (int u: leaves) if (u != r && u != v) {
      int used_u = 0;
      while (used_u < m && D[r][u] + get(u, m-used_u-1) >= forced_time)
        ++used_u;
      total_used += used_u;
      if (total_used >= m) break;
    }
    if (total_used >= m) {
      t = max(t, forced_time);
      break;
    }
  }

  return DP[r][m] = t;
}

int original_count[100];
int sec_gen[100];
int in_sec_gen[100];

void compute_sec_gen(int v, int p, int s) {
  sec_gen[v] = s;
  in_sec_gen[s] += original_count[v];
  for (auto pp: adj[v]) if (pp.st != p) compute_sec_gen(pp.st, v, s);
}

int m, s;
int tmp[100], tmp2[100];
int first_move() {
  int t = 0;
  for (int v: leaves) if (v != s) FOR(used,1,in_sec_gen[sec_gen[v]]+1) {
    REP(i,N) tmp[i] = tmp2[i] = 0;

    tmp[v] = used;
    int forced_time = D[v][s] + get(v, m-used);
    for (int u: leaves) if (u != s && u != v) {
      tmp[u] = 0;
      while (tmp[u] < in_sec_gen[sec_gen[u]] &&
              D[u][s] + get(u, m-tmp[u]-1) >= forced_time)
        ++tmp[u];
    }
    REP(i,N) tmp2[sec_gen[i]] += tmp[i];
    bool ok = true;
    REP(i,N) ok = ok && tmp2[i] >= in_sec_gen[i];
    if (ok) t = max(t, forced_time);
  }

  return t;
}

int main() {
  // ios_base::sync_with_stdio(0);

  scanf("%d", &N);
  REP(i,N)REP(j,N) D[i][j] = 1e9;
  REP(i,N) D[i][i] = 0;

  REP(i,N-1) {
    int u, v, w;
    scanf("%d%d%d", &u, &v, &w);
    --u, --v;
    adj[u].pb({v,w});
    adj[v].pb({u,w});
    D[u][v] = D[v][u] = w;
  }
  REP(k,N)REP(i,N)REP(j,N) D[i][j] = min(D[i][j], D[i][k] + D[k][j]);

  REP(i,N) if (adj[i].size() == 1) leaves.pb(i);

  scanf("%d", &s);
  --s;
  scanf("%d", &m);
  REP(i,m) {
    int a;
    scanf("%d", &a);
    original_count[--a]++;
  }

  for (auto p: adj[s]) {
    compute_sec_gen(p.st, s, p.st);
  }

  REP(i,100)REP(j,100) DP[i][j] = -1;
  int result = first_move();
  printf("%d\n", result);
}
