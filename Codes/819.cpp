#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n, k;
  scanf("%lld %lld", &n, &k);
  long long low = 1, high = (1LL << n) - 1;
  while (low != high) {
    long long mid = (low + high) >> 1;
    if (k == mid) {
      printf("%lld\n", n);
      return 0;
    } else if (k < mid) {
      --n;
      high = mid - 1;
    } else {
      --n;
      low = mid + 1;
    }
  }
  assert(n == 1);
  printf("%lld", n);
  return 0;
}