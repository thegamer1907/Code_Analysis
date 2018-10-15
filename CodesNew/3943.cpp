using namespace std;

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>

vector<unsigned long long int> sums;
map<unsigned long long int, int> existing;

int main(void) {
  int n = 0, q = 0;
  cin >> n >> q;

  unsigned long long int acc = 0;
  sums.reserve((sizeof acc) * n);

  for (int i = 0; i < n; ++i) {
    unsigned long long int current = 0;
    cin >> current;
    acc += current;
    sums.push_back(acc);
  }

  acc = 0;
  for (int i = 0; i < q; ++i) {
    unsigned long long int query = 0;
    cin >> query;
    acc += query;

    if (acc >= sums.back()) {
      cout << n << endl;
      acc = 0;
      continue;
    }

    auto cached = existing.find(acc);
    if (cached != existing.end()) {
      cout << cached->second << endl;
      continue;
    }

    auto it = upper_bound(sums.begin(), sums.end(), acc) - sums.begin();
    existing.emplace(acc, n - it);
    cout << n - it << endl;
  }
}