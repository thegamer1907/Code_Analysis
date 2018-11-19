#include <bits/stdc++.h>
using namespace std;
#define popCnt(x) (__builtin_popcountll(x))
typedef long long Long;
typedef long double Double;

const int N = 203;
const int K = 12;

int toInt(const string& s) {
  int res = 0;
  for (int i = s.size() - 1; i >= 0; --i) {
    if (s[i] == '?') return -1;
    res *= 2;
    res += s[i] - '0';
  }
  return res;
}

bitset<1 << K> all_masks[K];

struct Element {
  string all;

  bitset<1 << K> exist[K];

  Element() {
    for (auto& x : exist) {
      x.reset();
    }
  }

  void buildExist() {
    for (int k = 1; k < K; ++k) {
      for (int i = 0; i + k <= all.size(); ++i) {
        int res = toInt(all.substr(i, k));
        if (res == -1) continue;
        exist[k].set(res, true);
      }
    }
  }

  void prune() {
    if (all.size() <= 2 * K) return;
    string first = all.substr(0, K);
    string last = all.substr(all.size() - K);

    all = first + '?' + last;
  }

  int getK() {
    for (int k = 1; k < K; ++k) {
      if (exist[k].count() != (1 << k)) {
        return k - 1;
      }
    }
    assert(false);
    return -1;
  }

} elems[N];

void init() {
  for (int k = 0; k < K; ++k) {
    for (int mask = 0; mask < (1 << k); ++mask) {
      all_masks[k].set(mask, true);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifdef Local
  freopen("test.in", "r", stdin);
#else
#define endl '\n'
#endif

  init();

  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> elems[i].all;
    elems[i].buildExist();
    elems[i].prune();
  }

  int m;
  cin >> m;

  for (int i = n; i < n + m; ++i) {
    int a, b;
    cin >> a >> b;
    --a, --b;

    for (int k = 1; k < K; ++k) {
      elems[i].exist[k] = elems[a].exist[k] | elems[b].exist[k];
    }

    elems[i].all = elems[a].all + elems[b].all;
    elems[i].buildExist();
    elems[i].prune();

    cout << elems[i].getK() << endl;
  }

}

