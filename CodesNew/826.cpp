#include <bits/stdc++.h>

using namespace std;

#define long long long
#define double __float128
#define INF (long) 1e18
#define MOD ((long) 1e9 + 7)
#define mll map<long, long>
#define pll pair<long, long>
#define umap unordered_map
#define umll umap<long, long>
#define pb push_back
#define FOR(i, a, b) \
  for (long i = a; i < (long) b; i++)
#define SORT(v, atr) \
  sort(v.begin(), v.end(), \
    [](auto &a, auto &b) { return a.atr < b.atr; });
#define UNSORT(v, atr) \
  sort(v.begin(), v.end(), \
    [](auto &a, auto &b) { return a.atr > b.atr; });
#define PRINTV(v) \
  FOR (_i, 0, v.size()) \
    cout << v[_i] << " "; \
  cout << "\n";

set<long> gera_primos(long n)
{
  set<long> primos;
  vector<bool> crivo(n+1);
  primos.insert(2);
  for (long i = 3; i <= n; i += 2) {
    if (crivo[i]) continue;
    primos.insert(i);
    for (long j = i; j <= n; j += i) {
      crivo[j] = true;
    }
  }
  return primos;
}

struct Link
{
  long from, to, t;
};

struct Node
{
  bool visitado = false;
  bool cor = false;
  vector<Link> in, out;
};

int main()
{
  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

  long n, m;
  cin >> n >> m;

  set<string> poland, enemy, both;
  FOR (i, 0, n) {
    string x;
    cin >> x;
    poland.insert(x);
  }
  FOR (i, 0, m) {
    string x;
    cin >> x;
    enemy.insert(x);
    if (poland.count(x)) both.insert(x);
  }
  bool p = true;
  long cp, ce, cb;
  cp = poland.size();
  ce = enemy.size();
  cb = both.size();
  while (true) {
    if (p) {
      if (cp == 0) {
        puts("NO");
        return 0;
      }
      if (cb > 0) {
        cb--;
        ce--;
      }
      cp--;
    } else {
      if (ce == 0) {
        puts("YES");
        return 0;
      }
      if (cb > 0) {
        cb--;
        cp--;
      }
      ce--;
    }
    p = not p;
  }
}
