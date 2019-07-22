#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.precision(10);
  cout << fixed;
  long long n, m, k;
  vector<long long> p;
  cin >> n >> m >> k;
  for (int i = 0; i < m; i++) {
    long long x;
    cin >> x;
    p.push_back(x);
  }
  long long kt = 0;
  long long ans = 0;
  long long t;
  while (!p.empty()) {

    t = (p[0] - kt) / k;
    if ((p[0] - kt) % k != 0) t++;
    t = t * k + kt;
    while (!p.empty() && p[0] <= t) {
        p.erase(p.begin());
        kt++;
    }
    ans++;
  }
  cout << ans;


  return 0;
}