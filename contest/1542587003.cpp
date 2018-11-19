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

int N, K, P;
int T[16];

bool get() {
  if (T[0]) return true;
  REP(i,P)REP(j,i) if (T[i] && T[j] && !(i&j)) return true;

  return false;
  // REP(i,P) if (!(i&(i-1)) && T[i]) return false;
}

int main() {
  // ios_base::sync_with_stdio(0);

  scanf("%d%d", &N, &K);
  P = (1<<K);
  REP(i,N) {
    int a = 0;
    REP(j,K) {
      int b;
      scanf("%d", &b);
      a = (a<<1) + b;
    }
    ++T[a];
  }

  printf("%s\n", get() ? "YES" : "NO");
}
