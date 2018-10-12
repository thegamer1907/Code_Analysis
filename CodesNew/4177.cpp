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

int binary_search(const vector<ll>& sums, ll val) {
  if (sums.back() <= val) return sums.size();
  return upper_bound(sums.begin(), sums.end(), val) - sums.begin();
}

int main() {
  int n, q;
  cin >> n >> q;

  ll s = 0;
  vector<ll> a(n);
  for (ll& e : a) {
    cin >> e;
    s += e;
    e = s;
  }

  ll accum = 0;
  while (q--) {
    ll val;
    cin >> val;

    accum += val;
    int len = binary_search(a, accum);
    if (len == a.size()) {
      accum = 0;
      len = 0;
    }
    
    cout << a.size() - len << endl;
  }

  return 0;
}
