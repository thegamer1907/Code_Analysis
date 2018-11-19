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
  int n;
  bool found_first = false;
  bool found_second = false;
  bool found_first_b = false;
  bool found_second_b = false;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    string t;
    cin >> t;
    if (s == t) {
      printf("YES");
      return 0;
    }
    if (t[0] == s[1]) {
      found_first_b = true;
    }
    if (t[1] == s[0]) {
      found_second_b = true;
    }
  }
  if ((found_first && found_second) || (found_first_b && found_second_b)) {
    printf("YES");
  } else {
    printf("NO");
  }
}
