#include <iostream>
#include <cassert>
using namespace std;

bool run(long long n, long long k) {
  long long tn = n;
  long long left = 0;
  long long right = 0;
  while (tn > 0) {
    left += min(k, tn);
    if (left >= (n + 1) / 2) return true;
    tn -= min(tn, k);
    right += tn / 10;
    if (right > (n + 1) / 2) return false;
    tn -= tn / 10;
  }
  return left >= (n + 1) / 2;
}

int main() {
  long long n;
  cin >> n;
  long long lo = 1, hi = n, res = -1;
  while (lo <= hi) {
    long long mid = (lo + hi) / 2;
    if (run(n, mid)) {
      res = mid;
      hi = mid - 1;
    } else {
      lo = mid + 1;
    }
  }
  assert(res != -1);
  cout << res;
}
