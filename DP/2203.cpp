#include <bits/stdc++.h>
using namespace std;

////////////// Prewritten code follows. Look down for solution. ////////////////
#define x first
#define y second
#define pb push_back
#define foreach(x, v) for (typeof (v).begin() x=(v).begin(); x !=(v).end(); ++x)
#define For(i, a, b) for (int i=(a); i<(b); ++i)
#define D(x) cerr << #x " is " << (x) << endl
#define len(x) (int)x.size()
#define X real()
#define Y imag()
#define mp make_pair
using pii = pair<int, int>;
using ll = long long;
using ld = long double;
const int INF = 1e9;
  
const double EPS = 1e-9;
int cmp(double x, double y = 0, double tol = EPS) {
  return (x <= y + tol) ? (x + tol < y) ? -1 : 0 : 1;
}

////////////////////////// Solution starts below. //////////////////////////////

const int N = 1e5+10;

int n, m;
int a[N], ans[N];
bool bucket[N];

int main ()
{
  scanf ("%d %d", &n, &m);
  for (int i = 0; i < n; i++)
    scanf ("%d", &a[i]);
  for (int i = n-1; i >= 0; i--)
    if (!bucket[a[i]]) {
      bucket[a[i]] = true;
      ans[i+1] = ans[i+2]+1;
    } else
      ans[i+1] = ans[i+2];
  int x;
  while (m--) {
    scanf ("%d", &x);
    printf ("%d\n", ans[x]);
  }

  return 0;
}
