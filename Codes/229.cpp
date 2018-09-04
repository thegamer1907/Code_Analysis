#include <bits/stdc++.h>

using namespace std;

#define long long long
#define INF (long) 1e18
#define MOD ((long) 1e9 + 7)
#define mll map<long, long>
#define pll pair<long, long>
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
    printf("%lld ", v[_i]); \
  printf("\n");

set<long> gera_primos(long n)
{
  set<long> primos;
  vector<bool> crivo(n);
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
  long from, to, cost;
};

struct Node
{
  bool visitado = false;
  long dist;
  vector<long> in, out;
};

int main()
{
  //ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

  long n;
  cin >> n;

  vector<long> a(n);
  mll d;
  d[1] = 1;
  long last = 1;
  FOR (i, 0, n) {
    cin >> a[i];
    if (i > 0) {
      long x = last + a[i-1];
      d[x] = i+1;
      last = x;
    }
  }

  long m;
  cin >> m;

  while (m--) {
    long x;
    cin >> x;
    auto it = d.upper_bound(x);
    it--;
    long y = it->second;
    printf("%lld\n", y);
  }
}
