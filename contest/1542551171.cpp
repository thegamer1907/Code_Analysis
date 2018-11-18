#include <bits/stdc++.h>

using namespace std;

#define long long long
#define INF (long) 1e18
#define MOD 998'244'353
#define pll pair<long, long>
#define pb push_back
#define FOR(i, a, b) \
    for (long i = a; i < (long) b; i++)
#define REP(i, n) FOR(i, 0, n)
#define SORT(v, atr) \
    sort(v.begin(), v.end(), \
      [](auto &a, auto &b) { return a.atr < b.atr; });
#define UNSORT(v, atr) \
    sort(v.begin(), v.end(), \
      [](auto &a, auto &b) { return a.atr > b.atr; });
#define PRINTV(v) \
    if (not v.empty()) { \
        printf("%lld", v[0]); \
        for (long _i = 1; _i < (long) v.size(); _i++) \
            printf(" %lld", v[_i]); \
        printf("\n"); \
    }

auto gera_primos(long n)
{
  set<long> primos;
  vector<bool> crivo(n);
  primos.insert(1);
  primos.insert(2);
  for (long i = 3; i < n; i += 2) {
    if (crivo[i]) continue;
    primos.insert(i);
    for (long j = i; j < n; j += i) {
      crivo[j] = true;
    }
  }
  return primos;
}

long fat(long k, long a=1)
{
  long x = 1;
  FOR (i, a, k+1) {
    x = (x * i);
  }
  return x;
}

long a[101][101];

int main()
{
  string pass;
  long n;
  cin >> pass >> n;

  vector<string> a;
  FOR (i, 0, n) {
    string s;
    cin >> s;
    a.pb(s);
    if (s == pass) {
      puts("YES");
      return 0;
    }
  }
  FOR (i, 0, n) {
    FOR (j, 0, n) {
      if (a[i][1] == pass[0] and a[j][0] == pass[1]) {
        puts("YES");
        return 0;
      }
    }
  }
  puts("NO");
}
