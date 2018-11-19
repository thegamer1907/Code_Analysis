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

int main() {
  // ios_base::sync_with_stdio(0);

  int h,m,s,t1,t2;
  scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);

  vector<int> pos(5);
  pos[3] = ((t1 *= 2) %= 24);
  pos[4] = ((t2 *= 2) %= 24);

  pos[0] = 2 * (h % 12) + (m > 0 || s > 0);
  pos[1] = 2 * (m / 5) + (s > 0 || m % 5);
  pos[2] = 2 * (s / 5) + (s > 0);

  sort(pos.begin(), pos.end());

  bool ok = false;
  REP(i,5) ok = ok || (pos[i] == t1 && (pos[(i+1)%5] == t2));
  reverse(pos.begin(), pos.end());
  REP(i,5) ok = ok || (pos[i] == t1 && (pos[(i+1)%5] == t2));
  printf("%s\n", ok ? "YES" : "NO");
}
