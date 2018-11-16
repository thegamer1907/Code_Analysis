#include <bits/stdc++.h>
using namespace std;

////////////// Prewritten code follows. Look down for solution. ////////////////
#define x first
#define y second
#define len(x) ((int)(x).size())
using pii = pair<int, int>;
using ll = long long;
using llu = long long unsigned;
using ld = long double;

const ld EPS = 1e-9;
inline int cmp(ld x, ld y = 0, ld tol = EPS) {
  return (x <= y + tol) ? (x + tol < y) ? -1 : 0 : 1;
}

const int MOD = 1;
inline int mod (ll x, int m = MOD) {
  return (int)(((x%m) + m)%m);
}

////////////////////////// Solution starts below. //////////////////////////////

const int N = 3e4+10;

int n, m;
int a[N];

int main () {
  scanf ("%d %d", &n, &m);
  for (int i = 1; i <= n; i++)
    scanf ("%d", &a[i]);

  int pos = 1;
  while (pos < n && pos != m)
    pos += a[pos];
  printf ("%s\n", pos == m ? "YES" : "NO");
  
  return 0;
}
