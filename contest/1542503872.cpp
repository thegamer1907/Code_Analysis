//
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef double dbl;
typedef long double ldbl;
typedef pair<dbl,dbl> P;

#define FOR(i, init, n) for(int i = init; i < (n); i++)
#define pb push_back

// from codeforces
#define what_is(x) cerr << #x << " is " << x << endl;
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define time__(d) for(long blockTime = 0; (blockTime == 0 ? (blockTime=clock()) != 0 : false); debug("%s time : %.4fs", d, (double)(clock() - blockTime) / CLOCKS_PER_SEC))

ll mod = 1e9+7;

int h, m, s, t1, t2, conditions_satisfied;

int main(){
  // fast I/O
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> h >> m >> s >> t1 >> t2;
  if (h == 12) h = 0;
  if (t1 == 12) t1 = 0;
  if (t2 == 12) t2 = 0;
  m /= 5;
  s /= 5;

  if (t1 > t2) swap(t1,t2);

  if (t1 <= h && h < t2) conditions_satisfied++;
  if (t1 <= m && m < t2) conditions_satisfied++;
  if (t1 <= s && s < t2) conditions_satisfied++;

  if (conditions_satisfied == 0 || conditions_satisfied == 3) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}
// notes
//
