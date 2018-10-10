#include <bits/stdc++.h>

using namespace std;

bool ok(long long x, int n, int m, long long k) {
  int mx = max(n, m);
  int mn = min(n, m);
  long long res = 0;
  for (int i = 1; i <= mn; i++) {
    long long d = x / i;
    res += min(d, (long long) mx);
  }
  return res >= k;
}

int main() {
  int n, m;
  long long k;
  scanf("%d %d %lld", &n, &m, &k);
  long long low = 1, high = (long long) n * m, mid;
  while (low < high) {
    mid = low + high >> 1;
    if (ok(mid, n, m, k)) high = mid;
    else low = mid + 1;
  }
  printf("%lld\n", low);
  return 0;
}