#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;

void solve() {
  int n;
  cin >> n;
  std::vector<int> as(n);
  for (auto& a : as) {
    cin >> a;
  }
  int ans = 1;
  int pre = as.front();
  int seq = 1;
  for(auto a : as) {
    if (pre < a) {
      seq++;
      ans = std::max(ans, seq);
    } else {
      seq = 1;
    }
    pre = a;
  }
  cout << ans << endl;
}

int main() {
  std::ios::sync_with_stdio(false);
  cout << std::fixed;
  cout.precision(10);
#ifdef _DEBUG
  freopen("in.txt", "r", stdin);
  freopen("out.txt", "w", stdout);
  while (!cin.eof())
#endif
    solve();
  return 0;
}