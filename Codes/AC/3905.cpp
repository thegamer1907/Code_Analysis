#include <bitset>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>
#include <iterator>
#include <unordered_map>

#if DEBUG
#include "prettyprint.hpp"
#define print_container(c) cout << c << endl;
#endif

using namespace std;

int main () {
  string s;
  cin >> s;

  int burger_count = 0;
  int sausage_count = 0;
  int cheese_count = 0;

  for (int i = 0; i < s.size(); i++) {
    burger_count += s[i] == 'B';
    sausage_count += s[i] == 'S';
    cheese_count += s[i] == 'C';
  }

  int nb, ns, nc;
  scanf("%d %d %d", &nb, &ns, &nc);
  int pb, ps, pc;
  scanf("%d %d %d", &pb, &ps, &pc);

  long long ruples;
  cin >> ruples;
  long long l = 0;
  long long r = 10e13;
  long long best = 0;
  while (l <= r) {
    long long m = (l + r) / 2;
    long long ruples_left = ruples;
    long long needed_bread = (m * burger_count) - nb;
    if (needed_bread > 0) {
      ruples_left -= pb * needed_bread;
    }
    long long needed_sausage = (m * sausage_count) - ns;
    if (needed_sausage > 0) {
      ruples_left -= ps * needed_sausage;
    }
    long long needed_cheese = (m * cheese_count) - nc;
    if (needed_cheese > 0) {
      ruples_left -= pc * needed_cheese;
    }

    if (ruples_left < 0) {
      r = m - 1;
    } else {
      l = m + 1;
      best = m;
    }
  }
  cout << best;
}
