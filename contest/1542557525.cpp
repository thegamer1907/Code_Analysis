#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <utility>
#include <algorithm>
#include <string>
#include <queue>
#include <set>
#include <list>
#include <stack>
#include <bitset>
#include <cmath>
#include <climits>
#include <cassert>
#include <string.h>

using namespace std;

int t1, t2;
int h, m, s;

int main(int argc, char** argv) {
  std::ios::sync_with_stdio(false);

  cin >> h >> m >> s >> t1 >> t2;

  if (t1 == t2) {
    cout << "YES\n";
    return 0;
  }

  int dir = 0;
  if ((s == t1) || (s == t2)) {
    dir = dir;
  } else {
    dir = (s > 5 * min(t1, t2) && s < 5 * max(t1, t2) ? 1 : -1);
  }

  if ((s == 0) && ((m == t1) || (m == t2))) {
    dir = dir;
  } else {
    double dm = (double)m + (double)s / 60.0;
    int ndir = (dm > 5 * min(t1, t2) && dm < 5 * max(t1, t2) ? 1 : -1);
    if ((dir != 0) && (ndir != dir)) {
      cout << "NO\n";
      return 0;
    }
    dir = ndir;
  }

  if ((s == 0) && (m == 0) && ((h == t1) || (h == t2))) {
    dir = dir;
  } else {
    double dh = (double)h + (double)m /60.0 + (double)s / 3600.0;
    int ndir = (dh > min(t1, t2) && dh < max(t1, t2) ? 1 : -1);
    if ((dir != 0) && (ndir != dir)) {
      cout << "NO\n";
      return 0;
    }
    dir = ndir;
  }

  cout << "YES\n";
}