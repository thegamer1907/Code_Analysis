#include <bits/stdc++.h>

using namespace std;

#ifdef ACMTUYO
struct RTC{~RTC(){cerr << "Time: " << clock() * 1.0 / CLOCKS_PER_SEC <<" seconds\n";}} runtimecount;
#define DBG(X) cerr << #X << " = " << X << '\n';
#else
struct RTC{};
#define DBG(X)
#endif

#define fast_io() ios_base::sync_with_stdio(false)
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define eb emplace_back
#define sz(x) ((int)(x).size())
#define all(c) (c).begin(),(c).end()
#define forn(i, n) for (int i = 0; i < (n); i++)
typedef long long int number;
const int maxn = 100010;
bool in_set[maxn] = {false};
int v[maxn], cnt[maxn];
int n, m;
int main() {
  scanf("%d %d", &n, &m);
  forn (i, n) {
    scanf("%d", v + i);
  }
  cnt[n] = 0;
  for (int i = n-1; i >= 0; i--) {
    cnt[i] = cnt[i + 1];
    if (!in_set[v[i]]) {
      cnt[i]++;
      in_set[v[i]] = true;
    }
  }
  while (m--) {
    int i;
    scanf("%d\n", &i);
    printf("%d\n", cnt[i-1]);
  }
  return 0;
}
