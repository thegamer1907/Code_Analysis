#include <bits/stdc++.h>
#define mp make_pair
#define mt make_tuple
#define ll long long

using namespace std;

int main() {
#ifdef LOCAL_DEFINE
  freopen("sol.in", "rt", stdin);
#endif
  bool flag1 = 1, flag2 = 1;
  int hh, mm, ss, t1, t2;
  cin >> hh >> mm >> ss >> t1 >> t2;
  hh *= 10;
  hh %= 120;
  t1 *= 10;
  t2 *= 10;
  t1 %= 120;
  t2 %= 120;
  bool use[120];
  ss *= 2;
  mm *= 2;
  memset(use, 1, sizeof use);
  use[ss] = 0;
  if (ss == 0) {
    use[mm] = 0;
  }
  else {
    use[mm + 1] = 0;
  }
  if (ss == 0 && mm == 0) {
    use[hh] = 0;
  }
  else {
    use[hh + 1] = 0;
  }
  for (int x = t1; x != t2; x = (x + 1) % 120) {
    if (use[x] == 0) {
      flag1 = 0;
    }    
  }
  for (int x = t1; x != t2; x = (x - 1 + 120) % 120) {
    if (use[x] == 0) {
      flag2 = 0;
    }
  }
  if (use[t2] == 0) flag1 = flag2 = 0;
  if (flag1 || flag2) {
    puts("YES");
  }
  else {
    puts("NO");
  }
#ifdef LOCAL_DEFINE
  cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
  return 0;
} 