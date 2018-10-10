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

int n, l;
vector<int> v;

int main ()
{
  scanf ("%d %d", &n, &l);
  int x;
  while (n--) {
    scanf ("%d", &x);
    v.pb (x);
  }

  sort (v.begin(), v.end());
  ld maxi = -1;
  for (int i = 1; i < v.size(); i++)
    maxi = max (maxi, (ld)v[i]-v[i-1]);
  maxi /= 2;
  maxi = max(max (maxi, (ld) v[0]), (ld)l-v[v.size()-1]);
  printf ("%Lf\n", maxi);

  return 0;
}
