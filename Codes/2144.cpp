#include <iostream>
#include <numeric>
#include <unordered_set>
#include <vector>

using ::std::accumulate;
using ::std::cin;
using ::std::cout;
using ::std::endl;
using ::std::unordered_set;
using ::std::vector;

int main() {
  ::std::ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<int> d(n);
  for (int &di : d)
    cin >> di;
  long long currentPrefixSum = 0, currentSuffixSum = accumulate(d.begin(), d.end(), 0LL);
  unordered_set<long long> currentPrefixSums {0};
  for (int di : d) {
    currentPrefixSum += di;
    currentSuffixSum -= di;
    currentPrefixSums.insert(currentPrefixSum);
    if (currentPrefixSums.count(currentSuffixSum)) {
      cout << currentSuffixSum << endl;
      return 0;
    }
  }
  cout << 0 << endl;
  return 0;
}
