#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
  cin.tie(0);
  cin.sync_with_stdio(0);

  auto perfect = [](int x) {
    int sum = 0;
    while (x) {
      sum += x % 10;
      x /= 10;
    }
    return sum == 10;
  };

  int k;
  cin >> k;
  int i = 19;
  while (k) k -= perfect(i++);
  cout << i - 1;
}