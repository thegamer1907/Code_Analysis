#include <bits/stdc++.h>
#define fst first
#define snd second
#define pb(a) push_back(a)
#define mp(a, b) make_pair(a, b) 
#define forn(i, a, b) for (int i = a; i < b; i++)
#define l_b(v, a) lower_bound(v.begin(), v.end(), a)
#define u_b(v, a) upper_bound(v.begin(), v.end(), a)
using namespace std;

typedef long long lli;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef double d;
const int oo = (1<<30);

int main() {
  d h, m, s, t1, t2;
  cin >> h >> m >> s >> t1 >> t2;

  if (t1 > t2) swap(t1, t2);
  d hour = h + (m/60.0) + (s/3600.0);
  d min = m + (s/60.0);
  d seg = s;
  //cout << hour << " " << min << " " << seg << '\n';
  
  bool flag = 1;
  if (hour > t1 && hour < t2) flag &= 0;
  if (min > 5.0 * t1 && min < 5.0 * t2) flag &= 0;
  if (seg > 5.0 * t1 && seg < 5.0 * t2) flag &= 0;

  //cout << "---\n";
  if (flag) {
    cout << "YES\n";
    return 0;
  }

  flag = 1;
  if (!(hour > t1 && hour < t2)) flag &= 0;
  if (!(min > 5.0 * t1 && min < 5.0 * t2)) flag &= 0;
  if (!(seg > 5.0 * t1 && seg < 5.0 * t2)) flag &= 0;
  cout << ((flag) ? "YES\n" : "NO\n");
  return 0;
}