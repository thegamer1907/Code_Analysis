#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(int argc, char *argv[]) {
  int n;
  ll k, ans = 0;
  cin >> n >> k;
  map<int, ll> mp1, mp2;
  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    if (t % k == 0) {
      ans += mp2[t / k];
      mp2[t] += mp1[t / k];
    }
    mp1[t]++;
  }
  cout << ans << endl;
  return 0;
}
