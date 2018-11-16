#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#define eprintf(...) fprintf(stderr, __VA_ARGS__)
#else
#define eprintf(...) 42
#endif

int main() {
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int n;
  scanf("%d", &n);
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }
  int m;
  scanf("%d", &m);
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    scanf("%d", &b[i]);
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int ans = 0;
  for (int i = 0, j = 0; i < n && j < m; ) {
    if (abs(a[i] - b[j]) <= 1) {
      ++ans;
      ++i; ++j;
    } else if (a[i] < b[j]) {
      ++i;
    } else {
      ++j;
    }
  }
  printf("%d\n", ans);
  return 0;
}

