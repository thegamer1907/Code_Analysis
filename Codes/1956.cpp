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

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> v(n);
  for (int& e : v) cin >> e;

  unordered_map<long long, int> cnt;
  // Smaller than me.
  vector<int> before(n);
  for (int i = 0; i < n; i++) {
    if (v[i] % k == 0) {
      before[i] = cnt[v[i] / k];
    }
    cnt[v[i]]++;
  }

  cnt.clear();
  // Greater than me.
  vector<int> after(n);
  for (int i = n - 1; i >= 0; i--) {
    long long tmp = (long long) v[i] * (long long) k;
    after[i] = cnt[tmp];
    cnt[v[i]]++;
  }

  long long ans = 0;
  for (int i = 0; i < n; i++) {
    ans += (long long) before[i] * (long long) after[i];
  }
  cout << ans << endl;

  return 0;
}
