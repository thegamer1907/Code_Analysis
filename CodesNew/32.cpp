#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l;
  cin >> n >> l;
  vector<double> lanterns(n);
  for (int i = 0; i < n; i++) {
    cin >> lanterns[i];
  }
  sort(lanterns.begin(), lanterns.end());
  int maxInt = lanterns[1] - lanterns[0];
  for (int i = 1; i < lanterns.size(); i++) {
    int m = lanterns[i] - lanterns[i - 1];
    if (m > maxInt) maxInt = m;
  }
  // cout << maxInt << endl;
  cout << fixed << setprecision(10) << max(max((double)maxInt / 2, lanterns[0] - 0), l - lanterns[n - 1]) << endl;
  // cout << poss(lanterns, 2, l);
}
