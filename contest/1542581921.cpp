#include <bits/stdc++.h>
using namespace std;
#define popCnt(x) (__builtin_popcountll(x))
typedef long long Long;
typedef long double Double;

const int N = 17;

int cnt[N];

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifdef Local
  freopen("test.in", "r", stdin);
#else
#define endl '\n'
#endif

  int n, k;
  cin >> n >> k;

  while (n--) {
    int mask = 0;
    for (int i = 0; i < k; ++i) {
      int x;
      cin >> x;

      mask = 2 * mask + x;
    }
    ++cnt[mask];
  }

  k = 4;

  for (int mask = 1; mask < (1 << N); ++mask) {
    bool valid = true;
    for (int i = 0; i < N; ++i) {
      if (cnt[i] == 0 && ((mask >> i) & 1)) {
        valid = false;
      }
    }
    if (!valid) continue;

    vector<int> sum(4, 0);

    for (int i = 0; i < N; ++i) {
      if ((~mask >> i) & 1) continue;
      for (int j = 0; j < 4; ++j) {
        sum[j] += ((i >> j) & 1);
      }
    }

    int tot = popCnt(mask);

    for (int x : sum) {
      if (x > tot / 2) {
        valid = false;
      }
    }

    if (valid) {
      cout << "YES";
      return 0;
    }

  }

  cout << "NO";
}

