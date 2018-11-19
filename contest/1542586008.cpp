#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <set>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <memory.h>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <cassert>

using namespace std;

typedef long long LL;
typedef pair<int,int> PII;

#define MP make_pair
#define PB push_back
#define FF first
#define SS second

#define FORN(i, n) for (int i = 0; i <  (int)(n); i++)
#define FOR1(i, n) for (int i = 1; i <= (int)(n); i++)
#define FORD(i, n) for (int i = (int)(n) - 1; i >= 0; i--)

#define DEBUG(X) { cout << #X << " = " << (X) << endl; }
#define PR0(A,n) { cout << #A << " = "; FORN(_,n) cout << A[_] << ' '; cout << endl; }

// #define FL fflush(stdout)

#define MOD 1000000007
#define INF 2000000000
const int MAXN = 1e5 + 10;

int GLL(LL& x) {
  return scanf("%lld", &x);
}

int GI(int& x) {
  return scanf("%d", &x);
}

double h, m, s, t1, t2;
double d1, d2, d3, d4, d5;
int main() {
  cin >> h >> m >> s >> t1 >> t2;

  d3 = (s / 60);
  d2 = (m + d3) / 60;
  d1 = (h + d2) / 12;

  d3 *= 360;
  d2 *= 360;
  d1 *= 360;

  if (d1 > 360) d1 -= 360;
  if (d2 > 360) d2 -= 360;
  if (d3 > 360) d3 -= 360;

  t1 = t1 / 12 * 360;
  t2 = t2 / 12 * 360;
  if (t1 > 360) t1 -= 360;
  if (t2 > 360) t2 -= 360;

//  printf("%5.2lf:%5.2lf:%5.2lf\n", d1, d2, d3);
  if (t1 > t2) swap (t1, t2);
//  printf("t1 %lf, t2 %lf\n", t1, t2);

  bool cw = true;
  if (t1 < d1 && d1 < t2) cw = false;
  if (t1 < d2 && d2 < t2) cw = false;
  if (t1 < d3 && d3 < t2) cw = false;

  bool ccw = true;
  if (!(t1 <= d1 && d1 <= t2)) ccw = false;
  if (!(t1 <= d2 && d2 <= t2)) ccw = false;
  if (!(t1 <= d3 && d3 <= t2)) ccw = false;

//  printf("cw: %d, ccw %d\n", cw, ccw);

  if (ccw || cw) printf("YES\n");
  else printf("NO\n");

    
  return 0;
}
