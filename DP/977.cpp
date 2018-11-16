#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int count_1(vector<int>v) {
  int ans = 0;
  for (auto x : v) {
    if (x) ans++;
  }
  return ans;
}

int main() {
  int n;cin >> n;
  vector<int>v(n, 0);
  for (int i = 0; i < n; ++i) cin >> v[i];
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = i; j < n; ++j) {
      for (int k = i; k <= j; ++k) {
        v[k] ^= 1;
      }
      ans = max(ans, count_1(v));
      for (int k = i; k <= j; ++k) {
        v[k] ^= 1;
      }
    }
  } 
  cout << ans << endl;
  return 0;
}