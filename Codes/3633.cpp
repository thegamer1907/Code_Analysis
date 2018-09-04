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

using ll = long long;
using pll = pair<ll, ll>;

ll only_first(const vector<pll>& first, ll n, ll x, ll s) {
  ll best = x;
  for (const auto& e : first) {
    if (e.first > s) continue;

    best = min(best, e.second);
  }
  return n * best;
}

ll only_second(const vector<pll>& second, ll n, ll x, ll s) {
  ll best = n * x;
  for (const auto& e : second) {
    if (e.first > s) continue;

    ll remaining = max(0LL, n - e.second);
    best = min(best, remaining * x);
  }
  return best;
}

ll using_both(const vector<pll> &first, const vector<pll> &second, ll n, ll x,
              ll s) {
  vector<ll> best;
  for (const auto& e : first) {
    ll prev = best.empty() ? x : best.back();
    best.push_back(min(prev, e.second));
  }

  ll ans = n * x;
  int i = first.size() - 1;
  for (const auto& e : second) {
    if (e.first > s) continue;

    ll remaining_manapoints = s - e.first;
    ll remaining_n = max(0LL, n - e.second);

    while (i >= 0 && first[i].first > remaining_manapoints) {
      i--;
    }

    ll best_first = i >= 0 ? best[i] : x;
    ans = min(ans, remaining_n * best_first);
  }

  return ans;
}

int main() {
  ll n, m, k;
  cin >> n >> m >> k;

  ll x, s;
  cin >> x >> s;

  vector<pll> first(m);
  for (auto& e : first) cin >> e.second;
  for (auto& e : first) cin >> e.first;
  sort(begin(first), end(first));

  vector<pll> second(k);
  for (auto& e : second) cin >> e.second;
  for (auto& e : second) cin >> e.first;

  ll ans = only_first(first, n, x, s);
  ans = min(ans, only_second(second, n, x, s));
  ans = min(ans, using_both(first, second, n, x, s));
  cout << ans << endl;

  return 0;
}
