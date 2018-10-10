#include <bits/stdc++.h>

using namespace std;

const int N = 11111111;

int last[N];
int f[N];

int main() {
  for (int i = 0; i < N; ++i) {
    last[i] = i;
  }
  for (int i = 2; i * i < N; ++i) {
    if (last[i] == i) {
      for (int j = i; j * i < N; ++j) {
        last[j * i] = i;
      }
    }
  }
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    int x;
    scanf("%d", &x);
    while (x > 1) {
      int t = last[x];
      ++f[t];
      while (x % t == 0) {
        x /= t;
      }
    }
  }
  for (int i = 1; i < N; ++i) {
    f[i] += f[i - 1];
  }
  int tt;
  scanf("%d", &tt);
  while (tt--) {
    int l, r;
    scanf("%d %d", &l, &r);
    l = min(l, (int) 1e7);
    r = min(r, (int) 1e7);
    printf("%d\n", f[r] - f[l - 1]);
  }
  return 0;
}