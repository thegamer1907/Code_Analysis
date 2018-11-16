#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;

void solve() {
  int n, m;
  cin >> n >> m;
  std::vector<int> a(n);
  for(auto& ob : a) {
    cin >> ob;
  }
  std::vector<int> ans;
  ans.reserve(a.size());
  std::set<int> set;
  for(auto it = a.rbegin(); it != a.rend(); ++it) {
    set.insert(*it);
    ans.push_back(set.size());
  }
  while(m--) {
    int l;
    cin >> l;
    cout << ans[ans.size() - l] << "\n";
  }
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