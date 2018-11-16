#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> ans;
  int v = 1;
  while (n > 0) {
    int c = n % 10;
    for (int i = 0; i < c; i++) {
      if (i == ans.size()) {
        ans.push_back(v);
      } else {
        ans[i] += v;
      }
    }
    n /= 10;
    v *= 10;
  }
  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++) {
    printf("%d%c", ans[i], " \n"[i + 1 == ans.size()]);
  }
}
