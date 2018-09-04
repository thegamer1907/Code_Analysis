#include <bits/stdc++.h> 

using namespace std;

long long n, m, k;

int main() {
  ios_base::sync_with_stdio(0);
  cin >> n >> m >> k;
  long long lo = 0, hi = n * m + 1;
  while (lo + 1 < hi) {
    long long mid = (lo + hi) / 2;
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
      sum += min(m, (mid - 1) / i);
    }
    if (sum < k) {
      lo = mid;
    }
    else {
      hi = mid;
    }
  }
  cout << lo << "\n";
  return 0;
}