#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using ::std::cin;
using ::std::cout;
using ::std::endl;
using ::std::partial_sum;
using ::std::upper_bound;
using ::std::vector;

int main() {
  ::std::ios_base::sync_with_stdio(false);
  int n, q;
  cin >> n >> q;
  vector<long long> a(n);
  for (int i = 0; i < n; ++i)
    cin >> a[i];
  vector<long long> s(n);
  partial_sum(a.begin(), a.end(), s.begin());
  long long currentSumOfK = 0;
  for (int i = 0; i < q; ++i) {
    long long k;
    cin >> k;
    currentSumOfK += k;
    auto firstStanding = upper_bound(s.begin(), s.end(), currentSumOfK);
    if (firstStanding == s.end()) {
      currentSumOfK = 0;
      cout << n << "\n";
    } else {
      cout << s.end() - firstStanding << "\n";
    }
  }
  return 0;
}
