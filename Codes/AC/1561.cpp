#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using ::std::accumulate;
using ::std::cin;
using ::std::cout;
using ::std::endl;
using ::std::sort;
using ::std::vector;

long long getCost(const vector<int>& a, int k) {
  int n = a.size();
  vector<long long> ak(n);
  for (int i = 0; i < n; ++i)
    ak[i] = a[i] + (long long) (1 + i) * k;
  sort(ak.begin(), ak.end());
  return accumulate(ak.begin(), ak.begin() + k, 0LL);
}

int main() {
  int n, s;
  cin >> n >> s;
  vector<int> a(n);
  for (int i = 0; i < n; ++i)
    cin >> a[i];
  int x = 0, y = n;
  while (x <= y) {
    int k = (x + y) / 2;
    if (getCost(a, k) <= s)
      x = k + 1;
    else
      y = k - 1;
  }
  cout << y << " " << getCost(a, y) << endl;
}