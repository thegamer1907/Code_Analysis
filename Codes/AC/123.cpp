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

int n, x;
vector<ll> v;

int main ()
{
  scanf ("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf ("%d", &x);
    if (!v.empty())
      v.pb (v.back()+x);
    else
      v.pb (x);
  }

  scanf ("%d", &n);
  ll val;
  while (n--) {
    scanf ("%lld", &val);
    auto it = lower_bound (v.begin(), v.end(), val);
    printf ("%ld\n", (it-v.begin())+1);
  }

  return 0;
}