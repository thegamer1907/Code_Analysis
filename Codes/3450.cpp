#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n;
  scanf("%lld", &n);
  long long lo = 0, hi = n + 1;
  while (hi - lo > 1) {
    long long mid = (lo + hi) >> 1;
    long long x = n, eat = 0;
    while (x > 0) {
      long long z = min(mid, x);
      x -= z;
      eat += z;
      x -= x / 10;
    }
    if (eat >= ((n + 1) / 2)) {
      hi = mid;
    } else {
      lo = mid;
    }
  }
  printf("%lld\n", hi);
  return 0;
}