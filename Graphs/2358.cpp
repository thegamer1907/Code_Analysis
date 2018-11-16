// darksta5's template v2.0

#include <bits/stdc++.h>
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define popb pop_back
#define del erase
#define sz size
#define ins insert
#define FOR(a,b,c) for(int a = b; a < c; a++)
#define FORS(a,b,c) for(int a = b; a <= c; a++)
#define FORN(a,b) for(int a = 0; a < b; a++)
#define FORD(a,b,c) for (int a = b; a >= c; a--)
#define RES(a,b) memset(a,b,sizeof(a))
#define LL long long
#define PI acos(-1)
#define eps 1e-9
#define MOD 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  vector<int> v[n];
  queue<pair<int, int>> q;
  FORN(i, n) {
    int x;
    cin >> x;
    if (x == -1) {
      q.push(mp(i, 1));
      continue;
    }

    v[x-1].pb(i);
  }

  int ans = 0;
  while (q.sz()) {
    pair<int, int> tmp = q.front();
    q.pop();

    ans = max(ans, tmp.se);

    FORN(i, v[tmp.fi].sz()) {
      q.push(mp(v[tmp.fi][i], tmp.se + 1));
    }
  }

  cout << ans << endl;
}