#include <bits/stdc++.h>

using namespace std;

long long n, k, ans;
map <long long, long long> l;
map <long long, long long> r;

int main() {
  cin >> n >> k;
  vector <long long> x(n);
  for (int i = 0; i < n; ++i) {
    cin >> x[i];
    r[x[i]]++;
  }
  for (int i = 0; i < n; ++i) {
    r[x[i]]--;
    if (x[i] % k == 0) {
      ans += (l[x[i] / k] * r[x[i] * k]);
    }
    l[x[i]]++;
  }
  cout << ans;
}