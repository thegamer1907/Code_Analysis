#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <list>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

int go(const string& s, char c, int k) {
  int last = 0;
  int count = 0;
  int ans = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == c) count++;
    while (count > k) {
      if (s[last] == c) {
        count--;
      }
      last++;
    }

    ans = max(ans, i - last + 1);
  }

  return ans;
}

int main() {
  int n, k;
  cin >> n >> k;

  string s;
  if (n) cin >> s;

  cout << max(go(s, 'a', k), go(s, 'b', k)) << endl;

  return 0;
}
